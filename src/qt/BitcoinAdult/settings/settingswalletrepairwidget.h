// Copyright (c) 2019-2023 The BTAD developers
// Copyright (c) 2019 The BITCOINADULT developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef SETTINGSWALLETREPAIRWIDGET_H
#define SETTINGSWALLETREPAIRWIDGET_H

#include <QWidget>
#include "qt/BitcoinAdult/pwidget.h"

namespace Ui {
class SettingsWalletRepairWidget;
}

class SettingsWalletRepairWidget : public PWidget
{
    Q_OBJECT

public:
    explicit SettingsWalletRepairWidget(BITCOINADULTGUI* _window, QWidget *parent = nullptr);
    ~SettingsWalletRepairWidget();

    /** Build parameter list for restart */
    void buildParameterlist(QString arg);

signals:
    /** Get restart command-line parameters and handle restart */
    void handleRestart(QStringList args);

public slots:
    void walletSalvage();
    void walletRescan();
    void walletZaptxes1();
    void walletZaptxes2();
    void walletUpgrade();
    void walletReindex();
    void walletResync();

private:
    Ui::SettingsWalletRepairWidget *ui;
};

#endif // SETTINGSWALLETREPAIRWIDGET_H
