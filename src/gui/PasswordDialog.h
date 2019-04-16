// Copyright (c) 2011-2017 The Cryptonote developers
// Copyright (c) 2018 The Circle Foundation & Conceal Devs
// Copyright (c) 2019 Conceal Network & Conceal Devs
//  
// Copyright (c) 2018 The Circle Foundation & Conceal Devs
// Copyright (c) 2019 Conceal Network & Conceal Devs
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once

#include <QDialog>

namespace Ui {
class PasswordDialog;
}

namespace WalletGui {

class PasswordDialog : public QDialog {
  Q_OBJECT
  Q_DISABLE_COPY(PasswordDialog)

public:
  PasswordDialog(bool _error, QWidget* _parent);
  ~PasswordDialog();

  QString getPassword() const;

private:
  QScopedPointer<Ui::PasswordDialog> m_ui;
};

}
