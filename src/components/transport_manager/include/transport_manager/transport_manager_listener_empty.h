/**
 * \file transport_manager_listener_empty.h
 * \brief TransportManagerListenerEmpty class header file.
 *
 * Copyright (c) 2013, Ford Motor Company
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * Redistributions of source code must retain the above copyright notice, this
 * list of conditions and the following disclaimer.
 *
 * Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following
 * disclaimer in the documentation and/or other materials provided with the
 * distribution.
 *
 * Neither the name of the Ford Motor Company nor the names of its contributors
 * may be used to endorse or promote products derived from this software
 * without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef SRC_COMPONENTS_TRANSPORT_MANAGER_INCLUDE_TRANSPORT_MANAGER_TRANSPORT_MANAGER_LISTENER_EMPTY_H_
#define SRC_COMPONENTS_TRANSPORT_MANAGER_INCLUDE_TRANSPORT_MANAGER_TRANSPORT_MANAGER_LISTENER_EMPTY_H_

#include "transport_manager/info.h"
#include "transport_manager/transport_manager_listener.h"
#include "transport_manager/transport_manager_impl.h"

namespace transport_manager {

/**
 * @brief Empty implementation class for transport manager listener.
 */
class TransportManagerListenerEmpty : public TransportManagerListener {
  const TransportManagerImpl *transport_manager_;
 public:

  /**
   * @Destructor.
   */
  virtual ~TransportManagerListenerEmpty(){};

  /**
   * @brief Reaction to the event, when the list of devices is updated.
   *
   * @param Container that holds information about devices.
   */
  virtual void OnDeviceListUpdated(const std::vector<DeviceInfo>&) {
  }

  /**
   * @brief Reaction to the event, when the device is found.
   *
   * @param device_info Variable that hold information about device.
   */
  virtual void OnDeviceFound(const DeviceInfo& device_info) {
  }

  /**
   * @brief Reaction to the event, when scanning of devices is finished.
   */
  virtual void OnScanDevicesFinished() {
  }

  /**
   * @brief Reaction to the event, when scanning of devices is failed.
   *
   * @param error Error information about possible reason of scanning of devices failure.
   */
  virtual void OnScanDevicesFailed(const SearchDeviceError& error) {
  }

  /**
   * @brief Reaction to the event, when connection is established.
   *
   * @param devcie_info Variable that hold information about device.
   * @param connection_id connection unique identifier.
   */
  virtual void OnConnectionEstablished(const DeviceInfo &device_info,
                                       const ConnectionUID &connection_id) {
  }

  /**
   * @brief Reaction to the event, when connection to the device is failed.
   *
   * @param device_info Variable that hold information about device.
   * @param error Error information about possible reason of connect failure.
   */
  virtual void OnConnectionFailed(const DeviceInfo &device_info,
                                  const ConnectError& error) {
  }

  /**
   * @brief Reaction to the event, when connection is closed.
   *
   * @param connection_id Connection unique identifier.
   */
  virtual void OnConnectionClosed(ConnectionUID connection_id) {
  }

  virtual void OnUnexpectedDisconnect(ConnectionUID connection_id,
                                      const CommunicationError& error) {
  }

  /**
   * @brief Reaction to the event, when connection close is failed.
   *
   * @param connection_id Connection unique identifier.
   * @param error Error information about possible reason of failure.
   */
  virtual void OnConnectionClosedFailure(ConnectionUID connection_id,
                                         const DisconnectError& error) {
  }

  /**
   * @brief Reaction to the event, when connection with the device is lost.
   *
   * @param device Handle of device.
   * @param error Error information about possible reason of lost connection.
   */
  virtual void OnDeviceConnectionLost(const DeviceHandle& device,
                                      const DisconnectDeviceError& error) {
  }

  /**
   * @brief Reaction to the event, when Disconnect is failed.
   *
   * @param device Handle of device.
   * @param error Error information about possible reason of Disconnect failure.
   */
  virtual void OnDisconnectFailed(const DeviceHandle& device,
                                  const DisconnectDeviceError& error) {
  }

  /**
   * @brief Reaction to the event, when transport manager received a massage.
   *
   * @param message Smart pointer to the raw massage.
   * @param connection_id Connection unique identifier.
   */
  virtual void OnTMMessageReceived(const RawMessageSptr message) {
  }

  /**
   * @brief Reaction to the event, when receiving of massage for transport manager is failed.
   *
   * @param connection_id connection unique identifier.
   * @param error Error information about possible reason of failure.
   */
  virtual void OnTMMessageReceiveFailed(ConnectionUID connection_id,
                                        const DataReceiveError& error) {
  }

  /**
   * @brief Reaction to the event, when transport manager sent a massage.
   */
  virtual void OnTMMessageSend() {
  }

  /**
   * @brief Reaction to the event, when sending of massage by transport manager is failed.
   *
   * @param error Error information about possible reason of failure.
   * @param message Smart pointer to the raw massage.
   */
  virtual void OnTMMessageSendFailed(const DataSendError& error,
                                     const RawMessageSptr message) {
  }
};
}  // namespace transport_manager
#endif  //  SRC_COMPONENTS_TRANSPORT_MANAGER_INCLUDE_TRANSPORT_MANAGER_TRANSPORT_MANAGER_LISTENER_EMPTY_H_
