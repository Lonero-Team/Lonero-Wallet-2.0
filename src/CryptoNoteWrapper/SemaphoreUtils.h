// Copyright (c) 2015-2017, The Bytecoin developers
//
// This file is part of Bytecoin.
//
// LuKa is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// LuKa is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with LuKa.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

class QSemaphore;

namespace WalletGui {

class SemaphoreLocker {
public:
  explicit SemaphoreLocker(QSemaphore& _semaphore);
  ~SemaphoreLocker();

  void wait();

private:
  QSemaphore& m_semaphore;
};

class SemaphoreUnlocker {
public:
  explicit SemaphoreUnlocker(QSemaphore& _semaphore);
  ~SemaphoreUnlocker();

private:
  QSemaphore& m_semaphore;
};

}
