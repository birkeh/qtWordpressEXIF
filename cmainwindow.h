#ifndef CMAINWINDOW_H
#define CMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class cMainWindow;
}

class cMainWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit cMainWindow(QWidget *parent = 0);
	~cMainWindow();

private:
	Ui::cMainWindow *ui;
};

#endif // CMAINWINDOW_H
