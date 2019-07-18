// Copyright (c) 2011-2017 The Cryptonote developers
// Copyright (c) 2018 The Circle Foundation
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once

#include <QDialog>

namespace Ui 
{
  class LanguageSettings;
}

namespace WalletGui {
  class LanguageSettings : public QDialog {

    Q_OBJECT

    public:
      explicit LanguageSettings(QWidget* _parent);
      ~LanguageSettings();

      QString setLanguage() const;
      void initLanguageSettings();
    
    private:
      QScopedPointer<Ui::LanguageSettings> m_ui;
  };
}
