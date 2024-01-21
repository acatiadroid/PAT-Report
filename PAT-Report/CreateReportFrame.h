#ifndef CREATEREPORTFRAME_H
#define CREATEREPORTFRAME_H

#include <wx/wx.h>

class CreateReportFrame : public wxFrame {
public:
	CreateReportFrame(const wxString& title, const wxPoint& pos, const wxSize& size);

	void OnClose(wxCloseEvent& event);
	void OnSubmitButtonClick(wxCommandEvent& event);

private:
	wxStaticText* lblName;
	wxStaticText* lblCompany;
	wxStaticText* lblAddress;
	wxStaticText* lblPostcode;
	wxStaticText* lblPhone;
	wxStaticText* lblEmail;
	wxStaticText* lblDate;

	wxTextCtrl* txtName;
	wxTextCtrl* txtCompany;
	wxTextCtrl* txtAddress;
	wxTextCtrl* txtPostcode;
	wxTextCtrl* txtPhone;
	wxTextCtrl* txtEmail;
	wxTextCtrl* txtDate;

	wxButton* btnSubmit;

	wxDECLARE_EVENT_TABLE();
};

#endif