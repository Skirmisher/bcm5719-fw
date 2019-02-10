////////////////////////////////////////////////////////////////////////////////
///
/// @file       bcm5719_DEVICE.h
///
/// @project    bcm5719
///
/// @brief      bcm5719_DEVICE
///
////////////////////////////////////////////////////////////////////////////////
///
////////////////////////////////////////////////////////////////////////////////
///
/// @copyright Copyright (c) 2018, Evan Lojewski
/// @cond
///
/// All rights reserved.
///
/// Redistribution and use in source and binary forms, with or without
/// modification, are permitted provided that the following conditions are met:
/// 1. Redistributions of source code must retain the above copyright notice,
/// this list of conditions and the following disclaimer.
/// 2. Redistributions in binary form must reproduce the above copyright notice,
/// this list of conditions and the following disclaimer in the documentation
/// and/or other materials provided with the distribution.
/// 3. Neither the name of the <organization> nor the
/// names of its contributors may be used to endorse or promote products
/// derived from this software without specific prior written permission.
///
////////////////////////////////////////////////////////////////////////////////
///
/// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
/// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
/// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
/// ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
/// LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
/// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
/// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
/// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
/// CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
/// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
/// POSSIBILITY OF SUCH DAMAGE.
/// @endcond
////////////////////////////////////////////////////////////////////////////////

/** @defgroup BCM5719_DEVICE_H    bcm5719_DEVICE */
/** @addtogroup BCM5719_DEVICE_H
 * @{
 */
#ifndef BCM5719_DEVICE_H
#define BCM5719_DEVICE_H

#include <stdint.h>

#ifdef CXX_SIMULATOR /* Compiling c++ simulator code - uses register wrappers */
#include <CXXRegister.h>
typedef CXXRegister<uint8_t,  0,  8> BCM5719_DEVICE_H_uint8_t;
typedef CXXRegister<uint16_t, 0, 16> BCM5719_DEVICE_H_uint16_t;
typedef CXXRegister<uint32_t, 0, 32> BCM5719_DEVICE_H_uint32_t;
#define BCM5719_DEVICE_H_uint8_t_bitfield(__pos__, __width__)  CXXRegister<uint8_t,  __pos__, __width__>
#define BCM5719_DEVICE_H_uint16_t_bitfield(__pos__, __width__) CXXRegister<uint16_t, __pos__, __width__>
#define BCM5719_DEVICE_H_uint32_t_bitfield(__pos__, __width__) CXXRegister<uint32_t, __pos__, __width__>
#define register_container struct
#define volatile
#define BITFIELD_BEGIN(__type__, __name__) struct {
#define BITFIELD_MEMBER(__type__, __name__, __offset__, __bits__) __type__##_bitfield(__offset__, __bits__) __name__;
#define BITFIELD_END(__type__, __name__) } __name__;

#else /* Firmware Data types */
typedef uint8_t  BCM5719_DEVICE_H_uint8_t;
typedef uint16_t BCM5719_DEVICE_H_uint16_t;
typedef uint32_t BCM5719_DEVICE_H_uint32_t;
#define register_container union
#define BITFIELD_BEGIN(__type__, __name__) struct {
#define BITFIELD_MEMBER(__type__, __name__, __offset__, __bits__) __type__ __name__:__bits__;
#define BITFIELD_END(__type__, __name__) } __name__;
#endif /* !CXX_SIMULATOR */

#define REG_DEVICE_BASE ((volatile void*)0xc0000000) /* Device Registers */

#define REG_DEVICE_MISCELLANEOUS_HOST_CONTROL ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0000068) /*  */
#define     DEVICE_MISCELLANEOUS_HOST_CONTROL_CLEAR_INTERRUPT_SHIFT 0u
#define     DEVICE_MISCELLANEOUS_HOST_CONTROL_CLEAR_INTERRUPT_MASK  0x1u
#define GET_DEVICE_MISCELLANEOUS_HOST_CONTROL_CLEAR_INTERRUPT(__reg__)  (((__reg__) & 0x1) >> 0u)
#define SET_DEVICE_MISCELLANEOUS_HOST_CONTROL_CLEAR_INTERRUPT(__val__)  (((__val__) << 0u) & 0x1u)
#define     DEVICE_MISCELLANEOUS_HOST_CONTROL_MASK_INTERRUPT_SHIFT 1u
#define     DEVICE_MISCELLANEOUS_HOST_CONTROL_MASK_INTERRUPT_MASK  0x2u
#define GET_DEVICE_MISCELLANEOUS_HOST_CONTROL_MASK_INTERRUPT(__reg__)  (((__reg__) & 0x2) >> 1u)
#define SET_DEVICE_MISCELLANEOUS_HOST_CONTROL_MASK_INTERRUPT(__val__)  (((__val__) << 1u) & 0x2u)
#define     DEVICE_MISCELLANEOUS_HOST_CONTROL_ENABLE_ENDIAN_BYTE_SWAP_SHIFT 2u
#define     DEVICE_MISCELLANEOUS_HOST_CONTROL_ENABLE_ENDIAN_BYTE_SWAP_MASK  0x4u
#define GET_DEVICE_MISCELLANEOUS_HOST_CONTROL_ENABLE_ENDIAN_BYTE_SWAP(__reg__)  (((__reg__) & 0x4) >> 2u)
#define SET_DEVICE_MISCELLANEOUS_HOST_CONTROL_ENABLE_ENDIAN_BYTE_SWAP(__val__)  (((__val__) << 2u) & 0x4u)
#define     DEVICE_MISCELLANEOUS_HOST_CONTROL_ENABLE_ENDIAN_WORD_SWAP_SHIFT 3u
#define     DEVICE_MISCELLANEOUS_HOST_CONTROL_ENABLE_ENDIAN_WORD_SWAP_MASK  0x8u
#define GET_DEVICE_MISCELLANEOUS_HOST_CONTROL_ENABLE_ENDIAN_WORD_SWAP(__reg__)  (((__reg__) & 0x8) >> 3u)
#define SET_DEVICE_MISCELLANEOUS_HOST_CONTROL_ENABLE_ENDIAN_WORD_SWAP(__val__)  (((__val__) << 3u) & 0x8u)
#define     DEVICE_MISCELLANEOUS_HOST_CONTROL_ENABLE_PCI_STATE_REGISTER_READ_DIV_WRITE_CAPABILITY_SHIFT 4u
#define     DEVICE_MISCELLANEOUS_HOST_CONTROL_ENABLE_PCI_STATE_REGISTER_READ_DIV_WRITE_CAPABILITY_MASK  0x10u
#define GET_DEVICE_MISCELLANEOUS_HOST_CONTROL_ENABLE_PCI_STATE_REGISTER_READ_DIV_WRITE_CAPABILITY(__reg__)  (((__reg__) & 0x10) >> 4u)
#define SET_DEVICE_MISCELLANEOUS_HOST_CONTROL_ENABLE_PCI_STATE_REGISTER_READ_DIV_WRITE_CAPABILITY(__val__)  (((__val__) << 4u) & 0x10u)
#define     DEVICE_MISCELLANEOUS_HOST_CONTROL_ENABLE_CLOCK_CONTROL_REGISTER_READ_DIV_WRITE_CAPABILITY_SHIFT 5u
#define     DEVICE_MISCELLANEOUS_HOST_CONTROL_ENABLE_CLOCK_CONTROL_REGISTER_READ_DIV_WRITE_CAPABILITY_MASK  0x20u
#define GET_DEVICE_MISCELLANEOUS_HOST_CONTROL_ENABLE_CLOCK_CONTROL_REGISTER_READ_DIV_WRITE_CAPABILITY(__reg__)  (((__reg__) & 0x20) >> 5u)
#define SET_DEVICE_MISCELLANEOUS_HOST_CONTROL_ENABLE_CLOCK_CONTROL_REGISTER_READ_DIV_WRITE_CAPABILITY(__val__)  (((__val__) << 5u) & 0x20u)
#define     DEVICE_MISCELLANEOUS_HOST_CONTROL_ENABLE_REGISTER_WORD_SWAP_SHIFT 6u
#define     DEVICE_MISCELLANEOUS_HOST_CONTROL_ENABLE_REGISTER_WORD_SWAP_MASK  0x40u
#define GET_DEVICE_MISCELLANEOUS_HOST_CONTROL_ENABLE_REGISTER_WORD_SWAP(__reg__)  (((__reg__) & 0x40) >> 6u)
#define SET_DEVICE_MISCELLANEOUS_HOST_CONTROL_ENABLE_REGISTER_WORD_SWAP(__val__)  (((__val__) << 6u) & 0x40u)
#define     DEVICE_MISCELLANEOUS_HOST_CONTROL_ENABLE_INDIRECT_ACCESS_SHIFT 7u
#define     DEVICE_MISCELLANEOUS_HOST_CONTROL_ENABLE_INDIRECT_ACCESS_MASK  0x80u
#define GET_DEVICE_MISCELLANEOUS_HOST_CONTROL_ENABLE_INDIRECT_ACCESS(__reg__)  (((__reg__) & 0x80) >> 7u)
#define SET_DEVICE_MISCELLANEOUS_HOST_CONTROL_ENABLE_INDIRECT_ACCESS(__val__)  (((__val__) << 7u) & 0x80u)
#define     DEVICE_MISCELLANEOUS_HOST_CONTROL_MASK_INTERRUPT_MODE_SHIFT 8u
#define     DEVICE_MISCELLANEOUS_HOST_CONTROL_MASK_INTERRUPT_MODE_MASK  0x100u
#define GET_DEVICE_MISCELLANEOUS_HOST_CONTROL_MASK_INTERRUPT_MODE(__reg__)  (((__reg__) & 0x100) >> 8u)
#define SET_DEVICE_MISCELLANEOUS_HOST_CONTROL_MASK_INTERRUPT_MODE(__val__)  (((__val__) << 8u) & 0x100u)
#define     DEVICE_MISCELLANEOUS_HOST_CONTROL_ENABLE_TAGGED_STATUS_MODE_SHIFT 9u
#define     DEVICE_MISCELLANEOUS_HOST_CONTROL_ENABLE_TAGGED_STATUS_MODE_MASK  0x200u
#define GET_DEVICE_MISCELLANEOUS_HOST_CONTROL_ENABLE_TAGGED_STATUS_MODE(__reg__)  (((__reg__) & 0x200) >> 9u)
#define SET_DEVICE_MISCELLANEOUS_HOST_CONTROL_ENABLE_TAGGED_STATUS_MODE(__val__)  (((__val__) << 9u) & 0x200u)
#define     DEVICE_MISCELLANEOUS_HOST_CONTROL_RCB_CHECK_SHIFT 10u
#define     DEVICE_MISCELLANEOUS_HOST_CONTROL_RCB_CHECK_MASK  0x400u
#define GET_DEVICE_MISCELLANEOUS_HOST_CONTROL_RCB_CHECK(__reg__)  (((__reg__) & 0x400) >> 10u)
#define SET_DEVICE_MISCELLANEOUS_HOST_CONTROL_RCB_CHECK(__val__)  (((__val__) << 10u) & 0x400u)
#define     DEVICE_MISCELLANEOUS_HOST_CONTROL_INTERRUPT_CHECK_SHIFT 11u
#define     DEVICE_MISCELLANEOUS_HOST_CONTROL_INTERRUPT_CHECK_MASK  0x800u
#define GET_DEVICE_MISCELLANEOUS_HOST_CONTROL_INTERRUPT_CHECK(__reg__)  (((__reg__) & 0x800) >> 11u)
#define SET_DEVICE_MISCELLANEOUS_HOST_CONTROL_INTERRUPT_CHECK(__val__)  (((__val__) << 11u) & 0x800u)
#define     DEVICE_MISCELLANEOUS_HOST_CONTROL_BYTE_ENABLE_RULE_CHECK_SHIFT 12u
#define     DEVICE_MISCELLANEOUS_HOST_CONTROL_BYTE_ENABLE_RULE_CHECK_MASK  0x1000u
#define GET_DEVICE_MISCELLANEOUS_HOST_CONTROL_BYTE_ENABLE_RULE_CHECK(__reg__)  (((__reg__) & 0x1000) >> 12u)
#define SET_DEVICE_MISCELLANEOUS_HOST_CONTROL_BYTE_ENABLE_RULE_CHECK(__val__)  (((__val__) << 12u) & 0x1000u)
#define     DEVICE_MISCELLANEOUS_HOST_CONTROL_BOUNDARY_CHECK_SHIFT 13u
#define     DEVICE_MISCELLANEOUS_HOST_CONTROL_BOUNDARY_CHECK_MASK  0x2000u
#define GET_DEVICE_MISCELLANEOUS_HOST_CONTROL_BOUNDARY_CHECK(__reg__)  (((__reg__) & 0x2000) >> 13u)
#define SET_DEVICE_MISCELLANEOUS_HOST_CONTROL_BOUNDARY_CHECK(__val__)  (((__val__) << 13u) & 0x2000u)
#define     DEVICE_MISCELLANEOUS_HOST_CONTROL_LOG_HEADER_OVERFLOW_SHIFT 14u
#define     DEVICE_MISCELLANEOUS_HOST_CONTROL_LOG_HEADER_OVERFLOW_MASK  0x4000u
#define GET_DEVICE_MISCELLANEOUS_HOST_CONTROL_LOG_HEADER_OVERFLOW(__reg__)  (((__reg__) & 0x4000) >> 14u)
#define SET_DEVICE_MISCELLANEOUS_HOST_CONTROL_LOG_HEADER_OVERFLOW(__val__)  (((__val__) << 14u) & 0x4000u)
#define     DEVICE_MISCELLANEOUS_HOST_CONTROL_ENABLE_TLP_MINOR_ERROR_TOLERANCE_SHIFT 15u
#define     DEVICE_MISCELLANEOUS_HOST_CONTROL_ENABLE_TLP_MINOR_ERROR_TOLERANCE_MASK  0x8000u
#define GET_DEVICE_MISCELLANEOUS_HOST_CONTROL_ENABLE_TLP_MINOR_ERROR_TOLERANCE(__reg__)  (((__reg__) & 0x8000) >> 15u)
#define SET_DEVICE_MISCELLANEOUS_HOST_CONTROL_ENABLE_TLP_MINOR_ERROR_TOLERANCE(__val__)  (((__val__) << 15u) & 0x8000u)
#define     DEVICE_MISCELLANEOUS_HOST_CONTROL_METAL_REV_ID_SHIFT 16u
#define     DEVICE_MISCELLANEOUS_HOST_CONTROL_METAL_REV_ID_MASK  0xff0000u
#define GET_DEVICE_MISCELLANEOUS_HOST_CONTROL_METAL_REV_ID(__reg__)  (((__reg__) & 0xff0000) >> 16u)
#define SET_DEVICE_MISCELLANEOUS_HOST_CONTROL_METAL_REV_ID(__val__)  (((__val__) << 16u) & 0xff0000u)
#define     DEVICE_MISCELLANEOUS_HOST_CONTROL_METAL_REV_ID_0 0x0u
#define     DEVICE_MISCELLANEOUS_HOST_CONTROL_METAL_REV_ID_1 0x1u
#define     DEVICE_MISCELLANEOUS_HOST_CONTROL_METAL_REV_ID_2 0x2u

#define     DEVICE_MISCELLANEOUS_HOST_CONTROL_PRODUCT_ID_SHIFT 24u
#define     DEVICE_MISCELLANEOUS_HOST_CONTROL_PRODUCT_ID_MASK  0xf000000u
#define GET_DEVICE_MISCELLANEOUS_HOST_CONTROL_PRODUCT_ID(__reg__)  (((__reg__) & 0xf000000) >> 24u)
#define SET_DEVICE_MISCELLANEOUS_HOST_CONTROL_PRODUCT_ID(__val__)  (((__val__) << 24u) & 0xf000000u)
#define     DEVICE_MISCELLANEOUS_HOST_CONTROL_PRODUCT_ID_NEW_PRODUCT_MAPPING 0xfu

#define     DEVICE_MISCELLANEOUS_HOST_CONTROL_ALL_LAYER_ID_SHIFT 24u
#define     DEVICE_MISCELLANEOUS_HOST_CONTROL_ALL_LAYER_ID_MASK  0xf000000u
#define GET_DEVICE_MISCELLANEOUS_HOST_CONTROL_ALL_LAYER_ID(__reg__)  (((__reg__) & 0xf000000) >> 24u)
#define SET_DEVICE_MISCELLANEOUS_HOST_CONTROL_ALL_LAYER_ID(__val__)  (((__val__) << 24u) & 0xf000000u)
#define     DEVICE_MISCELLANEOUS_HOST_CONTROL_ALL_LAYER_ID_A 0x0u
#define     DEVICE_MISCELLANEOUS_HOST_CONTROL_ALL_LAYER_ID_B 0x1u
#define     DEVICE_MISCELLANEOUS_HOST_CONTROL_ALL_LAYER_ID_C 0x2u


/** @brief Register definition for @ref DEVICE_t.MiscellaneousHostControl. */
typedef register_container RegDEVICEMiscellaneousHostControl_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;

    BITFIELD_BEGIN(BCM5719_DEVICE_H_uint32_t, bits)
        /** @brief Setting this bit will clear interrupt as long as the mask interrupt bit is not set. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, ClearInterrupt, 0, 1)
        /** @brief Setting this bit will mask future interrupt events from being generated. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, MaskInterrupt, 1, 1)
        /** @brief Set this bit to enable endian byte swapping when accessing through PCIE target interface. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, EnableEndianByteSwap, 2, 1)
        /** @brief Set this bit to enable endian word swapping when accessing through PCIE target interface. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, EnableEndianWordSwap, 3, 1)
        /** @brief Set this bit to enable PCI state register read/ write capability, otherwise the register is read only. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, EnablePCIStateRegisterRead_DIV_WriteCapability, 4, 1)
        /** @brief Set this bit enable clock control register read/ write capability, otherwise, the clock control register is read only. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, EnableClockControlRegisterRead_DIV_WriteCapability, 5, 1)
        /** @brief Set this bit to enable word swapping when accessing registers through the PCI target device. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, EnableRegisterWordSwap, 6, 1)
        /** @brief Set this bit to enable indirect addressing mode. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, EnableIndirectAccess, 7, 1)
        /** @brief When set, the interrupt is masked. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, MaskInterruptMode, 8, 1)
        /** @brief When set, an unique 8-bit tag value will be inserted into the Status block status tag. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, EnableTaggedStatusMode, 9, 1)
        /** @brief Set this bit to enable RCB check. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, RCBCheck, 10, 1)
        /** @brief Set this bit to enable the interrupt check. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, InterruptCheck, 11, 1)
        /** @brief Set this bit to enable the byte enable rule check. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, ByteEnableRuleCheck, 12, 1)
        /** @brief Set this bit to enable crossing 4 KB boundary check. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, BoundaryCheck, 13, 1)
        /** @brief Set this bit to enable log header due to overflow. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, LogHeaderOverflow, 14, 1)
        /** @brief Set this bit to enable TLP minor error tolerance (ATTR/TC/LOCK command). */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, EnableTLPMinorErrorTolerance, 15, 1)
        /** @brief Metal Rev Number */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, MetalRevID, 16, 8)
        /** @brief Product ID. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, ProductID, 24, 4)
        /** @brief External All Layer Revision ID. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, AllLayerID, 24, 4)
    BITFIELD_END(BCM5719_DEVICE_H_uint32_t, bits)
#ifdef CXX_SIMULATOR
    RegDEVICEMiscellaneousHostControl_t()
    {
        /** @brief constructor for @ref DEVICE_t.MiscellaneousHostControl. */
        bits.ClearInterrupt.setBaseRegister(&r32);
        bits.MaskInterrupt.setBaseRegister(&r32);
        bits.EnableEndianByteSwap.setBaseRegister(&r32);
        bits.EnableEndianWordSwap.setBaseRegister(&r32);
        bits.EnablePCIStateRegisterRead_DIV_WriteCapability.setBaseRegister(&r32);
        bits.EnableClockControlRegisterRead_DIV_WriteCapability.setBaseRegister(&r32);
        bits.EnableRegisterWordSwap.setBaseRegister(&r32);
        bits.EnableIndirectAccess.setBaseRegister(&r32);
        bits.MaskInterruptMode.setBaseRegister(&r32);
        bits.EnableTaggedStatusMode.setBaseRegister(&r32);
        bits.RCBCheck.setBaseRegister(&r32);
        bits.InterruptCheck.setBaseRegister(&r32);
        bits.ByteEnableRuleCheck.setBaseRegister(&r32);
        bits.BoundaryCheck.setBaseRegister(&r32);
        bits.LogHeaderOverflow.setBaseRegister(&r32);
        bits.EnableTLPMinorErrorTolerance.setBaseRegister(&r32);
        bits.MetalRevID.setBaseRegister(&r32);
        bits.ProductID.setBaseRegister(&r32);
        bits.AllLayerID.setBaseRegister(&r32);
    }
    RegDEVICEMiscellaneousHostControl_t& operator=(const RegDEVICEMiscellaneousHostControl_t& other)
    {
        r32 = other.r32;
        return *this;
    }
#endif /* CXX_SIMULATOR */
} RegDEVICEMiscellaneousHostControl_t;

#define REG_DEVICE_PCI_STATE ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0000070) /*  */
#define     DEVICE_PCI_STATE_PCI_EXPANSION_ROM_DESIRED_SHIFT 5u
#define     DEVICE_PCI_STATE_PCI_EXPANSION_ROM_DESIRED_MASK  0x20u
#define GET_DEVICE_PCI_STATE_PCI_EXPANSION_ROM_DESIRED(__reg__)  (((__reg__) & 0x20) >> 5u)
#define SET_DEVICE_PCI_STATE_PCI_EXPANSION_ROM_DESIRED(__val__)  (((__val__) << 5u) & 0x20u)
#define     DEVICE_PCI_STATE_PCI_EXPANSION_ROM_RETRY_SHIFT 6u
#define     DEVICE_PCI_STATE_PCI_EXPANSION_ROM_RETRY_MASK  0x40u
#define GET_DEVICE_PCI_STATE_PCI_EXPANSION_ROM_RETRY(__reg__)  (((__reg__) & 0x40) >> 6u)
#define SET_DEVICE_PCI_STATE_PCI_EXPANSION_ROM_RETRY(__val__)  (((__val__) << 6u) & 0x40u)
#define     DEVICE_PCI_STATE_VPD_AVAILABLE_SHIFT 7u
#define     DEVICE_PCI_STATE_VPD_AVAILABLE_MASK  0x80u
#define GET_DEVICE_PCI_STATE_VPD_AVAILABLE(__reg__)  (((__reg__) & 0x80) >> 7u)
#define SET_DEVICE_PCI_STATE_VPD_AVAILABLE(__val__)  (((__val__) << 7u) & 0x80u)
#define     DEVICE_PCI_STATE_FLAT_VIEW_SHIFT 8u
#define     DEVICE_PCI_STATE_FLAT_VIEW_MASK  0x100u
#define GET_DEVICE_PCI_STATE_FLAT_VIEW(__reg__)  (((__reg__) & 0x100) >> 8u)
#define SET_DEVICE_PCI_STATE_FLAT_VIEW(__val__)  (((__val__) << 8u) & 0x100u)
#define     DEVICE_PCI_STATE_MAX_PCI_TARGET_RETRY_SHIFT 9u
#define     DEVICE_PCI_STATE_MAX_PCI_TARGET_RETRY_MASK  0xe00u
#define GET_DEVICE_PCI_STATE_MAX_PCI_TARGET_RETRY(__reg__)  (((__reg__) & 0xe00) >> 9u)
#define SET_DEVICE_PCI_STATE_MAX_PCI_TARGET_RETRY(__val__)  (((__val__) << 9u) & 0xe00u)
#define     DEVICE_PCI_STATE_CONFIG_RETRY_SHIFT 15u
#define     DEVICE_PCI_STATE_CONFIG_RETRY_MASK  0x8000u
#define GET_DEVICE_PCI_STATE_CONFIG_RETRY(__reg__)  (((__reg__) & 0x8000) >> 15u)
#define SET_DEVICE_PCI_STATE_CONFIG_RETRY(__val__)  (((__val__) << 15u) & 0x8000u)
#define     DEVICE_PCI_STATE_APE_CONTROL_REGISTER_WRITE_ENABLE_SHIFT 16u
#define     DEVICE_PCI_STATE_APE_CONTROL_REGISTER_WRITE_ENABLE_MASK  0x10000u
#define GET_DEVICE_PCI_STATE_APE_CONTROL_REGISTER_WRITE_ENABLE(__reg__)  (((__reg__) & 0x10000) >> 16u)
#define SET_DEVICE_PCI_STATE_APE_CONTROL_REGISTER_WRITE_ENABLE(__val__)  (((__val__) << 16u) & 0x10000u)
#define     DEVICE_PCI_STATE_APE_SHARED_MEMORY_WRITE_ENABLE_SHIFT 17u
#define     DEVICE_PCI_STATE_APE_SHARED_MEMORY_WRITE_ENABLE_MASK  0x20000u
#define GET_DEVICE_PCI_STATE_APE_SHARED_MEMORY_WRITE_ENABLE(__reg__)  (((__reg__) & 0x20000) >> 17u)
#define SET_DEVICE_PCI_STATE_APE_SHARED_MEMORY_WRITE_ENABLE(__val__)  (((__val__) << 17u) & 0x20000u)
#define     DEVICE_PCI_STATE_APE_PROGRAM_SPACE_WRITE_ENABLE_SHIFT 18u
#define     DEVICE_PCI_STATE_APE_PROGRAM_SPACE_WRITE_ENABLE_MASK  0x40000u
#define GET_DEVICE_PCI_STATE_APE_PROGRAM_SPACE_WRITE_ENABLE(__reg__)  (((__reg__) & 0x40000) >> 18u)
#define SET_DEVICE_PCI_STATE_APE_PROGRAM_SPACE_WRITE_ENABLE(__val__)  (((__val__) << 18u) & 0x40000u)
#define     DEVICE_PCI_STATE_GENERATE_RESET_PLUS_SHIFT 19u
#define     DEVICE_PCI_STATE_GENERATE_RESET_PLUS_MASK  0x80000u
#define GET_DEVICE_PCI_STATE_GENERATE_RESET_PLUS(__reg__)  (((__reg__) & 0x80000) >> 19u)
#define SET_DEVICE_PCI_STATE_GENERATE_RESET_PLUS(__val__)  (((__val__) << 19u) & 0x80000u)

/** @brief Register definition for @ref DEVICE_t.PciState. */
typedef register_container RegDEVICEPciState_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;

    BITFIELD_BEGIN(BCM5719_DEVICE_H_uint32_t, bits)
        /** @brief Padding */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, reserved_4_0, 0, 5)
        /** @brief Enable PCI ROM base address register to be visible to the PCI host */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, PCIExpansionROMDesired, 5, 1)
        /** @brief Force PCI Retry for accesses to Expansion ROM region if enabled */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, PCIExpansionROMRetry, 6, 1)
        /** @brief This bit reads as 1 if the VPD region of the NVRAM can be accessed by the host */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, VPDAvailable, 7, 1)
        /** @brief Asserted if the Base Address register presents a 32 MB PCI Address map flat view, otherwise, indicates a 64 KB PCI Address map in standard view */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, FlatView, 8, 1)
        /** @brief Indicates the number of PCI clock cycles before Retry occurs, in multiple of 8. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, MaxPCITargetRetry, 9, 3)
        /** @brief Padding */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, reserved_14_12, 12, 3)
        /** @brief When asserted, forces all config access to be retried. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, ConfigRetry, 15, 1)
        /** @brief When this bit is set the APE control registers may be written. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, APEControlRegisterWriteEnable, 16, 1)
        /** @brief When this bit is set the APE shared memory region may be written. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, APESharedMemoryWriteEnable, 17, 1)
        /** @brief When this bit is set the APE program space may be written. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, APEProgramSpaceWriteEnable, 18, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, GenerateResetPlus, 19, 1)
    BITFIELD_END(BCM5719_DEVICE_H_uint32_t, bits)
#ifdef CXX_SIMULATOR
    RegDEVICEPciState_t()
    {
        /** @brief constructor for @ref DEVICE_t.PciState. */
        bits.PCIExpansionROMDesired.setBaseRegister(&r32);
        bits.PCIExpansionROMRetry.setBaseRegister(&r32);
        bits.VPDAvailable.setBaseRegister(&r32);
        bits.FlatView.setBaseRegister(&r32);
        bits.MaxPCITargetRetry.setBaseRegister(&r32);
        bits.ConfigRetry.setBaseRegister(&r32);
        bits.APEControlRegisterWriteEnable.setBaseRegister(&r32);
        bits.APESharedMemoryWriteEnable.setBaseRegister(&r32);
        bits.APEProgramSpaceWriteEnable.setBaseRegister(&r32);
        bits.GenerateResetPlus.setBaseRegister(&r32);
    }
    RegDEVICEPciState_t& operator=(const RegDEVICEPciState_t& other)
    {
        r32 = other.r32;
        return *this;
    }
#endif /* CXX_SIMULATOR */
} RegDEVICEPciState_t;

#define REG_DEVICE_REGISTER_BASE ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0000078) /* Local controller memory address of a register than can be written or read by writing to the register data register. */
/** @brief Register definition for @ref DEVICE_t.RegisterBase. */
typedef register_container RegDEVICERegisterBase_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICERegisterBase_t;

#define REG_DEVICE_MEMORY_BASE ((volatile BCM5719_DEVICE_H_uint32_t*)0xc000007c) /* Local controller memory address of the NIC memory region that can be accessed via Memory Window data register. */
/** @brief Register definition for @ref DEVICE_t.MemoryBase. */
typedef register_container RegDEVICEMemoryBase_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICEMemoryBase_t;

#define REG_DEVICE_REGISTER_DATA ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0000080) /* Register Data at the location pointed by the Register Base Register. */
/** @brief Register definition for @ref DEVICE_t.RegisterData. */
typedef register_container RegDEVICERegisterData_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICERegisterData_t;

#define REG_DEVICE_UNDI_RECEIVE_RETURN_RING_CONSUMER_INDEX ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0000088) /* UNDI Receive Return Ring Consumer Index Mailbox */
/** @brief Register definition for @ref DEVICE_t.UndiReceiveReturnRingConsumerIndex. */
typedef register_container RegDEVICEUndiReceiveReturnRingConsumerIndex_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICEUndiReceiveReturnRingConsumerIndex_t;

#define REG_DEVICE_UNDI_RECEIVE_RETURN_RING_CONSUMER_INDEX_LOW ((volatile BCM5719_DEVICE_H_uint32_t*)0xc000008c) /* UNDI Receive Return Ring Consumer Index Mailbox */
/** @brief Register definition for @ref DEVICE_t.UndiReceiveReturnRingConsumerIndexLow. */
typedef register_container RegDEVICEUndiReceiveReturnRingConsumerIndexLow_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICEUndiReceiveReturnRingConsumerIndexLow_t;

#define REG_DEVICE_LINK_STATUS_CONTROL ((volatile BCM5719_DEVICE_H_uint32_t*)0xc00000bc) /* PCIe standard register. */
#define     DEVICE_LINK_STATUS_CONTROL_NEGOTIATED_LINK_SPEED_SHIFT 16u
#define     DEVICE_LINK_STATUS_CONTROL_NEGOTIATED_LINK_SPEED_MASK  0xf0000u
#define GET_DEVICE_LINK_STATUS_CONTROL_NEGOTIATED_LINK_SPEED(__reg__)  (((__reg__) & 0xf0000) >> 16u)
#define SET_DEVICE_LINK_STATUS_CONTROL_NEGOTIATED_LINK_SPEED(__val__)  (((__val__) << 16u) & 0xf0000u)
#define     DEVICE_LINK_STATUS_CONTROL_NEGOTIATED_LINK_SPEED_PCIE_1_0 0x1u
#define     DEVICE_LINK_STATUS_CONTROL_NEGOTIATED_LINK_SPEED_PCIE_2_0 0x2u

#define     DEVICE_LINK_STATUS_CONTROL_NEGOTIATED_LINK_WIDTH_SHIFT 20u
#define     DEVICE_LINK_STATUS_CONTROL_NEGOTIATED_LINK_WIDTH_MASK  0x3f00000u
#define GET_DEVICE_LINK_STATUS_CONTROL_NEGOTIATED_LINK_WIDTH(__reg__)  (((__reg__) & 0x3f00000) >> 20u)
#define SET_DEVICE_LINK_STATUS_CONTROL_NEGOTIATED_LINK_WIDTH(__val__)  (((__val__) << 20u) & 0x3f00000u)

/** @brief Register definition for @ref DEVICE_t.LinkStatusControl. */
typedef register_container RegDEVICELinkStatusControl_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;

    BITFIELD_BEGIN(BCM5719_DEVICE_H_uint32_t, bits)
        /** @brief Padding */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, reserved_15_0, 0, 16)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, NegotiatedLinkSpeed, 16, 4)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, NegotiatedLinkWidth, 20, 6)
    BITFIELD_END(BCM5719_DEVICE_H_uint32_t, bits)
#ifdef CXX_SIMULATOR
    RegDEVICELinkStatusControl_t()
    {
        /** @brief constructor for @ref DEVICE_t.LinkStatusControl. */
        bits.NegotiatedLinkSpeed.setBaseRegister(&r32);
        bits.NegotiatedLinkWidth.setBaseRegister(&r32);
    }
    RegDEVICELinkStatusControl_t& operator=(const RegDEVICELinkStatusControl_t& other)
    {
        r32 = other.r32;
        return *this;
    }
#endif /* CXX_SIMULATOR */
} RegDEVICELinkStatusControl_t;

#define REG_DEVICE_EMAC_MODE ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0000400) /*  */
#define     DEVICE_EMAC_MODE_GLOBAL_RESET_SHIFT 0u
#define     DEVICE_EMAC_MODE_GLOBAL_RESET_MASK  0x1u
#define GET_DEVICE_EMAC_MODE_GLOBAL_RESET(__reg__)  (((__reg__) & 0x1) >> 0u)
#define SET_DEVICE_EMAC_MODE_GLOBAL_RESET(__val__)  (((__val__) << 0u) & 0x1u)
#define     DEVICE_EMAC_MODE_HALF_DUPLEX_SHIFT 1u
#define     DEVICE_EMAC_MODE_HALF_DUPLEX_MASK  0x2u
#define GET_DEVICE_EMAC_MODE_HALF_DUPLEX(__reg__)  (((__reg__) & 0x2) >> 1u)
#define SET_DEVICE_EMAC_MODE_HALF_DUPLEX(__val__)  (((__val__) << 1u) & 0x2u)
#define     DEVICE_EMAC_MODE_PORT_MODE_SHIFT 2u
#define     DEVICE_EMAC_MODE_PORT_MODE_MASK  0xcu
#define GET_DEVICE_EMAC_MODE_PORT_MODE(__reg__)  (((__reg__) & 0xc) >> 2u)
#define SET_DEVICE_EMAC_MODE_PORT_MODE(__val__)  (((__val__) << 2u) & 0xcu)
#define     DEVICE_EMAC_MODE_PORT_MODE_NONE 0x0u
#define     DEVICE_EMAC_MODE_PORT_MODE_10_DIV_100 0x1u
#define     DEVICE_EMAC_MODE_PORT_MODE_1000 0x2u
#define     DEVICE_EMAC_MODE_PORT_MODE_TBI 0x3u

#define     DEVICE_EMAC_MODE_LOOPBACK_MODE_SHIFT 4u
#define     DEVICE_EMAC_MODE_LOOPBACK_MODE_MASK  0x10u
#define GET_DEVICE_EMAC_MODE_LOOPBACK_MODE(__reg__)  (((__reg__) & 0x10) >> 4u)
#define SET_DEVICE_EMAC_MODE_LOOPBACK_MODE(__val__)  (((__val__) << 4u) & 0x10u)
#define     DEVICE_EMAC_MODE_TAGGED_MAC_CONTROL_SHIFT 7u
#define     DEVICE_EMAC_MODE_TAGGED_MAC_CONTROL_MASK  0x80u
#define GET_DEVICE_EMAC_MODE_TAGGED_MAC_CONTROL(__reg__)  (((__reg__) & 0x80) >> 7u)
#define SET_DEVICE_EMAC_MODE_TAGGED_MAC_CONTROL(__val__)  (((__val__) << 7u) & 0x80u)
#define     DEVICE_EMAC_MODE_ENABLE_TX_BURSTING_SHIFT 8u
#define     DEVICE_EMAC_MODE_ENABLE_TX_BURSTING_MASK  0x100u
#define GET_DEVICE_EMAC_MODE_ENABLE_TX_BURSTING(__reg__)  (((__reg__) & 0x100) >> 8u)
#define SET_DEVICE_EMAC_MODE_ENABLE_TX_BURSTING(__val__)  (((__val__) << 8u) & 0x100u)
#define     DEVICE_EMAC_MODE_MAX_DEFER_SHIFT 9u
#define     DEVICE_EMAC_MODE_MAX_DEFER_MASK  0x200u
#define GET_DEVICE_EMAC_MODE_MAX_DEFER(__reg__)  (((__reg__) & 0x200) >> 9u)
#define SET_DEVICE_EMAC_MODE_MAX_DEFER(__val__)  (((__val__) << 9u) & 0x200u)
#define     DEVICE_EMAC_MODE_ENABLE_RX_STATISTICS_SHIFT 11u
#define     DEVICE_EMAC_MODE_ENABLE_RX_STATISTICS_MASK  0x800u
#define GET_DEVICE_EMAC_MODE_ENABLE_RX_STATISTICS(__reg__)  (((__reg__) & 0x800) >> 11u)
#define SET_DEVICE_EMAC_MODE_ENABLE_RX_STATISTICS(__val__)  (((__val__) << 11u) & 0x800u)
#define     DEVICE_EMAC_MODE_CLEAR_RX_STATISTICS_SHIFT 12u
#define     DEVICE_EMAC_MODE_CLEAR_RX_STATISTICS_MASK  0x1000u
#define GET_DEVICE_EMAC_MODE_CLEAR_RX_STATISTICS(__reg__)  (((__reg__) & 0x1000) >> 12u)
#define SET_DEVICE_EMAC_MODE_CLEAR_RX_STATISTICS(__val__)  (((__val__) << 12u) & 0x1000u)
#define     DEVICE_EMAC_MODE_FLUSH_RX_STATISTICS_SHIFT 13u
#define     DEVICE_EMAC_MODE_FLUSH_RX_STATISTICS_MASK  0x2000u
#define GET_DEVICE_EMAC_MODE_FLUSH_RX_STATISTICS(__reg__)  (((__reg__) & 0x2000) >> 13u)
#define SET_DEVICE_EMAC_MODE_FLUSH_RX_STATISTICS(__val__)  (((__val__) << 13u) & 0x2000u)
#define     DEVICE_EMAC_MODE_ENABLE_TX_STATISTICS_SHIFT 14u
#define     DEVICE_EMAC_MODE_ENABLE_TX_STATISTICS_MASK  0x4000u
#define GET_DEVICE_EMAC_MODE_ENABLE_TX_STATISTICS(__reg__)  (((__reg__) & 0x4000) >> 14u)
#define SET_DEVICE_EMAC_MODE_ENABLE_TX_STATISTICS(__val__)  (((__val__) << 14u) & 0x4000u)
#define     DEVICE_EMAC_MODE_CLEAR_TX_STATISTICS_SHIFT 15u
#define     DEVICE_EMAC_MODE_CLEAR_TX_STATISTICS_MASK  0x8000u
#define GET_DEVICE_EMAC_MODE_CLEAR_TX_STATISTICS(__reg__)  (((__reg__) & 0x8000) >> 15u)
#define SET_DEVICE_EMAC_MODE_CLEAR_TX_STATISTICS(__val__)  (((__val__) << 15u) & 0x8000u)
#define     DEVICE_EMAC_MODE_FLUSH_TX_STATISTICS_SHIFT 16u
#define     DEVICE_EMAC_MODE_FLUSH_TX_STATISTICS_MASK  0x10000u
#define GET_DEVICE_EMAC_MODE_FLUSH_TX_STATISTICS(__reg__)  (((__reg__) & 0x10000) >> 16u)
#define SET_DEVICE_EMAC_MODE_FLUSH_TX_STATISTICS(__val__)  (((__val__) << 16u) & 0x10000u)
#define     DEVICE_EMAC_MODE_SEND_CONFIG_COMMAND_SHIFT 17u
#define     DEVICE_EMAC_MODE_SEND_CONFIG_COMMAND_MASK  0x20000u
#define GET_DEVICE_EMAC_MODE_SEND_CONFIG_COMMAND(__reg__)  (((__reg__) & 0x20000) >> 17u)
#define SET_DEVICE_EMAC_MODE_SEND_CONFIG_COMMAND(__val__)  (((__val__) << 17u) & 0x20000u)
#define     DEVICE_EMAC_MODE_MAGIC_PACKET_DETECTION_ENABLE_SHIFT 18u
#define     DEVICE_EMAC_MODE_MAGIC_PACKET_DETECTION_ENABLE_MASK  0x40000u
#define GET_DEVICE_EMAC_MODE_MAGIC_PACKET_DETECTION_ENABLE(__reg__)  (((__reg__) & 0x40000) >> 18u)
#define SET_DEVICE_EMAC_MODE_MAGIC_PACKET_DETECTION_ENABLE(__val__)  (((__val__) << 18u) & 0x40000u)
#define     DEVICE_EMAC_MODE_ACPI_POWER_ON_ENABLE_SHIFT 19u
#define     DEVICE_EMAC_MODE_ACPI_POWER_ON_ENABLE_MASK  0x80000u
#define GET_DEVICE_EMAC_MODE_ACPI_POWER_ON_ENABLE(__reg__)  (((__reg__) & 0x80000) >> 19u)
#define SET_DEVICE_EMAC_MODE_ACPI_POWER_ON_ENABLE(__val__)  (((__val__) << 19u) & 0x80000u)
#define     DEVICE_EMAC_MODE_ENABLE_TCE_SHIFT 21u
#define     DEVICE_EMAC_MODE_ENABLE_TCE_MASK  0x200000u
#define GET_DEVICE_EMAC_MODE_ENABLE_TCE(__reg__)  (((__reg__) & 0x200000) >> 21u)
#define SET_DEVICE_EMAC_MODE_ENABLE_TCE(__val__)  (((__val__) << 21u) & 0x200000u)
#define     DEVICE_EMAC_MODE_ENABLE_RDE_SHIFT 22u
#define     DEVICE_EMAC_MODE_ENABLE_RDE_MASK  0x400000u
#define GET_DEVICE_EMAC_MODE_ENABLE_RDE(__reg__)  (((__reg__) & 0x400000) >> 22u)
#define SET_DEVICE_EMAC_MODE_ENABLE_RDE(__val__)  (((__val__) << 22u) & 0x400000u)
#define     DEVICE_EMAC_MODE_ENABLE_FHDE_SHIFT 23u
#define     DEVICE_EMAC_MODE_ENABLE_FHDE_MASK  0x800000u
#define GET_DEVICE_EMAC_MODE_ENABLE_FHDE(__reg__)  (((__reg__) & 0x800000) >> 23u)
#define SET_DEVICE_EMAC_MODE_ENABLE_FHDE(__val__)  (((__val__) << 23u) & 0x800000u)
#define     DEVICE_EMAC_MODE_KEEP_FRAME_IN_WOL_SHIFT 24u
#define     DEVICE_EMAC_MODE_KEEP_FRAME_IN_WOL_MASK  0x1000000u
#define GET_DEVICE_EMAC_MODE_KEEP_FRAME_IN_WOL(__reg__)  (((__reg__) & 0x1000000) >> 24u)
#define SET_DEVICE_EMAC_MODE_KEEP_FRAME_IN_WOL(__val__)  (((__val__) << 24u) & 0x1000000u)
#define     DEVICE_EMAC_MODE_HALT_INTERESTING_PACKET_PME_SHIFT 25u
#define     DEVICE_EMAC_MODE_HALT_INTERESTING_PACKET_PME_MASK  0x2000000u
#define GET_DEVICE_EMAC_MODE_HALT_INTERESTING_PACKET_PME(__reg__)  (((__reg__) & 0x2000000) >> 25u)
#define SET_DEVICE_EMAC_MODE_HALT_INTERESTING_PACKET_PME(__val__)  (((__val__) << 25u) & 0x2000000u)
#define     DEVICE_EMAC_MODE_FREE_RUNNING_ACPI_SHIFT 26u
#define     DEVICE_EMAC_MODE_FREE_RUNNING_ACPI_MASK  0x4000000u
#define GET_DEVICE_EMAC_MODE_FREE_RUNNING_ACPI(__reg__)  (((__reg__) & 0x4000000) >> 26u)
#define SET_DEVICE_EMAC_MODE_FREE_RUNNING_ACPI(__val__)  (((__val__) << 26u) & 0x4000000u)
#define     DEVICE_EMAC_MODE_ENABLE_APE_RX_PATH_SHIFT 27u
#define     DEVICE_EMAC_MODE_ENABLE_APE_RX_PATH_MASK  0x8000000u
#define GET_DEVICE_EMAC_MODE_ENABLE_APE_RX_PATH(__reg__)  (((__reg__) & 0x8000000) >> 27u)
#define SET_DEVICE_EMAC_MODE_ENABLE_APE_RX_PATH(__val__)  (((__val__) << 27u) & 0x8000000u)
#define     DEVICE_EMAC_MODE_ENABLE_APE_TX_PATH_SHIFT 28u
#define     DEVICE_EMAC_MODE_ENABLE_APE_TX_PATH_MASK  0x10000000u
#define GET_DEVICE_EMAC_MODE_ENABLE_APE_TX_PATH(__reg__)  (((__reg__) & 0x10000000) >> 28u)
#define SET_DEVICE_EMAC_MODE_ENABLE_APE_TX_PATH(__val__)  (((__val__) << 28u) & 0x10000000u)
#define     DEVICE_EMAC_MODE_MAC_LOOPBACK_MODE_CONTROL_SHIFT 29u
#define     DEVICE_EMAC_MODE_MAC_LOOPBACK_MODE_CONTROL_MASK  0x20000000u
#define GET_DEVICE_EMAC_MODE_MAC_LOOPBACK_MODE_CONTROL(__reg__)  (((__reg__) & 0x20000000) >> 29u)
#define SET_DEVICE_EMAC_MODE_MAC_LOOPBACK_MODE_CONTROL(__val__)  (((__val__) << 29u) & 0x20000000u)

/** @brief Register definition for @ref DEVICE_t.EmacMode. */
typedef register_container RegDEVICEEmacMode_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;

    BITFIELD_BEGIN(BCM5719_DEVICE_H_uint32_t, bits)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, GlobalReset, 0, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, HalfDuplex, 1, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, PortMode, 2, 2)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, LoopbackMode, 4, 1)
        /** @brief Padding */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, reserved_6_5, 5, 2)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, TaggedMACControl, 7, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, EnableTXBursting, 8, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, MaxDefer, 9, 1)
        /** @brief Padding */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, reserved_10_10, 10, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, EnableRXStatistics, 11, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, ClearRXStatistics, 12, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, FlushRXStatistics, 13, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, EnableTXStatistics, 14, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, ClearTXStatistics, 15, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, FlushTXStatistics, 16, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, SendConfigCommand, 17, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, MagicPacketDetectionEnable, 18, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, ACPIPowerOnEnable, 19, 1)
        /** @brief Padding */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, reserved_20_20, 20, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, EnableTCE, 21, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, EnableRDE, 22, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, EnableFHDE, 23, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, KeepFrameInWOL, 24, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, HaltInterestingPacketPME, 25, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, Free_RunningACPI, 26, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, EnableAPERXPath, 27, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, EnableAPETXPath, 28, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, MACLoopbackModeControl, 29, 1)
    BITFIELD_END(BCM5719_DEVICE_H_uint32_t, bits)
#ifdef CXX_SIMULATOR
    RegDEVICEEmacMode_t()
    {
        /** @brief constructor for @ref DEVICE_t.EmacMode. */
        bits.GlobalReset.setBaseRegister(&r32);
        bits.HalfDuplex.setBaseRegister(&r32);
        bits.PortMode.setBaseRegister(&r32);
        bits.LoopbackMode.setBaseRegister(&r32);
        bits.TaggedMACControl.setBaseRegister(&r32);
        bits.EnableTXBursting.setBaseRegister(&r32);
        bits.MaxDefer.setBaseRegister(&r32);
        bits.EnableRXStatistics.setBaseRegister(&r32);
        bits.ClearRXStatistics.setBaseRegister(&r32);
        bits.FlushRXStatistics.setBaseRegister(&r32);
        bits.EnableTXStatistics.setBaseRegister(&r32);
        bits.ClearTXStatistics.setBaseRegister(&r32);
        bits.FlushTXStatistics.setBaseRegister(&r32);
        bits.SendConfigCommand.setBaseRegister(&r32);
        bits.MagicPacketDetectionEnable.setBaseRegister(&r32);
        bits.ACPIPowerOnEnable.setBaseRegister(&r32);
        bits.EnableTCE.setBaseRegister(&r32);
        bits.EnableRDE.setBaseRegister(&r32);
        bits.EnableFHDE.setBaseRegister(&r32);
        bits.KeepFrameInWOL.setBaseRegister(&r32);
        bits.HaltInterestingPacketPME.setBaseRegister(&r32);
        bits.Free_RunningACPI.setBaseRegister(&r32);
        bits.EnableAPERXPath.setBaseRegister(&r32);
        bits.EnableAPETXPath.setBaseRegister(&r32);
        bits.MACLoopbackModeControl.setBaseRegister(&r32);
    }
    RegDEVICEEmacMode_t& operator=(const RegDEVICEEmacMode_t& other)
    {
        r32 = other.r32;
        return *this;
    }
#endif /* CXX_SIMULATOR */
} RegDEVICEEmacMode_t;

#define REG_DEVICE_LED_CONTROL ((volatile BCM5719_DEVICE_H_uint32_t*)0xc000040c) /*  */
#define     DEVICE_LED_CONTROL_OVERRIDE_LINK_SHIFT 0u
#define     DEVICE_LED_CONTROL_OVERRIDE_LINK_MASK  0x1u
#define GET_DEVICE_LED_CONTROL_OVERRIDE_LINK(__reg__)  (((__reg__) & 0x1) >> 0u)
#define SET_DEVICE_LED_CONTROL_OVERRIDE_LINK(__val__)  (((__val__) << 0u) & 0x1u)
#define     DEVICE_LED_CONTROL_LED_1000_SHIFT 1u
#define     DEVICE_LED_CONTROL_LED_1000_MASK  0x2u
#define GET_DEVICE_LED_CONTROL_LED_1000(__reg__)  (((__reg__) & 0x2) >> 1u)
#define SET_DEVICE_LED_CONTROL_LED_1000(__val__)  (((__val__) << 1u) & 0x2u)
#define     DEVICE_LED_CONTROL_LED_100_SHIFT 2u
#define     DEVICE_LED_CONTROL_LED_100_MASK  0x4u
#define GET_DEVICE_LED_CONTROL_LED_100(__reg__)  (((__reg__) & 0x4) >> 2u)
#define SET_DEVICE_LED_CONTROL_LED_100(__val__)  (((__val__) << 2u) & 0x4u)
#define     DEVICE_LED_CONTROL_LED_10_SHIFT 3u
#define     DEVICE_LED_CONTROL_LED_10_MASK  0x8u
#define GET_DEVICE_LED_CONTROL_LED_10(__reg__)  (((__reg__) & 0x8) >> 3u)
#define SET_DEVICE_LED_CONTROL_LED_10(__val__)  (((__val__) << 3u) & 0x8u)
#define     DEVICE_LED_CONTROL_OVERRIDE_TRAFFIC_SHIFT 4u
#define     DEVICE_LED_CONTROL_OVERRIDE_TRAFFIC_MASK  0x10u
#define GET_DEVICE_LED_CONTROL_OVERRIDE_TRAFFIC(__reg__)  (((__reg__) & 0x10) >> 4u)
#define SET_DEVICE_LED_CONTROL_OVERRIDE_TRAFFIC(__val__)  (((__val__) << 4u) & 0x10u)
#define     DEVICE_LED_CONTROL_LED_TRAFFIC_BLINK_SHIFT 5u
#define     DEVICE_LED_CONTROL_LED_TRAFFIC_BLINK_MASK  0x20u
#define GET_DEVICE_LED_CONTROL_LED_TRAFFIC_BLINK(__reg__)  (((__reg__) & 0x20) >> 5u)
#define SET_DEVICE_LED_CONTROL_LED_TRAFFIC_BLINK(__val__)  (((__val__) << 5u) & 0x20u)
#define     DEVICE_LED_CONTROL_LED_TRAFFIC_SHIFT 6u
#define     DEVICE_LED_CONTROL_LED_TRAFFIC_MASK  0x40u
#define GET_DEVICE_LED_CONTROL_LED_TRAFFIC(__reg__)  (((__reg__) & 0x40) >> 6u)
#define SET_DEVICE_LED_CONTROL_LED_TRAFFIC(__val__)  (((__val__) << 6u) & 0x40u)
#define     DEVICE_LED_CONTROL_LED_STATUS_1000_SHIFT 7u
#define     DEVICE_LED_CONTROL_LED_STATUS_1000_MASK  0x80u
#define GET_DEVICE_LED_CONTROL_LED_STATUS_1000(__reg__)  (((__reg__) & 0x80) >> 7u)
#define SET_DEVICE_LED_CONTROL_LED_STATUS_1000(__val__)  (((__val__) << 7u) & 0x80u)
#define     DEVICE_LED_CONTROL_LED_STATUS_100_SHIFT 8u
#define     DEVICE_LED_CONTROL_LED_STATUS_100_MASK  0x100u
#define GET_DEVICE_LED_CONTROL_LED_STATUS_100(__reg__)  (((__reg__) & 0x100) >> 8u)
#define SET_DEVICE_LED_CONTROL_LED_STATUS_100(__val__)  (((__val__) << 8u) & 0x100u)
#define     DEVICE_LED_CONTROL_LED_STATUS_10_SHIFT 9u
#define     DEVICE_LED_CONTROL_LED_STATUS_10_MASK  0x200u
#define GET_DEVICE_LED_CONTROL_LED_STATUS_10(__reg__)  (((__reg__) & 0x200) >> 9u)
#define SET_DEVICE_LED_CONTROL_LED_STATUS_10(__val__)  (((__val__) << 9u) & 0x200u)
#define     DEVICE_LED_CONTROL_LED_STATUS_TRAFFIC_SHIFT 10u
#define     DEVICE_LED_CONTROL_LED_STATUS_TRAFFIC_MASK  0x400u
#define GET_DEVICE_LED_CONTROL_LED_STATUS_TRAFFIC(__reg__)  (((__reg__) & 0x400) >> 10u)
#define SET_DEVICE_LED_CONTROL_LED_STATUS_TRAFFIC(__val__)  (((__val__) << 10u) & 0x400u)
#define     DEVICE_LED_CONTROL_LED_MODE_SHIFT 11u
#define     DEVICE_LED_CONTROL_LED_MODE_MASK  0x1800u
#define GET_DEVICE_LED_CONTROL_LED_MODE(__reg__)  (((__reg__) & 0x1800) >> 11u)
#define SET_DEVICE_LED_CONTROL_LED_MODE(__val__)  (((__val__) << 11u) & 0x1800u)
#define     DEVICE_LED_CONTROL_LED_MODE_MAC 0x0u
#define     DEVICE_LED_CONTROL_LED_MODE_PHY_MODE_1 0x1u
#define     DEVICE_LED_CONTROL_LED_MODE_PHY_MODE_2 0x2u
#define     DEVICE_LED_CONTROL_LED_MODE_PHY_MODE_1_ 0x3u

#define     DEVICE_LED_CONTROL_MAC_MODE_SHIFT 13u
#define     DEVICE_LED_CONTROL_MAC_MODE_MASK  0x2000u
#define GET_DEVICE_LED_CONTROL_MAC_MODE(__reg__)  (((__reg__) & 0x2000) >> 13u)
#define SET_DEVICE_LED_CONTROL_MAC_MODE(__val__)  (((__val__) << 13u) & 0x2000u)
#define     DEVICE_LED_CONTROL_SHARED_TRAFFIC_DIV_LINK_LED_MODE_SHIFT 14u
#define     DEVICE_LED_CONTROL_SHARED_TRAFFIC_DIV_LINK_LED_MODE_MASK  0x4000u
#define GET_DEVICE_LED_CONTROL_SHARED_TRAFFIC_DIV_LINK_LED_MODE(__reg__)  (((__reg__) & 0x4000) >> 14u)
#define SET_DEVICE_LED_CONTROL_SHARED_TRAFFIC_DIV_LINK_LED_MODE(__val__)  (((__val__) << 14u) & 0x4000u)
#define     DEVICE_LED_CONTROL_BLINK_PERIOD_SHIFT 19u
#define     DEVICE_LED_CONTROL_BLINK_PERIOD_MASK  0x7ff80000u
#define GET_DEVICE_LED_CONTROL_BLINK_PERIOD(__reg__)  (((__reg__) & 0x7ff80000) >> 19u)
#define SET_DEVICE_LED_CONTROL_BLINK_PERIOD(__val__)  (((__val__) << 19u) & 0x7ff80000u)
#define     DEVICE_LED_CONTROL_OVERRIDE_BLINK_RATE_SHIFT 31u
#define     DEVICE_LED_CONTROL_OVERRIDE_BLINK_RATE_MASK  0x80000000u
#define GET_DEVICE_LED_CONTROL_OVERRIDE_BLINK_RATE(__reg__)  (((__reg__) & 0x80000000) >> 31u)
#define SET_DEVICE_LED_CONTROL_OVERRIDE_BLINK_RATE(__val__)  (((__val__) << 31u) & 0x80000000u)

/** @brief Register definition for @ref DEVICE_t.LedControl. */
typedef register_container RegDEVICELedControl_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;

    BITFIELD_BEGIN(BCM5719_DEVICE_H_uint32_t, bits)
        /** @brief If set, overrides hardware control of the three link LEDs. The LEDs will be controlled via bits [3:1]. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, OverrideLink, 0, 1)
        /** @brief If set along with the LED Override bit, turns on the 1000 Mbps LED. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, LED1000, 1, 1)
        /** @brief If set along with the LED Override bit, turns on the 100 Mbps LED. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, LED100, 2, 1)
        /** @brief If set along with the LED Override bit, turns on the 10 Mbps LED. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, LED10, 3, 1)
        /** @brief If set, overrides hardware control of the Traffic LED. The Traffic LED will then be controlled via bits [6:5]. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, OverrideTraffic, 4, 1)
        /** @brief If set along with the Override Traffic bit and Traffic LED bit, the Traffic LED will blink with the blink rate specified in Override Blink Rate (bit 31) and Blink Period (bits [30:19]) fields. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, LEDTrafficBlink, 5, 1)
        /** @brief If set along with the Override Traffic bit, the Traffic LED is turned on. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, LEDTraffic, 6, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, LEDStatus1000, 7, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, LEDStatus100, 8, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, LEDStatus10, 9, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, LEDStatusTraffic, 10, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, LEDMode, 11, 2)
        /** @brief When this bit is set, the traffic LED blinks only when traffic is addressed for the device (The LED_MODE field must be set to 00 before enabling this bit). */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, MACMode, 13, 1)
        /** @brief When this bit is set, the Link LED is solid green when there is a link and blinks when there is traffic. (The LED_MODE field must be set to 00 before enabling this bit). */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, SharedTraffic_DIV_LinkLEDMode, 14, 1)
        /** @brief Padding */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, reserved_18_15, 15, 4)
        /** @brief Specifies the period of each blink cycle (on+off) for Traffic LED in milliseconds. Must be a nonzero value. This 12-bit field is reset to 0x040, giving a default blink period of approximately 15.9Hz. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, BlinkPeriod, 19, 12)
        /** @brief If set, the blink rate for the Traffic LED is determined by the Blink Period field (bit 30 to bit 19). This bit is rest to 1. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, OverrideBlinkRate, 31, 1)
    BITFIELD_END(BCM5719_DEVICE_H_uint32_t, bits)
#ifdef CXX_SIMULATOR
    RegDEVICELedControl_t()
    {
        /** @brief constructor for @ref DEVICE_t.LedControl. */
        bits.OverrideLink.setBaseRegister(&r32);
        bits.LED1000.setBaseRegister(&r32);
        bits.LED100.setBaseRegister(&r32);
        bits.LED10.setBaseRegister(&r32);
        bits.OverrideTraffic.setBaseRegister(&r32);
        bits.LEDTrafficBlink.setBaseRegister(&r32);
        bits.LEDTraffic.setBaseRegister(&r32);
        bits.LEDStatus1000.setBaseRegister(&r32);
        bits.LEDStatus100.setBaseRegister(&r32);
        bits.LEDStatus10.setBaseRegister(&r32);
        bits.LEDStatusTraffic.setBaseRegister(&r32);
        bits.LEDMode.setBaseRegister(&r32);
        bits.MACMode.setBaseRegister(&r32);
        bits.SharedTraffic_DIV_LinkLEDMode.setBaseRegister(&r32);
        bits.BlinkPeriod.setBaseRegister(&r32);
        bits.OverrideBlinkRate.setBaseRegister(&r32);
    }
    RegDEVICELedControl_t& operator=(const RegDEVICELedControl_t& other)
    {
        r32 = other.r32;
        return *this;
    }
#endif /* CXX_SIMULATOR */
} RegDEVICELedControl_t;

#define REG_DEVICE_EMAC_MAC_ADDRESSES_0_HIGH ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0000410) /* Upper 2-bytes of this node's MAC address. */
/** @brief Register definition for @ref DEVICE_t.EmacMacAddresses0High. */
typedef register_container RegDEVICEEmacMacAddresses0High_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICEEmacMacAddresses0High_t;

#define REG_DEVICE_EMAC_MAC_ADDRESSES_0_LOW ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0000414) /* Lower 4-byte of this node's MAC address. */
/** @brief Register definition for @ref DEVICE_t.EmacMacAddresses0Low. */
typedef register_container RegDEVICEEmacMacAddresses0Low_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICEEmacMacAddresses0Low_t;

#define REG_DEVICE_EMAC_MAC_ADDRESSES_1_HIGH ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0000418) /* Upper 2-bytes of this node's MAC address. */
/** @brief Register definition for @ref DEVICE_t.EmacMacAddresses1High. */
typedef register_container RegDEVICEEmacMacAddresses1High_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICEEmacMacAddresses1High_t;

#define REG_DEVICE_EMAC_MAC_ADDRESSES_1_LOW ((volatile BCM5719_DEVICE_H_uint32_t*)0xc000041c) /* Lower 4-byte of this node's MAC address. */
/** @brief Register definition for @ref DEVICE_t.EmacMacAddresses1Low. */
typedef register_container RegDEVICEEmacMacAddresses1Low_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICEEmacMacAddresses1Low_t;

#define REG_DEVICE_EMAC_MAC_ADDRESSES_2_HIGH ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0000420) /* Upper 2-bytes of this node's MAC address. */
/** @brief Register definition for @ref DEVICE_t.EmacMacAddresses2High. */
typedef register_container RegDEVICEEmacMacAddresses2High_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICEEmacMacAddresses2High_t;

#define REG_DEVICE_EMAC_MAC_ADDRESSES_2_LOW ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0000424) /* Lower 4-byte of this node's MAC address. */
/** @brief Register definition for @ref DEVICE_t.EmacMacAddresses2Low. */
typedef register_container RegDEVICEEmacMacAddresses2Low_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICEEmacMacAddresses2Low_t;

#define REG_DEVICE_EMAC_MAC_ADDRESSES_3_HIGH ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0000428) /* Upper 2-bytes of this node's MAC address. */
/** @brief Register definition for @ref DEVICE_t.EmacMacAddresses3High. */
typedef register_container RegDEVICEEmacMacAddresses3High_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICEEmacMacAddresses3High_t;

#define REG_DEVICE_EMAC_MAC_ADDRESSES_3_LOW ((volatile BCM5719_DEVICE_H_uint32_t*)0xc000042c) /* Lower 4-byte of this node's MAC address. */
/** @brief Register definition for @ref DEVICE_t.EmacMacAddresses3Low. */
typedef register_container RegDEVICEEmacMacAddresses3Low_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICEEmacMacAddresses3Low_t;

#define REG_DEVICE_WOL_PATTERN_POINTER ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0000430) /* Specifies the offset into the 6 KB BD memory for frame comparison. (Bits 3:0 are ignored to align the memory address to a natural 128-bit boundary). */
/** @brief Register definition for @ref DEVICE_t.WolPatternPointer. */
typedef register_container RegDEVICEWolPatternPointer_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICEWolPatternPointer_t;

#define REG_DEVICE_WOL_PATTERN_CFG ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0000434) /*  */
/** @brief Register definition for @ref DEVICE_t.WolPatternCfg. */
typedef register_container RegDEVICEWolPatternCfg_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICEWolPatternCfg_t;

#define REG_DEVICE_MTU_SIZE ((volatile BCM5719_DEVICE_H_uint32_t*)0xc000043c) /* 2-byte field which is the largest size frame that will be accepted without being marked as oversize. */
#define     DEVICE_MTU_SIZE_MTU_SHIFT 0u
#define     DEVICE_MTU_SIZE_MTU_MASK  0xffffu
#define GET_DEVICE_MTU_SIZE_MTU(__reg__)  (((__reg__) & 0xffff) >> 0u)
#define SET_DEVICE_MTU_SIZE_MTU(__val__)  (((__val__) << 0u) & 0xffffu)

/** @brief Register definition for @ref DEVICE_t.MtuSize. */
typedef register_container RegDEVICEMtuSize_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;

    BITFIELD_BEGIN(BCM5719_DEVICE_H_uint32_t, bits)
        /** @brief 2-byte field which is the largest size frame that will be accepted without being marked as oversize. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, MTU, 0, 16)
    BITFIELD_END(BCM5719_DEVICE_H_uint32_t, bits)
#ifdef CXX_SIMULATOR
    RegDEVICEMtuSize_t()
    {
        /** @brief constructor for @ref DEVICE_t.MtuSize. */
        bits.MTU.setBaseRegister(&r32);
    }
    RegDEVICEMtuSize_t& operator=(const RegDEVICEMtuSize_t& other)
    {
        r32 = other.r32;
        return *this;
    }
#endif /* CXX_SIMULATOR */
} RegDEVICEMtuSize_t;

#define REG_DEVICE_MII_COMMUNICATION ((volatile BCM5719_DEVICE_H_uint32_t*)0xc000044c) /*  */
#define     DEVICE_MII_COMMUNICATION_TRANSACTION_DATA_SHIFT 0u
#define     DEVICE_MII_COMMUNICATION_TRANSACTION_DATA_MASK  0xffffu
#define GET_DEVICE_MII_COMMUNICATION_TRANSACTION_DATA(__reg__)  (((__reg__) & 0xffff) >> 0u)
#define SET_DEVICE_MII_COMMUNICATION_TRANSACTION_DATA(__val__)  (((__val__) << 0u) & 0xffffu)
#define     DEVICE_MII_COMMUNICATION_REGISTER_ADDRESS_SHIFT 16u
#define     DEVICE_MII_COMMUNICATION_REGISTER_ADDRESS_MASK  0x1f0000u
#define GET_DEVICE_MII_COMMUNICATION_REGISTER_ADDRESS(__reg__)  (((__reg__) & 0x1f0000) >> 16u)
#define SET_DEVICE_MII_COMMUNICATION_REGISTER_ADDRESS(__val__)  (((__val__) << 16u) & 0x1f0000u)
#define     DEVICE_MII_COMMUNICATION_PHY_ADDRESS_SHIFT 21u
#define     DEVICE_MII_COMMUNICATION_PHY_ADDRESS_MASK  0x3e00000u
#define GET_DEVICE_MII_COMMUNICATION_PHY_ADDRESS(__reg__)  (((__reg__) & 0x3e00000) >> 21u)
#define SET_DEVICE_MII_COMMUNICATION_PHY_ADDRESS(__val__)  (((__val__) << 21u) & 0x3e00000u)
#define     DEVICE_MII_COMMUNICATION_PHY_ADDRESS_PHY_0 0x1u
#define     DEVICE_MII_COMMUNICATION_PHY_ADDRESS_PHY_1 0x2u
#define     DEVICE_MII_COMMUNICATION_PHY_ADDRESS_PHY_2 0x3u
#define     DEVICE_MII_COMMUNICATION_PHY_ADDRESS_PHY_3 0x4u
#define     DEVICE_MII_COMMUNICATION_PHY_ADDRESS_SGMII_0 0x8u
#define     DEVICE_MII_COMMUNICATION_PHY_ADDRESS_SGMII_1 0x9u
#define     DEVICE_MII_COMMUNICATION_PHY_ADDRESS_SGMII_2 0xau
#define     DEVICE_MII_COMMUNICATION_PHY_ADDRESS_SGMII_3 0xbu

#define     DEVICE_MII_COMMUNICATION_COMMAND_SHIFT 26u
#define     DEVICE_MII_COMMUNICATION_COMMAND_MASK  0xc000000u
#define GET_DEVICE_MII_COMMUNICATION_COMMAND(__reg__)  (((__reg__) & 0xc000000) >> 26u)
#define SET_DEVICE_MII_COMMUNICATION_COMMAND(__val__)  (((__val__) << 26u) & 0xc000000u)
#define     DEVICE_MII_COMMUNICATION_COMMAND_WRITE 0x1u
#define     DEVICE_MII_COMMUNICATION_COMMAND_READ 0x2u

#define     DEVICE_MII_COMMUNICATION_READ_FAILED_SHIFT 28u
#define     DEVICE_MII_COMMUNICATION_READ_FAILED_MASK  0x10000000u
#define GET_DEVICE_MII_COMMUNICATION_READ_FAILED(__reg__)  (((__reg__) & 0x10000000) >> 28u)
#define SET_DEVICE_MII_COMMUNICATION_READ_FAILED(__val__)  (((__val__) << 28u) & 0x10000000u)
#define     DEVICE_MII_COMMUNICATION_START_DIV_BUSY_SHIFT 29u
#define     DEVICE_MII_COMMUNICATION_START_DIV_BUSY_MASK  0x20000000u
#define GET_DEVICE_MII_COMMUNICATION_START_DIV_BUSY(__reg__)  (((__reg__) & 0x20000000) >> 29u)
#define SET_DEVICE_MII_COMMUNICATION_START_DIV_BUSY(__val__)  (((__val__) << 29u) & 0x20000000u)

/** @brief Register definition for @ref DEVICE_t.MiiCommunication. */
typedef register_container RegDEVICEMiiCommunication_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;

    BITFIELD_BEGIN(BCM5719_DEVICE_H_uint32_t, bits)
        /** @brief When configured for a write command, the data stored at this location is written to the PHY at the specified PHY and register address. During a read command, the data returned by the PHY is stored at this location. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, TransactionData, 0, 16)
        /** @brief Address of the register to be read or written. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, RegisterAddress, 16, 5)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, PHYAddress, 21, 5)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, Command, 26, 2)
        /** @brief When set, the transceiver device did not drive the bus during the attempted read transaction. Valid after the Start/Busy bit is cleared. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, ReadFailed, 28, 1)
        /** @brief Set this bit to start a transaction. While it is high, it indicates that the current transaction is still ongoing. If enabled, generates an attention via EMAC Status Register MI Completion bit (bit 22). */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, Start_DIV_Busy, 29, 1)
    BITFIELD_END(BCM5719_DEVICE_H_uint32_t, bits)
#ifdef CXX_SIMULATOR
    RegDEVICEMiiCommunication_t()
    {
        /** @brief constructor for @ref DEVICE_t.MiiCommunication. */
        bits.TransactionData.setBaseRegister(&r32);
        bits.RegisterAddress.setBaseRegister(&r32);
        bits.PHYAddress.setBaseRegister(&r32);
        bits.Command.setBaseRegister(&r32);
        bits.ReadFailed.setBaseRegister(&r32);
        bits.Start_DIV_Busy.setBaseRegister(&r32);
    }
    RegDEVICEMiiCommunication_t& operator=(const RegDEVICEMiiCommunication_t& other)
    {
        r32 = other.r32;
        return *this;
    }
#endif /* CXX_SIMULATOR */
} RegDEVICEMiiCommunication_t;

#define REG_DEVICE_MII_MODE ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0000454) /*  */
#define     DEVICE_MII_MODE_CONSTANT_MDIO_DIV_MDC_CLOCK_SPEED_SHIFT 15u
#define     DEVICE_MII_MODE_CONSTANT_MDIO_DIV_MDC_CLOCK_SPEED_MASK  0x8000u
#define GET_DEVICE_MII_MODE_CONSTANT_MDIO_DIV_MDC_CLOCK_SPEED(__reg__)  (((__reg__) & 0x8000) >> 15u)
#define SET_DEVICE_MII_MODE_CONSTANT_MDIO_DIV_MDC_CLOCK_SPEED(__val__)  (((__val__) << 15u) & 0x8000u)

/** @brief Register definition for @ref DEVICE_t.MiiMode. */
typedef register_container RegDEVICEMiiMode_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;

    BITFIELD_BEGIN(BCM5719_DEVICE_H_uint32_t, bits)
        /** @brief Padding */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, reserved_14_0, 0, 15)
        /** @brief Enable ~500Khz constant MII management interface (MDIO/MDC) frequency regardless core clock frequency. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, ConstantMDIO_DIV_MDCClockSpeed, 15, 1)
    BITFIELD_END(BCM5719_DEVICE_H_uint32_t, bits)
#ifdef CXX_SIMULATOR
    RegDEVICEMiiMode_t()
    {
        /** @brief constructor for @ref DEVICE_t.MiiMode. */
        bits.ConstantMDIO_DIV_MDCClockSpeed.setBaseRegister(&r32);
    }
    RegDEVICEMiiMode_t& operator=(const RegDEVICEMiiMode_t& other)
    {
        r32 = other.r32;
        return *this;
    }
#endif /* CXX_SIMULATOR */
} RegDEVICEMiiMode_t;

#define REG_DEVICE_RECEIVE_MAC_MODE ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0000468) /*  */
#define     DEVICE_RECEIVE_MAC_MODE_RESET_SHIFT 0u
#define     DEVICE_RECEIVE_MAC_MODE_RESET_MASK  0x1u
#define GET_DEVICE_RECEIVE_MAC_MODE_RESET(__reg__)  (((__reg__) & 0x1) >> 0u)
#define SET_DEVICE_RECEIVE_MAC_MODE_RESET(__val__)  (((__val__) << 0u) & 0x1u)
#define     DEVICE_RECEIVE_MAC_MODE_ENABLE_SHIFT 1u
#define     DEVICE_RECEIVE_MAC_MODE_ENABLE_MASK  0x2u
#define GET_DEVICE_RECEIVE_MAC_MODE_ENABLE(__reg__)  (((__reg__) & 0x2) >> 1u)
#define SET_DEVICE_RECEIVE_MAC_MODE_ENABLE(__val__)  (((__val__) << 1u) & 0x2u)
#define     DEVICE_RECEIVE_MAC_MODE_PROMISCUOUS_MODE_SHIFT 8u
#define     DEVICE_RECEIVE_MAC_MODE_PROMISCUOUS_MODE_MASK  0x100u
#define GET_DEVICE_RECEIVE_MAC_MODE_PROMISCUOUS_MODE(__reg__)  (((__reg__) & 0x100) >> 8u)
#define SET_DEVICE_RECEIVE_MAC_MODE_PROMISCUOUS_MODE(__val__)  (((__val__) << 8u) & 0x100u)
#define     DEVICE_RECEIVE_MAC_MODE_APE_PROMISCUOUS_MODE_SHIFT 25u
#define     DEVICE_RECEIVE_MAC_MODE_APE_PROMISCUOUS_MODE_MASK  0x2000000u
#define GET_DEVICE_RECEIVE_MAC_MODE_APE_PROMISCUOUS_MODE(__reg__)  (((__reg__) & 0x2000000) >> 25u)
#define SET_DEVICE_RECEIVE_MAC_MODE_APE_PROMISCUOUS_MODE(__val__)  (((__val__) << 25u) & 0x2000000u)

/** @brief Register definition for @ref DEVICE_t.ReceiveMacMode. */
typedef register_container RegDEVICEReceiveMacMode_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;

    BITFIELD_BEGIN(BCM5719_DEVICE_H_uint32_t, bits)
        /** @brief When this bit is set to 1, the Receive MAC state machine will be reset. This is a self-clearing bit. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, Reset, 0, 1)
        /** @brief This bit controls whether the Receive MAC state machine is active or not. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, Enable, 1, 1)
        /** @brief Padding */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, reserved_7_2, 2, 6)
        /** @brief When set, no source address or MC hashing checking will be performed on incoming frames. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, PromiscuousMode, 8, 1)
        /** @brief Padding */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, reserved_24_9, 9, 16)
        /** @brief When set, no source address or MC hashing checking will be performed on incoming frames on APE filter path. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, APEPromiscuousMode, 25, 1)
    BITFIELD_END(BCM5719_DEVICE_H_uint32_t, bits)
#ifdef CXX_SIMULATOR
    RegDEVICEReceiveMacMode_t()
    {
        /** @brief constructor for @ref DEVICE_t.ReceiveMacMode. */
        bits.Reset.setBaseRegister(&r32);
        bits.Enable.setBaseRegister(&r32);
        bits.PromiscuousMode.setBaseRegister(&r32);
        bits.APEPromiscuousMode.setBaseRegister(&r32);
    }
    RegDEVICEReceiveMacMode_t& operator=(const RegDEVICEReceiveMacMode_t& other)
    {
        r32 = other.r32;
        return *this;
    }
#endif /* CXX_SIMULATOR */
} RegDEVICEReceiveMacMode_t;

#define REG_DEVICE_SGMII_STATUS ((volatile BCM5719_DEVICE_H_uint32_t*)0xc00005b4) /* This register reflects various status of the respective SGMII port when enabled. */
#define     DEVICE_SGMII_STATUS_AUTONEGOTIATION_COMPLETE_SHIFT 0u
#define     DEVICE_SGMII_STATUS_AUTONEGOTIATION_COMPLETE_MASK  0x1u
#define GET_DEVICE_SGMII_STATUS_AUTONEGOTIATION_COMPLETE(__reg__)  (((__reg__) & 0x1) >> 0u)
#define SET_DEVICE_SGMII_STATUS_AUTONEGOTIATION_COMPLETE(__val__)  (((__val__) << 0u) & 0x1u)
#define     DEVICE_SGMII_STATUS_LINK_STATUS_SHIFT 1u
#define     DEVICE_SGMII_STATUS_LINK_STATUS_MASK  0x2u
#define GET_DEVICE_SGMII_STATUS_LINK_STATUS(__reg__)  (((__reg__) & 0x2) >> 1u)
#define SET_DEVICE_SGMII_STATUS_LINK_STATUS(__val__)  (((__val__) << 1u) & 0x2u)
#define     DEVICE_SGMII_STATUS_DUPLEX_STATUS_SHIFT 2u
#define     DEVICE_SGMII_STATUS_DUPLEX_STATUS_MASK  0x4u
#define GET_DEVICE_SGMII_STATUS_DUPLEX_STATUS(__reg__)  (((__reg__) & 0x4) >> 2u)
#define SET_DEVICE_SGMII_STATUS_DUPLEX_STATUS(__val__)  (((__val__) << 2u) & 0x4u)
#define     DEVICE_SGMII_STATUS_SPEED_1000_SHIFT 3u
#define     DEVICE_SGMII_STATUS_SPEED_1000_MASK  0x8u
#define GET_DEVICE_SGMII_STATUS_SPEED_1000(__reg__)  (((__reg__) & 0x8) >> 3u)
#define SET_DEVICE_SGMII_STATUS_SPEED_1000(__val__)  (((__val__) << 3u) & 0x8u)
#define     DEVICE_SGMII_STATUS_SPEED_100_SHIFT 4u
#define     DEVICE_SGMII_STATUS_SPEED_100_MASK  0x10u
#define GET_DEVICE_SGMII_STATUS_SPEED_100(__reg__)  (((__reg__) & 0x10) >> 4u)
#define SET_DEVICE_SGMII_STATUS_SPEED_100(__val__)  (((__val__) << 4u) & 0x10u)
#define     DEVICE_SGMII_STATUS_NEXT_PAGE_RX_SHIFT 5u
#define     DEVICE_SGMII_STATUS_NEXT_PAGE_RX_MASK  0x20u
#define GET_DEVICE_SGMII_STATUS_NEXT_PAGE_RX(__reg__)  (((__reg__) & 0x20) >> 5u)
#define SET_DEVICE_SGMII_STATUS_NEXT_PAGE_RX(__val__)  (((__val__) << 5u) & 0x20u)
#define     DEVICE_SGMII_STATUS_PAUSE_RX_SHIFT 6u
#define     DEVICE_SGMII_STATUS_PAUSE_RX_MASK  0x40u
#define GET_DEVICE_SGMII_STATUS_PAUSE_RX(__reg__)  (((__reg__) & 0x40) >> 6u)
#define SET_DEVICE_SGMII_STATUS_PAUSE_RX(__val__)  (((__val__) << 6u) & 0x40u)
#define     DEVICE_SGMII_STATUS_PAUSE_TX_SHIFT 7u
#define     DEVICE_SGMII_STATUS_PAUSE_TX_MASK  0x80u
#define GET_DEVICE_SGMII_STATUS_PAUSE_TX(__reg__)  (((__reg__) & 0x80) >> 7u)
#define SET_DEVICE_SGMII_STATUS_PAUSE_TX(__val__)  (((__val__) << 7u) & 0x80u)
#define     DEVICE_SGMII_STATUS_MEDIA_SELECTION_MODE_SHIFT 8u
#define     DEVICE_SGMII_STATUS_MEDIA_SELECTION_MODE_MASK  0x100u
#define GET_DEVICE_SGMII_STATUS_MEDIA_SELECTION_MODE(__reg__)  (((__reg__) & 0x100) >> 8u)
#define SET_DEVICE_SGMII_STATUS_MEDIA_SELECTION_MODE(__val__)  (((__val__) << 8u) & 0x100u)
#define     DEVICE_SGMII_STATUS_MEDIA_SELECTION_MODE_COPPER 0x0u
#define     DEVICE_SGMII_STATUS_MEDIA_SELECTION_MODE_SGMII 0x1u

#define     DEVICE_SGMII_STATUS_PCS_CRS_DETECT_SHIFT 9u
#define     DEVICE_SGMII_STATUS_PCS_CRS_DETECT_MASK  0x200u
#define GET_DEVICE_SGMII_STATUS_PCS_CRS_DETECT(__reg__)  (((__reg__) & 0x200) >> 9u)
#define SET_DEVICE_SGMII_STATUS_PCS_CRS_DETECT(__val__)  (((__val__) << 9u) & 0x200u)
#define     DEVICE_SGMII_STATUS_EXTERNAL_CRS_DETECT_SHIFT 10u
#define     DEVICE_SGMII_STATUS_EXTERNAL_CRS_DETECT_MASK  0x400u
#define GET_DEVICE_SGMII_STATUS_EXTERNAL_CRS_DETECT(__reg__)  (((__reg__) & 0x400) >> 10u)
#define SET_DEVICE_SGMII_STATUS_EXTERNAL_CRS_DETECT(__val__)  (((__val__) << 10u) & 0x400u)
#define     DEVICE_SGMII_STATUS_LINK_PARTNER_AUTONEGOTIATION_CAPABILITY_SHIFT 16u
#define     DEVICE_SGMII_STATUS_LINK_PARTNER_AUTONEGOTIATION_CAPABILITY_MASK  0xffff0000u
#define GET_DEVICE_SGMII_STATUS_LINK_PARTNER_AUTONEGOTIATION_CAPABILITY(__reg__)  (((__reg__) & 0xffff0000) >> 16u)
#define SET_DEVICE_SGMII_STATUS_LINK_PARTNER_AUTONEGOTIATION_CAPABILITY(__val__)  (((__val__) << 16u) & 0xffff0000u)

/** @brief Register definition for @ref DEVICE_t.SgmiiStatus. */
typedef register_container RegDEVICESgmiiStatus_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;

    BITFIELD_BEGIN(BCM5719_DEVICE_H_uint32_t, bits)
        /** @brief Auto-negotiation process has completed. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, AutonegotiationComplete, 0, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, LinkStatus, 1, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, DuplexStatus, 2, 1)
        /** @brief The SGMII Link currently operable at 1 Gbps data speed. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, Speed1000, 3, 1)
        /** @brief The SGMII Link currently operable at 100mbps data speed. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, Speed100, 4, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, NextPageRX, 5, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, PauseRX, 6, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, PauseTX, 7, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, MediaSelectionMode, 8, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, PCSCRSDetect, 9, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, ExternalCRSDetect, 10, 1)
        /** @brief Padding */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, reserved_15_11, 11, 5)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, LinkPartnerAutonegotiationCapability, 16, 16)
    BITFIELD_END(BCM5719_DEVICE_H_uint32_t, bits)
#ifdef CXX_SIMULATOR
    RegDEVICESgmiiStatus_t()
    {
        /** @brief constructor for @ref DEVICE_t.SgmiiStatus. */
        bits.AutonegotiationComplete.setBaseRegister(&r32);
        bits.LinkStatus.setBaseRegister(&r32);
        bits.DuplexStatus.setBaseRegister(&r32);
        bits.Speed1000.setBaseRegister(&r32);
        bits.Speed100.setBaseRegister(&r32);
        bits.NextPageRX.setBaseRegister(&r32);
        bits.PauseRX.setBaseRegister(&r32);
        bits.PauseTX.setBaseRegister(&r32);
        bits.MediaSelectionMode.setBaseRegister(&r32);
        bits.PCSCRSDetect.setBaseRegister(&r32);
        bits.ExternalCRSDetect.setBaseRegister(&r32);
        bits.LinkPartnerAutonegotiationCapability.setBaseRegister(&r32);
    }
    RegDEVICESgmiiStatus_t& operator=(const RegDEVICESgmiiStatus_t& other)
    {
        r32 = other.r32;
        return *this;
    }
#endif /* CXX_SIMULATOR */
} RegDEVICESgmiiStatus_t;

#define REG_DEVICE_CPMU_CONTROL ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0003600) /*  */
#define     DEVICE_CPMU_CONTROL_CPMU_SOFTWARE_RESET_SHIFT 0u
#define     DEVICE_CPMU_CONTROL_CPMU_SOFTWARE_RESET_MASK  0x1u
#define GET_DEVICE_CPMU_CONTROL_CPMU_SOFTWARE_RESET(__reg__)  (((__reg__) & 0x1) >> 0u)
#define SET_DEVICE_CPMU_CONTROL_CPMU_SOFTWARE_RESET(__val__)  (((__val__) << 0u) & 0x1u)
#define     DEVICE_CPMU_CONTROL_CPMU_REGISTER_SOFTWARE_RESET_SHIFT 1u
#define     DEVICE_CPMU_CONTROL_CPMU_REGISTER_SOFTWARE_RESET_MASK  0x2u
#define GET_DEVICE_CPMU_CONTROL_CPMU_REGISTER_SOFTWARE_RESET(__reg__)  (((__reg__) & 0x2) >> 1u)
#define SET_DEVICE_CPMU_CONTROL_CPMU_REGISTER_SOFTWARE_RESET(__val__)  (((__val__) << 1u) & 0x2u)
#define     DEVICE_CPMU_CONTROL_POWER_DOWN_SHIFT 2u
#define     DEVICE_CPMU_CONTROL_POWER_DOWN_MASK  0x4u
#define GET_DEVICE_CPMU_CONTROL_POWER_DOWN(__reg__)  (((__reg__) & 0x4) >> 2u)
#define SET_DEVICE_CPMU_CONTROL_POWER_DOWN(__val__)  (((__val__) << 2u) & 0x4u)
#define     DEVICE_CPMU_CONTROL_APE_SLEEP_MODE_ENABLE_SHIFT 4u
#define     DEVICE_CPMU_CONTROL_APE_SLEEP_MODE_ENABLE_MASK  0x10u
#define GET_DEVICE_CPMU_CONTROL_APE_SLEEP_MODE_ENABLE(__reg__)  (((__reg__) & 0x10) >> 4u)
#define SET_DEVICE_CPMU_CONTROL_APE_SLEEP_MODE_ENABLE(__val__)  (((__val__) << 4u) & 0x10u)
#define     DEVICE_CPMU_CONTROL_APE_DEEP_SLEEP_MODE_ENABLE_SHIFT 5u
#define     DEVICE_CPMU_CONTROL_APE_DEEP_SLEEP_MODE_ENABLE_MASK  0x20u
#define GET_DEVICE_CPMU_CONTROL_APE_DEEP_SLEEP_MODE_ENABLE(__reg__)  (((__reg__) & 0x20) >> 5u)
#define SET_DEVICE_CPMU_CONTROL_APE_DEEP_SLEEP_MODE_ENABLE(__val__)  (((__val__) << 5u) & 0x20u)
#define     DEVICE_CPMU_CONTROL_LINK_IDLE_POWER_MODE_ENABLE_SHIFT 9u
#define     DEVICE_CPMU_CONTROL_LINK_IDLE_POWER_MODE_ENABLE_MASK  0x200u
#define GET_DEVICE_CPMU_CONTROL_LINK_IDLE_POWER_MODE_ENABLE(__reg__)  (((__reg__) & 0x200) >> 9u)
#define SET_DEVICE_CPMU_CONTROL_LINK_IDLE_POWER_MODE_ENABLE(__val__)  (((__val__) << 9u) & 0x200u)
#define     DEVICE_CPMU_CONTROL_LINK_AWARE_POWER_MODE_ENABLE_SHIFT 10u
#define     DEVICE_CPMU_CONTROL_LINK_AWARE_POWER_MODE_ENABLE_MASK  0x400u
#define GET_DEVICE_CPMU_CONTROL_LINK_AWARE_POWER_MODE_ENABLE(__reg__)  (((__reg__) & 0x400) >> 10u)
#define SET_DEVICE_CPMU_CONTROL_LINK_AWARE_POWER_MODE_ENABLE(__val__)  (((__val__) << 10u) & 0x400u)
#define     DEVICE_CPMU_CONTROL_LINK_SPEED_POWER_MODE_ENABLE_SHIFT 14u
#define     DEVICE_CPMU_CONTROL_LINK_SPEED_POWER_MODE_ENABLE_MASK  0x4000u
#define GET_DEVICE_CPMU_CONTROL_LINK_SPEED_POWER_MODE_ENABLE(__reg__)  (((__reg__) & 0x4000) >> 14u)
#define SET_DEVICE_CPMU_CONTROL_LINK_SPEED_POWER_MODE_ENABLE(__val__)  (((__val__) << 14u) & 0x4000u)
#define     DEVICE_CPMU_CONTROL_GPHY_10MB_RECEIVE_ONLY_MODE_ENABLE_SHIFT 16u
#define     DEVICE_CPMU_CONTROL_GPHY_10MB_RECEIVE_ONLY_MODE_ENABLE_MASK  0x10000u
#define GET_DEVICE_CPMU_CONTROL_GPHY_10MB_RECEIVE_ONLY_MODE_ENABLE(__reg__)  (((__reg__) & 0x10000) >> 16u)
#define SET_DEVICE_CPMU_CONTROL_GPHY_10MB_RECEIVE_ONLY_MODE_ENABLE(__val__)  (((__val__) << 16u) & 0x10000u)
#define     DEVICE_CPMU_CONTROL_LEGACY_TIMER_ENABLE_SHIFT 18u
#define     DEVICE_CPMU_CONTROL_LEGACY_TIMER_ENABLE_MASK  0x40000u
#define GET_DEVICE_CPMU_CONTROL_LEGACY_TIMER_ENABLE(__reg__)  (((__reg__) & 0x40000) >> 18u)
#define SET_DEVICE_CPMU_CONTROL_LEGACY_TIMER_ENABLE(__val__)  (((__val__) << 18u) & 0x40000u)
#define     DEVICE_CPMU_CONTROL_SGMII_DIV_PCS_POWER_DOWN_SHIFT 19u
#define     DEVICE_CPMU_CONTROL_SGMII_DIV_PCS_POWER_DOWN_MASK  0x80000u
#define GET_DEVICE_CPMU_CONTROL_SGMII_DIV_PCS_POWER_DOWN(__reg__)  (((__reg__) & 0x80000) >> 19u)
#define SET_DEVICE_CPMU_CONTROL_SGMII_DIV_PCS_POWER_DOWN(__val__)  (((__val__) << 19u) & 0x80000u)
#define     DEVICE_CPMU_CONTROL_SOFTWARE_CONTROLLED_GPHY_FORCE_DLL_ON_SHIFT 28u
#define     DEVICE_CPMU_CONTROL_SOFTWARE_CONTROLLED_GPHY_FORCE_DLL_ON_MASK  0x10000000u
#define GET_DEVICE_CPMU_CONTROL_SOFTWARE_CONTROLLED_GPHY_FORCE_DLL_ON(__reg__)  (((__reg__) & 0x10000000) >> 28u)
#define SET_DEVICE_CPMU_CONTROL_SOFTWARE_CONTROLLED_GPHY_FORCE_DLL_ON(__val__)  (((__val__) << 28u) & 0x10000000u)

/** @brief Register definition for @ref DEVICE_t.CpmuControl. */
typedef register_container RegDEVICECpmuControl_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;

    BITFIELD_BEGIN(BCM5719_DEVICE_H_uint32_t, bits)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, CPMUSoftwareReset, 0, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, CPMURegisterSoftwareReset, 1, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, PowerDown, 2, 1)
        /** @brief Padding */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, reserved_3_3, 3, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, APESleepModeEnable, 4, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, APEDeepSleepModeEnable, 5, 1)
        /** @brief Padding */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, reserved_8_6, 6, 3)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, LinkIdlePowerModeEnable, 9, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, LinkAwarePowerModeEnable, 10, 1)
        /** @brief Padding */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, reserved_13_11, 11, 3)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, LinkSpeedPowerModeEnable, 14, 1)
        /** @brief Padding */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, reserved_15_15, 15, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, GPHY10MBReceiveOnlyModeEnable, 16, 1)
        /** @brief Padding */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, reserved_17_17, 17, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, LegacyTimerEnable, 18, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, SGMII_DIV_PCSPowerDown, 19, 1)
        /** @brief Padding */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, reserved_27_20, 20, 8)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, SoftwareControlledGPHYForceDLLOn, 28, 1)
    BITFIELD_END(BCM5719_DEVICE_H_uint32_t, bits)
#ifdef CXX_SIMULATOR
    RegDEVICECpmuControl_t()
    {
        /** @brief constructor for @ref DEVICE_t.CpmuControl. */
        bits.CPMUSoftwareReset.setBaseRegister(&r32);
        bits.CPMURegisterSoftwareReset.setBaseRegister(&r32);
        bits.PowerDown.setBaseRegister(&r32);
        bits.APESleepModeEnable.setBaseRegister(&r32);
        bits.APEDeepSleepModeEnable.setBaseRegister(&r32);
        bits.LinkIdlePowerModeEnable.setBaseRegister(&r32);
        bits.LinkAwarePowerModeEnable.setBaseRegister(&r32);
        bits.LinkSpeedPowerModeEnable.setBaseRegister(&r32);
        bits.GPHY10MBReceiveOnlyModeEnable.setBaseRegister(&r32);
        bits.LegacyTimerEnable.setBaseRegister(&r32);
        bits.SGMII_DIV_PCSPowerDown.setBaseRegister(&r32);
        bits.SoftwareControlledGPHYForceDLLOn.setBaseRegister(&r32);
    }
    RegDEVICECpmuControl_t& operator=(const RegDEVICECpmuControl_t& other)
    {
        r32 = other.r32;
        return *this;
    }
#endif /* CXX_SIMULATOR */
} RegDEVICECpmuControl_t;

#define REG_DEVICE_LINK_AWARE_POWER_MODE_CLOCK_POLICY ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0003610) /*  */
#define     DEVICE_LINK_AWARE_POWER_MODE_CLOCK_POLICY_MAC_CLOCK_SWITCH_SHIFT 16u
#define     DEVICE_LINK_AWARE_POWER_MODE_CLOCK_POLICY_MAC_CLOCK_SWITCH_MASK  0x1f0000u
#define GET_DEVICE_LINK_AWARE_POWER_MODE_CLOCK_POLICY_MAC_CLOCK_SWITCH(__reg__)  (((__reg__) & 0x1f0000) >> 16u)
#define SET_DEVICE_LINK_AWARE_POWER_MODE_CLOCK_POLICY_MAC_CLOCK_SWITCH(__val__)  (((__val__) << 16u) & 0x1f0000u)
#define     DEVICE_LINK_AWARE_POWER_MODE_CLOCK_POLICY_MAC_CLOCK_SWITCH_60_0MHZ 0x1u
#define     DEVICE_LINK_AWARE_POWER_MODE_CLOCK_POLICY_MAC_CLOCK_SWITCH_30_0MHZ 0x3u
#define     DEVICE_LINK_AWARE_POWER_MODE_CLOCK_POLICY_MAC_CLOCK_SWITCH_15_0MHZ 0x5u
#define     DEVICE_LINK_AWARE_POWER_MODE_CLOCK_POLICY_MAC_CLOCK_SWITCH_7_5MHZ 0x7u
#define     DEVICE_LINK_AWARE_POWER_MODE_CLOCK_POLICY_MAC_CLOCK_SWITCH_3_75MHZ 0x9u
#define     DEVICE_LINK_AWARE_POWER_MODE_CLOCK_POLICY_MAC_CLOCK_SWITCH_12_5MHZ 0x11u
#define     DEVICE_LINK_AWARE_POWER_MODE_CLOCK_POLICY_MAC_CLOCK_SWITCH_6_25MHZ 0x13u
#define     DEVICE_LINK_AWARE_POWER_MODE_CLOCK_POLICY_MAC_CLOCK_SWITCH_3_125MHZ 0x15u
#define     DEVICE_LINK_AWARE_POWER_MODE_CLOCK_POLICY_MAC_CLOCK_SWITCH_1_563MHZ 0x17u
#define     DEVICE_LINK_AWARE_POWER_MODE_CLOCK_POLICY_MAC_CLOCK_SWITCH_781KHZ 0x19u
#define     DEVICE_LINK_AWARE_POWER_MODE_CLOCK_POLICY_MAC_CLOCK_SWITCH_12_5MHZ_DIV_1_25MHZ 0x1fu


/** @brief Register definition for @ref DEVICE_t.LinkAwarePowerModeClockPolicy. */
typedef register_container RegDEVICELinkAwarePowerModeClockPolicy_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;

    BITFIELD_BEGIN(BCM5719_DEVICE_H_uint32_t, bits)
        /** @brief Padding */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, reserved_15_0, 0, 16)
        /** @brief Software Controlled MAC Core Clock Speed Select. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, MACClockSwitch, 16, 5)
    BITFIELD_END(BCM5719_DEVICE_H_uint32_t, bits)
#ifdef CXX_SIMULATOR
    RegDEVICELinkAwarePowerModeClockPolicy_t()
    {
        /** @brief constructor for @ref DEVICE_t.LinkAwarePowerModeClockPolicy. */
        bits.MACClockSwitch.setBaseRegister(&r32);
    }
    RegDEVICELinkAwarePowerModeClockPolicy_t& operator=(const RegDEVICELinkAwarePowerModeClockPolicy_t& other)
    {
        r32 = other.r32;
        return *this;
    }
#endif /* CXX_SIMULATOR */
} RegDEVICELinkAwarePowerModeClockPolicy_t;

#define REG_DEVICE_CLOCK_SPEED_OVERRIDE_POLICY ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0003624) /*  */
#define     DEVICE_CLOCK_SPEED_OVERRIDE_POLICY_MAC_CLOCK_SWITCH_SHIFT 16u
#define     DEVICE_CLOCK_SPEED_OVERRIDE_POLICY_MAC_CLOCK_SWITCH_MASK  0x1f0000u
#define GET_DEVICE_CLOCK_SPEED_OVERRIDE_POLICY_MAC_CLOCK_SWITCH(__reg__)  (((__reg__) & 0x1f0000) >> 16u)
#define SET_DEVICE_CLOCK_SPEED_OVERRIDE_POLICY_MAC_CLOCK_SWITCH(__val__)  (((__val__) << 16u) & 0x1f0000u)
#define     DEVICE_CLOCK_SPEED_OVERRIDE_POLICY_MAC_CLOCK_SPEED_OVERRIDE_ENABLED_SHIFT 31u
#define     DEVICE_CLOCK_SPEED_OVERRIDE_POLICY_MAC_CLOCK_SPEED_OVERRIDE_ENABLED_MASK  0x80000000u
#define GET_DEVICE_CLOCK_SPEED_OVERRIDE_POLICY_MAC_CLOCK_SPEED_OVERRIDE_ENABLED(__reg__)  (((__reg__) & 0x80000000) >> 31u)
#define SET_DEVICE_CLOCK_SPEED_OVERRIDE_POLICY_MAC_CLOCK_SPEED_OVERRIDE_ENABLED(__val__)  (((__val__) << 31u) & 0x80000000u)

/** @brief Register definition for @ref DEVICE_t.ClockSpeedOverridePolicy. */
typedef register_container RegDEVICEClockSpeedOverridePolicy_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;

    BITFIELD_BEGIN(BCM5719_DEVICE_H_uint32_t, bits)
        /** @brief Padding */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, reserved_15_0, 0, 16)
        /** @brief Software Controlled MAC Core Clock Speed Select */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, MACClockSwitch, 16, 5)
        /** @brief Padding */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, reserved_30_21, 21, 10)
        /** @brief Enable MAC clock speed override */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, MACClockSpeedOverrideEnabled, 31, 1)
    BITFIELD_END(BCM5719_DEVICE_H_uint32_t, bits)
#ifdef CXX_SIMULATOR
    RegDEVICEClockSpeedOverridePolicy_t()
    {
        /** @brief constructor for @ref DEVICE_t.ClockSpeedOverridePolicy. */
        bits.MACClockSwitch.setBaseRegister(&r32);
        bits.MACClockSpeedOverrideEnabled.setBaseRegister(&r32);
    }
    RegDEVICEClockSpeedOverridePolicy_t& operator=(const RegDEVICEClockSpeedOverridePolicy_t& other)
    {
        r32 = other.r32;
        return *this;
    }
#endif /* CXX_SIMULATOR */
} RegDEVICEClockSpeedOverridePolicy_t;

#define REG_DEVICE_STATUS ((volatile BCM5719_DEVICE_H_uint32_t*)0xc000362c) /*  */
#define     DEVICE_STATUS_POWER_MANAGEMENT_STATE_MACHINE_STATE_SHIFT 0u
#define     DEVICE_STATUS_POWER_MANAGEMENT_STATE_MACHINE_STATE_MASK  0xfu
#define GET_DEVICE_STATUS_POWER_MANAGEMENT_STATE_MACHINE_STATE(__reg__)  (((__reg__) & 0xf) >> 0u)
#define SET_DEVICE_STATUS_POWER_MANAGEMENT_STATE_MACHINE_STATE(__val__)  (((__val__) << 0u) & 0xfu)
#define     DEVICE_STATUS_CPMU_POWER_STATE_SHIFT 4u
#define     DEVICE_STATUS_CPMU_POWER_STATE_MASK  0x70u
#define GET_DEVICE_STATUS_CPMU_POWER_STATE(__reg__)  (((__reg__) & 0x70) >> 4u)
#define SET_DEVICE_STATUS_CPMU_POWER_STATE(__val__)  (((__val__) << 4u) & 0x70u)
#define     DEVICE_STATUS_ENERGY_DETECT_STATUS_SHIFT 7u
#define     DEVICE_STATUS_ENERGY_DETECT_STATUS_MASK  0x80u
#define GET_DEVICE_STATUS_ENERGY_DETECT_STATUS(__reg__)  (((__reg__) & 0x80) >> 7u)
#define SET_DEVICE_STATUS_ENERGY_DETECT_STATUS(__val__)  (((__val__) << 7u) & 0x80u)
#define     DEVICE_STATUS_POWER_STATE_SHIFT 8u
#define     DEVICE_STATUS_POWER_STATE_MASK  0x300u
#define GET_DEVICE_STATUS_POWER_STATE(__reg__)  (((__reg__) & 0x300) >> 8u)
#define SET_DEVICE_STATUS_POWER_STATE(__val__)  (((__val__) << 8u) & 0x300u)
#define     DEVICE_STATUS_VMAIN_POWER_STATUS_SHIFT 13u
#define     DEVICE_STATUS_VMAIN_POWER_STATUS_MASK  0x2000u
#define GET_DEVICE_STATUS_VMAIN_POWER_STATUS(__reg__)  (((__reg__) & 0x2000) >> 13u)
#define SET_DEVICE_STATUS_VMAIN_POWER_STATUS(__val__)  (((__val__) << 13u) & 0x2000u)
#define     DEVICE_STATUS_WOL_MAGIC_PACKET_DETECTION_ENABLE_PORT_0_SHIFT 14u
#define     DEVICE_STATUS_WOL_MAGIC_PACKET_DETECTION_ENABLE_PORT_0_MASK  0x4000u
#define GET_DEVICE_STATUS_WOL_MAGIC_PACKET_DETECTION_ENABLE_PORT_0(__reg__)  (((__reg__) & 0x4000) >> 14u)
#define SET_DEVICE_STATUS_WOL_MAGIC_PACKET_DETECTION_ENABLE_PORT_0(__val__)  (((__val__) << 14u) & 0x4000u)
#define     DEVICE_STATUS_WOL_ACPI_DETECTION_ENABLE_PORT_0_SHIFT 15u
#define     DEVICE_STATUS_WOL_ACPI_DETECTION_ENABLE_PORT_0_MASK  0x8000u
#define GET_DEVICE_STATUS_WOL_ACPI_DETECTION_ENABLE_PORT_0(__reg__)  (((__reg__) & 0x8000) >> 15u)
#define SET_DEVICE_STATUS_WOL_ACPI_DETECTION_ENABLE_PORT_0(__val__)  (((__val__) << 15u) & 0x8000u)
#define     DEVICE_STATUS_NCSI_DLL_LOCK_STATUS_SHIFT 16u
#define     DEVICE_STATUS_NCSI_DLL_LOCK_STATUS_MASK  0x10000u
#define GET_DEVICE_STATUS_NCSI_DLL_LOCK_STATUS(__reg__)  (((__reg__) & 0x10000) >> 16u)
#define SET_DEVICE_STATUS_NCSI_DLL_LOCK_STATUS(__val__)  (((__val__) << 16u) & 0x10000u)
#define     DEVICE_STATUS_GPHY_DLL_LOCK_STATUS_SHIFT 17u
#define     DEVICE_STATUS_GPHY_DLL_LOCK_STATUS_MASK  0x20000u
#define GET_DEVICE_STATUS_GPHY_DLL_LOCK_STATUS(__reg__)  (((__reg__) & 0x20000) >> 17u)
#define SET_DEVICE_STATUS_GPHY_DLL_LOCK_STATUS(__val__)  (((__val__) << 17u) & 0x20000u)
#define     DEVICE_STATUS_LINK_IDLE_STATUS_SHIFT 18u
#define     DEVICE_STATUS_LINK_IDLE_STATUS_MASK  0x40000u
#define GET_DEVICE_STATUS_LINK_IDLE_STATUS(__reg__)  (((__reg__) & 0x40000) >> 18u)
#define SET_DEVICE_STATUS_LINK_IDLE_STATUS(__val__)  (((__val__) << 18u) & 0x40000u)
#define     DEVICE_STATUS_ETHERNET_LINK_STATUS_SHIFT 19u
#define     DEVICE_STATUS_ETHERNET_LINK_STATUS_MASK  0x180000u
#define GET_DEVICE_STATUS_ETHERNET_LINK_STATUS(__reg__)  (((__reg__) & 0x180000) >> 19u)
#define SET_DEVICE_STATUS_ETHERNET_LINK_STATUS(__val__)  (((__val__) << 19u) & 0x180000u)
#define     DEVICE_STATUS_ETHERNET_LINK_STATUS_1000_MB 0x0u
#define     DEVICE_STATUS_ETHERNET_LINK_STATUS_100_MB 0x1u
#define     DEVICE_STATUS_ETHERNET_LINK_STATUS_10_MB 0x2u
#define     DEVICE_STATUS_ETHERNET_LINK_STATUS_NO_LINK 0x3u

#define     DEVICE_STATUS_WOL_MAGIC_PACKET_DETECTION_ENABLE_PORT_1_SHIFT 21u
#define     DEVICE_STATUS_WOL_MAGIC_PACKET_DETECTION_ENABLE_PORT_1_MASK  0x200000u
#define GET_DEVICE_STATUS_WOL_MAGIC_PACKET_DETECTION_ENABLE_PORT_1(__reg__)  (((__reg__) & 0x200000) >> 21u)
#define SET_DEVICE_STATUS_WOL_MAGIC_PACKET_DETECTION_ENABLE_PORT_1(__val__)  (((__val__) << 21u) & 0x200000u)
#define     DEVICE_STATUS_WOL_ACPI_DETECTION_ENABLE_PORT_1_SHIFT 22u
#define     DEVICE_STATUS_WOL_ACPI_DETECTION_ENABLE_PORT_1_MASK  0x400000u
#define GET_DEVICE_STATUS_WOL_ACPI_DETECTION_ENABLE_PORT_1(__reg__)  (((__reg__) & 0x400000) >> 22u)
#define SET_DEVICE_STATUS_WOL_ACPI_DETECTION_ENABLE_PORT_1(__val__)  (((__val__) << 22u) & 0x400000u)
#define     DEVICE_STATUS_APE_STATUS_SHIFT 23u
#define     DEVICE_STATUS_APE_STATUS_MASK  0x1800000u
#define GET_DEVICE_STATUS_APE_STATUS(__reg__)  (((__reg__) & 0x1800000) >> 23u)
#define SET_DEVICE_STATUS_APE_STATUS(__val__)  (((__val__) << 23u) & 0x1800000u)
#define     DEVICE_STATUS_APE_STATUS_ACTIVE 0x0u
#define     DEVICE_STATUS_APE_STATUS_SLEEP 0x1u
#define     DEVICE_STATUS_APE_STATUS_DEEP_SLEEP 0x2u

#define     DEVICE_STATUS_FUNCTION_ENABLE_SHIFT 25u
#define     DEVICE_STATUS_FUNCTION_ENABLE_MASK  0x3e000000u
#define GET_DEVICE_STATUS_FUNCTION_ENABLE(__reg__)  (((__reg__) & 0x3e000000) >> 25u)
#define SET_DEVICE_STATUS_FUNCTION_ENABLE(__val__)  (((__val__) << 25u) & 0x3e000000u)
#define     DEVICE_STATUS_FUNCTION_NUMBER_SHIFT 30u
#define     DEVICE_STATUS_FUNCTION_NUMBER_MASK  0xc0000000u
#define GET_DEVICE_STATUS_FUNCTION_NUMBER(__reg__)  (((__reg__) & 0xc0000000) >> 30u)
#define SET_DEVICE_STATUS_FUNCTION_NUMBER(__val__)  (((__val__) << 30u) & 0xc0000000u)

/** @brief Register definition for @ref DEVICE_t.Status. */
typedef register_container RegDEVICEStatus_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;

    BITFIELD_BEGIN(BCM5719_DEVICE_H_uint32_t, bits)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, PowerManagementStateMachineState, 0, 4)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, CPMUPowerState, 4, 3)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, EnergyDetectStatus, 7, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, PowerState, 8, 2)
        /** @brief Padding */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, reserved_12_10, 10, 3)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, VMAINPowerStatus, 13, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, WOLMagicPacketDetectionEnablePort0, 14, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, WOLACPIDetectionEnablePort0, 15, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, NCSIDLLLockStatus, 16, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, GPHYDLLLockStatus, 17, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, LinkIdleStatus, 18, 1)
        /** @brief EthernetLink Status */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, EthernetLinkStatus, 19, 2)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, WOLMagicPacketDetectionEnablePort1, 21, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, WOLACPIDetectionEnablePort1, 22, 1)
        /** @brief APE Engine Status */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, APEStatus, 23, 2)
        /** @brief Function Enable input from System BIOS */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, FunctionEnable, 25, 5)
        /** @brief PCIE function number */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, FunctionNumber, 30, 2)
    BITFIELD_END(BCM5719_DEVICE_H_uint32_t, bits)
#ifdef CXX_SIMULATOR
    RegDEVICEStatus_t()
    {
        /** @brief constructor for @ref DEVICE_t.Status. */
        bits.PowerManagementStateMachineState.setBaseRegister(&r32);
        bits.CPMUPowerState.setBaseRegister(&r32);
        bits.EnergyDetectStatus.setBaseRegister(&r32);
        bits.PowerState.setBaseRegister(&r32);
        bits.VMAINPowerStatus.setBaseRegister(&r32);
        bits.WOLMagicPacketDetectionEnablePort0.setBaseRegister(&r32);
        bits.WOLACPIDetectionEnablePort0.setBaseRegister(&r32);
        bits.NCSIDLLLockStatus.setBaseRegister(&r32);
        bits.GPHYDLLLockStatus.setBaseRegister(&r32);
        bits.LinkIdleStatus.setBaseRegister(&r32);
        bits.EthernetLinkStatus.setBaseRegister(&r32);
        bits.WOLMagicPacketDetectionEnablePort1.setBaseRegister(&r32);
        bits.WOLACPIDetectionEnablePort1.setBaseRegister(&r32);
        bits.APEStatus.setBaseRegister(&r32);
        bits.FunctionEnable.setBaseRegister(&r32);
        bits.FunctionNumber.setBaseRegister(&r32);
    }
    RegDEVICEStatus_t& operator=(const RegDEVICEStatus_t& other)
    {
        r32 = other.r32;
        return *this;
    }
#endif /* CXX_SIMULATOR */
} RegDEVICEStatus_t;

#define REG_DEVICE_CLOCK_STATUS ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0003630) /*  */
/** @brief Register definition for @ref DEVICE_t.ClockStatus. */
typedef register_container RegDEVICEClockStatus_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICEClockStatus_t;

#define REG_DEVICE_GPHY_CONTROL_STATUS ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0003638) /*  */
#define     DEVICE_GPHY_CONTROL_STATUS_GPHY_IDDQ_SHIFT 0u
#define     DEVICE_GPHY_CONTROL_STATUS_GPHY_IDDQ_MASK  0x1u
#define GET_DEVICE_GPHY_CONTROL_STATUS_GPHY_IDDQ(__reg__)  (((__reg__) & 0x1) >> 0u)
#define SET_DEVICE_GPHY_CONTROL_STATUS_GPHY_IDDQ(__val__)  (((__val__) << 0u) & 0x1u)
#define     DEVICE_GPHY_CONTROL_STATUS_BIAS_IDDQ_SHIFT 1u
#define     DEVICE_GPHY_CONTROL_STATUS_BIAS_IDDQ_MASK  0x2u
#define GET_DEVICE_GPHY_CONTROL_STATUS_BIAS_IDDQ(__reg__)  (((__reg__) & 0x2) >> 1u)
#define SET_DEVICE_GPHY_CONTROL_STATUS_BIAS_IDDQ(__val__)  (((__val__) << 1u) & 0x2u)
#define     DEVICE_GPHY_CONTROL_STATUS_CPMU_SOFTWARE_RESET_SHIFT 2u
#define     DEVICE_GPHY_CONTROL_STATUS_CPMU_SOFTWARE_RESET_MASK  0x4u
#define GET_DEVICE_GPHY_CONTROL_STATUS_CPMU_SOFTWARE_RESET(__reg__)  (((__reg__) & 0x4) >> 2u)
#define SET_DEVICE_GPHY_CONTROL_STATUS_CPMU_SOFTWARE_RESET(__val__)  (((__val__) << 2u) & 0x4u)
#define     DEVICE_GPHY_CONTROL_STATUS_CPMU_REGISTER_SOFTWARE_RESET_SHIFT 3u
#define     DEVICE_GPHY_CONTROL_STATUS_CPMU_REGISTER_SOFTWARE_RESET_MASK  0x8u
#define GET_DEVICE_GPHY_CONTROL_STATUS_CPMU_REGISTER_SOFTWARE_RESET(__reg__)  (((__reg__) & 0x8) >> 3u)
#define SET_DEVICE_GPHY_CONTROL_STATUS_CPMU_REGISTER_SOFTWARE_RESET(__val__)  (((__val__) << 3u) & 0x8u)
#define     DEVICE_GPHY_CONTROL_STATUS_POWER_DOWN_SHIFT 4u
#define     DEVICE_GPHY_CONTROL_STATUS_POWER_DOWN_MASK  0x10u
#define GET_DEVICE_GPHY_CONTROL_STATUS_POWER_DOWN(__reg__)  (((__reg__) & 0x10) >> 4u)
#define SET_DEVICE_GPHY_CONTROL_STATUS_POWER_DOWN(__val__)  (((__val__) << 4u) & 0x10u)
#define     DEVICE_GPHY_CONTROL_STATUS_SGMII_DIV_PCS_POWER_DOWN_SHIFT 15u
#define     DEVICE_GPHY_CONTROL_STATUS_SGMII_DIV_PCS_POWER_DOWN_MASK  0x8000u
#define GET_DEVICE_GPHY_CONTROL_STATUS_SGMII_DIV_PCS_POWER_DOWN(__reg__)  (((__reg__) & 0x8000) >> 15u)
#define SET_DEVICE_GPHY_CONTROL_STATUS_SGMII_DIV_PCS_POWER_DOWN(__val__)  (((__val__) << 15u) & 0x8000u)
#define     DEVICE_GPHY_CONTROL_STATUS_NCSI_PLL_LOCK_STATUS_SHIFT 25u
#define     DEVICE_GPHY_CONTROL_STATUS_NCSI_PLL_LOCK_STATUS_MASK  0x2000000u
#define GET_DEVICE_GPHY_CONTROL_STATUS_NCSI_PLL_LOCK_STATUS(__reg__)  (((__reg__) & 0x2000000) >> 25u)
#define SET_DEVICE_GPHY_CONTROL_STATUS_NCSI_PLL_LOCK_STATUS(__val__)  (((__val__) << 25u) & 0x2000000u)
#define     DEVICE_GPHY_CONTROL_STATUS_TLP_CLOCK_SOURCE_SHIFT 26u
#define     DEVICE_GPHY_CONTROL_STATUS_TLP_CLOCK_SOURCE_MASK  0x4000000u
#define GET_DEVICE_GPHY_CONTROL_STATUS_TLP_CLOCK_SOURCE(__reg__)  (((__reg__) & 0x4000000) >> 26u)
#define SET_DEVICE_GPHY_CONTROL_STATUS_TLP_CLOCK_SOURCE(__val__)  (((__val__) << 26u) & 0x4000000u)
#define     DEVICE_GPHY_CONTROL_STATUS_SWITCHING_REGULATOR_POWER_DOWN_SHIFT 27u
#define     DEVICE_GPHY_CONTROL_STATUS_SWITCHING_REGULATOR_POWER_DOWN_MASK  0x8000000u
#define GET_DEVICE_GPHY_CONTROL_STATUS_SWITCHING_REGULATOR_POWER_DOWN(__reg__)  (((__reg__) & 0x8000000) >> 27u)
#define SET_DEVICE_GPHY_CONTROL_STATUS_SWITCHING_REGULATOR_POWER_DOWN(__val__)  (((__val__) << 27u) & 0x8000000u)

/** @brief Register definition for @ref DEVICE_t.GphyControlStatus. */
typedef register_container RegDEVICEGphyControlStatus_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;

    BITFIELD_BEGIN(BCM5719_DEVICE_H_uint32_t, bits)
        /** @brief When this bit is set, GPHY will be powered down. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, GPHYIDDQ, 0, 1)
        /** @brief When this bit is set, BIAS will be powered down. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, BIASIDDQ, 1, 1)
        /** @brief Software reset for all the CPMU logic expect for registers. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, CPMUSoftwareReset, 2, 1)
        /** @brief Software reset for resetting all the registers to default. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, CPMURegisterSoftwareReset, 3, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, PowerDown, 4, 1)
        /** @brief Padding */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, reserved_14_5, 5, 10)
        /** @brief Setting this bit will powerdown SGMII-PCS module. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, SGMII_DIV_PCSPowerDown, 15, 1)
        /** @brief Padding */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, reserved_24_16, 16, 9)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, NCSIPLLLockStatus, 25, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, TLPClockSource, 26, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, SwitchingRegulatorPowerDown, 27, 1)
    BITFIELD_END(BCM5719_DEVICE_H_uint32_t, bits)
#ifdef CXX_SIMULATOR
    RegDEVICEGphyControlStatus_t()
    {
        /** @brief constructor for @ref DEVICE_t.GphyControlStatus. */
        bits.GPHYIDDQ.setBaseRegister(&r32);
        bits.BIASIDDQ.setBaseRegister(&r32);
        bits.CPMUSoftwareReset.setBaseRegister(&r32);
        bits.CPMURegisterSoftwareReset.setBaseRegister(&r32);
        bits.PowerDown.setBaseRegister(&r32);
        bits.SGMII_DIV_PCSPowerDown.setBaseRegister(&r32);
        bits.NCSIPLLLockStatus.setBaseRegister(&r32);
        bits.TLPClockSource.setBaseRegister(&r32);
        bits.SwitchingRegulatorPowerDown.setBaseRegister(&r32);
    }
    RegDEVICEGphyControlStatus_t& operator=(const RegDEVICEGphyControlStatus_t& other)
    {
        r32 = other.r32;
        return *this;
    }
#endif /* CXX_SIMULATOR */
} RegDEVICEGphyControlStatus_t;

#define REG_DEVICE_CHIP_ID ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0003658) /*  */
/** @brief Register definition for @ref DEVICE_t.ChipId. */
typedef register_container RegDEVICEChipId_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICEChipId_t;

#define REG_DEVICE_MUTEX_REQUEST ((volatile BCM5719_DEVICE_H_uint32_t*)0xc000365c) /* Writing a 1 to any of these bits pends a Mutex lock request on behalf of a software agent. The bit is subsequently latched by hardware and shall read 1 as long as the request is pending. Writing a 0 to a bit shall have no effect. */
/** @brief Register definition for @ref DEVICE_t.MutexRequest. */
typedef register_container RegDEVICEMutexRequest_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICEMutexRequest_t;

#define REG_DEVICE_MUTEX_GRANT ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0003660) /* Reading this field shall return a maximum of one set bit at any time. The set bit shall point to the lock owner. If the Mutex is not locked, then a read shall return a value 0x0000. Writing a 1 to the already set bit shall relinquish the lock and the set bit shall be cleared. Writing a 1 to an unset bit shall cancel the corresponding pending request if there was one, and the pairing bit in the Mutex_Request_Reg shall be cleared. */
/** @brief Register definition for @ref DEVICE_t.MutexGrant. */
typedef register_container RegDEVICEMutexGrant_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICEMutexGrant_t;

#define REG_DEVICE_GPHY_STRAP ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0003664) /*  */
#define     DEVICE_GPHY_STRAP_TXMBUF_ECC_ENABLE_SHIFT 2u
#define     DEVICE_GPHY_STRAP_TXMBUF_ECC_ENABLE_MASK  0x4u
#define GET_DEVICE_GPHY_STRAP_TXMBUF_ECC_ENABLE(__reg__)  (((__reg__) & 0x4) >> 2u)
#define SET_DEVICE_GPHY_STRAP_TXMBUF_ECC_ENABLE(__val__)  (((__val__) << 2u) & 0x4u)
#define     DEVICE_GPHY_STRAP_RXMBUF_ECC_ENABLE_SHIFT 3u
#define     DEVICE_GPHY_STRAP_RXMBUF_ECC_ENABLE_MASK  0x8u
#define GET_DEVICE_GPHY_STRAP_RXMBUF_ECC_ENABLE(__reg__)  (((__reg__) & 0x8) >> 3u)
#define SET_DEVICE_GPHY_STRAP_RXMBUF_ECC_ENABLE(__val__)  (((__val__) << 3u) & 0x8u)
#define     DEVICE_GPHY_STRAP_RXCPU_SPAD_ECC_ENABLE_SHIFT 4u
#define     DEVICE_GPHY_STRAP_RXCPU_SPAD_ECC_ENABLE_MASK  0x10u
#define GET_DEVICE_GPHY_STRAP_RXCPU_SPAD_ECC_ENABLE(__reg__)  (((__reg__) & 0x10) >> 4u)
#define SET_DEVICE_GPHY_STRAP_RXCPU_SPAD_ECC_ENABLE(__val__)  (((__val__) << 4u) & 0x10u)

/** @brief Register definition for @ref DEVICE_t.GphyStrap. */
typedef register_container RegDEVICEGphyStrap_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;

    BITFIELD_BEGIN(BCM5719_DEVICE_H_uint32_t, bits)
        /** @brief Padding */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, reserved_1_0, 0, 2)
        /** @brief Enable TXMBUF ECC. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, TXMBUFECCEnable, 2, 1)
        /** @brief Enable RXMBUF ECC. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, RXMBUFECCEnable, 3, 1)
        /** @brief Enable ECC for rxcpu scratchpad. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, RXCPUSPADECCEnable, 4, 1)
    BITFIELD_END(BCM5719_DEVICE_H_uint32_t, bits)
#ifdef CXX_SIMULATOR
    RegDEVICEGphyStrap_t()
    {
        /** @brief constructor for @ref DEVICE_t.GphyStrap. */
        bits.TXMBUFECCEnable.setBaseRegister(&r32);
        bits.RXMBUFECCEnable.setBaseRegister(&r32);
        bits.RXCPUSPADECCEnable.setBaseRegister(&r32);
    }
    RegDEVICEGphyStrap_t& operator=(const RegDEVICEGphyStrap_t& other)
    {
        r32 = other.r32;
        return *this;
    }
#endif /* CXX_SIMULATOR */
} RegDEVICEGphyStrap_t;

#define REG_DEVICE_TOP_LEVEL_MISCELLANEOUS_CONTROL_1 ((volatile BCM5719_DEVICE_H_uint32_t*)0xc000367c) /*  */
#define     DEVICE_TOP_LEVEL_MISCELLANEOUS_CONTROL_1_NCSI_CLOCK_OUTPUT_DISABLE_SHIFT 4u
#define     DEVICE_TOP_LEVEL_MISCELLANEOUS_CONTROL_1_NCSI_CLOCK_OUTPUT_DISABLE_MASK  0x10u
#define GET_DEVICE_TOP_LEVEL_MISCELLANEOUS_CONTROL_1_NCSI_CLOCK_OUTPUT_DISABLE(__reg__)  (((__reg__) & 0x10) >> 4u)
#define SET_DEVICE_TOP_LEVEL_MISCELLANEOUS_CONTROL_1_NCSI_CLOCK_OUTPUT_DISABLE(__val__)  (((__val__) << 4u) & 0x10u)
#define     DEVICE_TOP_LEVEL_MISCELLANEOUS_CONTROL_1_LOW_POWER_IDDQ_MODE_SHIFT 5u
#define     DEVICE_TOP_LEVEL_MISCELLANEOUS_CONTROL_1_LOW_POWER_IDDQ_MODE_MASK  0x20u
#define GET_DEVICE_TOP_LEVEL_MISCELLANEOUS_CONTROL_1_LOW_POWER_IDDQ_MODE(__reg__)  (((__reg__) & 0x20) >> 5u)
#define SET_DEVICE_TOP_LEVEL_MISCELLANEOUS_CONTROL_1_LOW_POWER_IDDQ_MODE(__val__)  (((__val__) << 5u) & 0x20u)

/** @brief Register definition for @ref DEVICE_t.TopLevelMiscellaneousControl1. */
typedef register_container RegDEVICETopLevelMiscellaneousControl1_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;

    BITFIELD_BEGIN(BCM5719_DEVICE_H_uint32_t, bits)
        /** @brief Padding */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, reserved_3_0, 0, 4)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, NCSIClockOutputDisable, 4, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, LowPowerIDDQMode, 5, 1)
    BITFIELD_END(BCM5719_DEVICE_H_uint32_t, bits)
#ifdef CXX_SIMULATOR
    RegDEVICETopLevelMiscellaneousControl1_t()
    {
        /** @brief constructor for @ref DEVICE_t.TopLevelMiscellaneousControl1. */
        bits.NCSIClockOutputDisable.setBaseRegister(&r32);
        bits.LowPowerIDDQMode.setBaseRegister(&r32);
    }
    RegDEVICETopLevelMiscellaneousControl1_t& operator=(const RegDEVICETopLevelMiscellaneousControl1_t& other)
    {
        r32 = other.r32;
        return *this;
    }
#endif /* CXX_SIMULATOR */
} RegDEVICETopLevelMiscellaneousControl1_t;

#define REG_DEVICE_EEE_MODE ((volatile BCM5719_DEVICE_H_uint32_t*)0xc00036b0) /*  */
#define     DEVICE_EEE_MODE_RX_CPU_ALLOW_LPI_SHIFT 0u
#define     DEVICE_EEE_MODE_RX_CPU_ALLOW_LPI_MASK  0x1u
#define GET_DEVICE_EEE_MODE_RX_CPU_ALLOW_LPI(__reg__)  (((__reg__) & 0x1) >> 0u)
#define SET_DEVICE_EEE_MODE_RX_CPU_ALLOW_LPI(__val__)  (((__val__) << 0u) & 0x1u)
#define     DEVICE_EEE_MODE_DRIVE_ALLOW_LPI_SHIFT 1u
#define     DEVICE_EEE_MODE_DRIVE_ALLOW_LPI_MASK  0x2u
#define GET_DEVICE_EEE_MODE_DRIVE_ALLOW_LPI(__reg__)  (((__reg__) & 0x2) >> 1u)
#define SET_DEVICE_EEE_MODE_DRIVE_ALLOW_LPI(__val__)  (((__val__) << 1u) & 0x2u)
#define     DEVICE_EEE_MODE_APE_TX_DETECTION_ENABLE_SHIFT 2u
#define     DEVICE_EEE_MODE_APE_TX_DETECTION_ENABLE_MASK  0x4u
#define GET_DEVICE_EEE_MODE_APE_TX_DETECTION_ENABLE(__reg__)  (((__reg__) & 0x4) >> 2u)
#define SET_DEVICE_EEE_MODE_APE_TX_DETECTION_ENABLE(__val__)  (((__val__) << 2u) & 0x4u)
#define     DEVICE_EEE_MODE_EEE_LINK_IDLE_DETECTION_ENABLE_SHIFT 3u
#define     DEVICE_EEE_MODE_EEE_LINK_IDLE_DETECTION_ENABLE_MASK  0x8u
#define GET_DEVICE_EEE_MODE_EEE_LINK_IDLE_DETECTION_ENABLE(__reg__)  (((__reg__) & 0x8) >> 3u)
#define SET_DEVICE_EEE_MODE_EEE_LINK_IDLE_DETECTION_ENABLE(__val__)  (((__val__) << 3u) & 0x8u)
#define     DEVICE_EEE_MODE_PCIE_L1_EXIT_DETECTION_ENABLE_SHIFT 4u
#define     DEVICE_EEE_MODE_PCIE_L1_EXIT_DETECTION_ENABLE_MASK  0x10u
#define GET_DEVICE_EEE_MODE_PCIE_L1_EXIT_DETECTION_ENABLE(__reg__)  (((__reg__) & 0x10) >> 4u)
#define SET_DEVICE_EEE_MODE_PCIE_L1_EXIT_DETECTION_ENABLE(__val__)  (((__val__) << 4u) & 0x10u)
#define     DEVICE_EEE_MODE_RX_CPU_ALLOW_LPI_ENABLE_SHIFT 5u
#define     DEVICE_EEE_MODE_RX_CPU_ALLOW_LPI_ENABLE_MASK  0x20u
#define GET_DEVICE_EEE_MODE_RX_CPU_ALLOW_LPI_ENABLE(__reg__)  (((__reg__) & 0x20) >> 5u)
#define SET_DEVICE_EEE_MODE_RX_CPU_ALLOW_LPI_ENABLE(__val__)  (((__val__) << 5u) & 0x20u)
#define     DEVICE_EEE_MODE_SEND_INDEX_DETECTION_ENABLE_SHIFT 6u
#define     DEVICE_EEE_MODE_SEND_INDEX_DETECTION_ENABLE_MASK  0x40u
#define GET_DEVICE_EEE_MODE_SEND_INDEX_DETECTION_ENABLE(__reg__)  (((__reg__) & 0x40) >> 6u)
#define SET_DEVICE_EEE_MODE_SEND_INDEX_DETECTION_ENABLE(__val__)  (((__val__) << 6u) & 0x40u)
#define     DEVICE_EEE_MODE_USER_LPI_ENABLE_SHIFT 7u
#define     DEVICE_EEE_MODE_USER_LPI_ENABLE_MASK  0x80u
#define GET_DEVICE_EEE_MODE_USER_LPI_ENABLE(__reg__)  (((__reg__) & 0x80) >> 7u)
#define SET_DEVICE_EEE_MODE_USER_LPI_ENABLE(__val__)  (((__val__) << 7u) & 0x80u)
#define     DEVICE_EEE_MODE_TX_LPI_ENABLE_SHIFT 8u
#define     DEVICE_EEE_MODE_TX_LPI_ENABLE_MASK  0x100u
#define GET_DEVICE_EEE_MODE_TX_LPI_ENABLE(__reg__)  (((__reg__) & 0x100) >> 8u)
#define SET_DEVICE_EEE_MODE_TX_LPI_ENABLE(__val__)  (((__val__) << 8u) & 0x100u)
#define     DEVICE_EEE_MODE_RX_LPI_ENABLE_SHIFT 9u
#define     DEVICE_EEE_MODE_RX_LPI_ENABLE_MASK  0x200u
#define GET_DEVICE_EEE_MODE_RX_LPI_ENABLE(__reg__)  (((__reg__) & 0x200) >> 9u)
#define SET_DEVICE_EEE_MODE_RX_LPI_ENABLE(__val__)  (((__val__) << 9u) & 0x200u)
#define     DEVICE_EEE_MODE_AUTO_WAKE_ENABLE_SHIFT 10u
#define     DEVICE_EEE_MODE_AUTO_WAKE_ENABLE_MASK  0x400u
#define GET_DEVICE_EEE_MODE_AUTO_WAKE_ENABLE(__reg__)  (((__reg__) & 0x400) >> 10u)
#define SET_DEVICE_EEE_MODE_AUTO_WAKE_ENABLE(__val__)  (((__val__) << 10u) & 0x400u)
#define     DEVICE_EEE_MODE_BLOCK_TIME_SHIFT 11u
#define     DEVICE_EEE_MODE_BLOCK_TIME_MASK  0x7f800u
#define GET_DEVICE_EEE_MODE_BLOCK_TIME(__reg__)  (((__reg__) & 0x7f800) >> 11u)
#define SET_DEVICE_EEE_MODE_BLOCK_TIME(__val__)  (((__val__) << 11u) & 0x7f800u)
#define     DEVICE_EEE_MODE_DRIVE_ALLOW_LPI_ENABLE_SHIFT 19u
#define     DEVICE_EEE_MODE_DRIVE_ALLOW_LPI_ENABLE_MASK  0x80000u
#define GET_DEVICE_EEE_MODE_DRIVE_ALLOW_LPI_ENABLE(__reg__)  (((__reg__) & 0x80000) >> 19u)
#define SET_DEVICE_EEE_MODE_DRIVE_ALLOW_LPI_ENABLE(__val__)  (((__val__) << 19u) & 0x80000u)

/** @brief Register definition for @ref DEVICE_t.EeeMode. */
typedef register_container RegDEVICEEeeMode_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;

    BITFIELD_BEGIN(BCM5719_DEVICE_H_uint32_t, bits)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, RXCPUAllowLPI, 0, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, DriveAllowLPI, 1, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, APETXDetectionEnable, 2, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, EEELinkIdleDetectionEnable, 3, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, PCIeL1ExitDetectionEnable, 4, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, RXCPUAllowLPIEnable, 5, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, SendIndexDetectionEnable, 6, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, UserLPIEnable, 7, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, TXLPIEnable, 8, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, RXLPIEnable, 9, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, AutoWakeEnable, 10, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, BlockTime, 11, 8)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, DriveAllowLPIEnable, 19, 1)
    BITFIELD_END(BCM5719_DEVICE_H_uint32_t, bits)
#ifdef CXX_SIMULATOR
    RegDEVICEEeeMode_t()
    {
        /** @brief constructor for @ref DEVICE_t.EeeMode. */
        bits.RXCPUAllowLPI.setBaseRegister(&r32);
        bits.DriveAllowLPI.setBaseRegister(&r32);
        bits.APETXDetectionEnable.setBaseRegister(&r32);
        bits.EEELinkIdleDetectionEnable.setBaseRegister(&r32);
        bits.PCIeL1ExitDetectionEnable.setBaseRegister(&r32);
        bits.RXCPUAllowLPIEnable.setBaseRegister(&r32);
        bits.SendIndexDetectionEnable.setBaseRegister(&r32);
        bits.UserLPIEnable.setBaseRegister(&r32);
        bits.TXLPIEnable.setBaseRegister(&r32);
        bits.RXLPIEnable.setBaseRegister(&r32);
        bits.AutoWakeEnable.setBaseRegister(&r32);
        bits.BlockTime.setBaseRegister(&r32);
        bits.DriveAllowLPIEnable.setBaseRegister(&r32);
    }
    RegDEVICEEeeMode_t& operator=(const RegDEVICEEeeMode_t& other)
    {
        r32 = other.r32;
        return *this;
    }
#endif /* CXX_SIMULATOR */
} RegDEVICEEeeMode_t;

#define REG_DEVICE_EEE_LINK_IDLE_CONTROL ((volatile BCM5719_DEVICE_H_uint32_t*)0xc00036bc) /*  */
#define     DEVICE_EEE_LINK_IDLE_CONTROL_DEBUG_UART_IDLE_SHIFT 2u
#define     DEVICE_EEE_LINK_IDLE_CONTROL_DEBUG_UART_IDLE_MASK  0x4u
#define GET_DEVICE_EEE_LINK_IDLE_CONTROL_DEBUG_UART_IDLE(__reg__)  (((__reg__) & 0x4) >> 2u)
#define SET_DEVICE_EEE_LINK_IDLE_CONTROL_DEBUG_UART_IDLE(__val__)  (((__val__) << 2u) & 0x4u)

/** @brief Register definition for @ref DEVICE_t.EeeLinkIdleControl. */
typedef register_container RegDEVICEEeeLinkIdleControl_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;

    BITFIELD_BEGIN(BCM5719_DEVICE_H_uint32_t, bits)
        /** @brief Padding */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, reserved_1_0, 0, 2)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, DebugUARTIdle, 2, 1)
    BITFIELD_END(BCM5719_DEVICE_H_uint32_t, bits)
#ifdef CXX_SIMULATOR
    RegDEVICEEeeLinkIdleControl_t()
    {
        /** @brief constructor for @ref DEVICE_t.EeeLinkIdleControl. */
        bits.DebugUARTIdle.setBaseRegister(&r32);
    }
    RegDEVICEEeeLinkIdleControl_t& operator=(const RegDEVICEEeeLinkIdleControl_t& other)
    {
        r32 = other.r32;
        return *this;
    }
#endif /* CXX_SIMULATOR */
} RegDEVICEEeeLinkIdleControl_t;

#define REG_DEVICE_EEE_CONTROL ((volatile BCM5719_DEVICE_H_uint32_t*)0xc00036d0) /*  */
#define     DEVICE_EEE_CONTROL_EXIT_TIME_SHIFT 0u
#define     DEVICE_EEE_CONTROL_EXIT_TIME_MASK  0xffffu
#define GET_DEVICE_EEE_CONTROL_EXIT_TIME(__reg__)  (((__reg__) & 0xffff) >> 0u)
#define SET_DEVICE_EEE_CONTROL_EXIT_TIME(__val__)  (((__val__) << 0u) & 0xffffu)
#define     DEVICE_EEE_CONTROL_MINIMUM_ASSERT_SHIFT 16u
#define     DEVICE_EEE_CONTROL_MINIMUM_ASSERT_MASK  0xffff0000u
#define GET_DEVICE_EEE_CONTROL_MINIMUM_ASSERT(__reg__)  (((__reg__) & 0xffff0000) >> 16u)
#define SET_DEVICE_EEE_CONTROL_MINIMUM_ASSERT(__val__)  (((__val__) << 16u) & 0xffff0000u)

/** @brief Register definition for @ref DEVICE_t.EeeControl. */
typedef register_container RegDEVICEEeeControl_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;

    BITFIELD_BEGIN(BCM5719_DEVICE_H_uint32_t, bits)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, ExitTime, 0, 16)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, MinimumAssert, 16, 16)
    BITFIELD_END(BCM5719_DEVICE_H_uint32_t, bits)
#ifdef CXX_SIMULATOR
    RegDEVICEEeeControl_t()
    {
        /** @brief constructor for @ref DEVICE_t.EeeControl. */
        bits.ExitTime.setBaseRegister(&r32);
        bits.MinimumAssert.setBaseRegister(&r32);
    }
    RegDEVICEEeeControl_t& operator=(const RegDEVICEEeeControl_t& other)
    {
        r32 = other.r32;
        return *this;
    }
#endif /* CXX_SIMULATOR */
} RegDEVICEEeeControl_t;

#define REG_DEVICE_GLOBAL_MUTEX_REQUEST ((volatile BCM5719_DEVICE_H_uint32_t*)0xc00036f0) /*  */
/** @brief Register definition for @ref DEVICE_t.GlobalMutexRequest. */
typedef register_container RegDEVICEGlobalMutexRequest_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICEGlobalMutexRequest_t;

#define REG_DEVICE_GLOBAL_MUTEX_GRANT ((volatile BCM5719_DEVICE_H_uint32_t*)0xc00036f4) /*  */
/** @brief Register definition for @ref DEVICE_t.GlobalMutexGrant. */
typedef register_container RegDEVICEGlobalMutexGrant_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICEGlobalMutexGrant_t;

#define REG_DEVICE_MEMORY_ARBITER_MODE ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0004000) /*  */
#define     DEVICE_MEMORY_ARBITER_MODE_ENABLE_SHIFT 1u
#define     DEVICE_MEMORY_ARBITER_MODE_ENABLE_MASK  0x2u
#define GET_DEVICE_MEMORY_ARBITER_MODE_ENABLE(__reg__)  (((__reg__) & 0x2) >> 1u)
#define SET_DEVICE_MEMORY_ARBITER_MODE_ENABLE(__val__)  (((__val__) << 1u) & 0x2u)

/** @brief Register definition for @ref DEVICE_t.MemoryArbiterMode. */
typedef register_container RegDEVICEMemoryArbiterMode_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;

    BITFIELD_BEGIN(BCM5719_DEVICE_H_uint32_t, bits)
        /** @brief Padding */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, reserved_0_0, 0, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, Enable, 1, 1)
    BITFIELD_END(BCM5719_DEVICE_H_uint32_t, bits)
#ifdef CXX_SIMULATOR
    RegDEVICEMemoryArbiterMode_t()
    {
        /** @brief constructor for @ref DEVICE_t.MemoryArbiterMode. */
        bits.Enable.setBaseRegister(&r32);
    }
    RegDEVICEMemoryArbiterMode_t& operator=(const RegDEVICEMemoryArbiterMode_t& other)
    {
        r32 = other.r32;
        return *this;
    }
#endif /* CXX_SIMULATOR */
} RegDEVICEMemoryArbiterMode_t;

#define REG_DEVICE_BUFFER_MANAGER_MODE ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0004400) /*  */
#define     DEVICE_BUFFER_MANAGER_MODE_ENABLE_SHIFT 1u
#define     DEVICE_BUFFER_MANAGER_MODE_ENABLE_MASK  0x2u
#define GET_DEVICE_BUFFER_MANAGER_MODE_ENABLE(__reg__)  (((__reg__) & 0x2) >> 1u)
#define SET_DEVICE_BUFFER_MANAGER_MODE_ENABLE(__val__)  (((__val__) << 1u) & 0x2u)
#define     DEVICE_BUFFER_MANAGER_MODE_ATTENTION_ENABLE_SHIFT 2u
#define     DEVICE_BUFFER_MANAGER_MODE_ATTENTION_ENABLE_MASK  0x4u
#define GET_DEVICE_BUFFER_MANAGER_MODE_ATTENTION_ENABLE(__reg__)  (((__reg__) & 0x4) >> 2u)
#define SET_DEVICE_BUFFER_MANAGER_MODE_ATTENTION_ENABLE(__val__)  (((__val__) << 2u) & 0x4u)
#define     DEVICE_BUFFER_MANAGER_MODE_RESET_RXMBUF_POINTER_SHIFT 5u
#define     DEVICE_BUFFER_MANAGER_MODE_RESET_RXMBUF_POINTER_MASK  0x20u
#define GET_DEVICE_BUFFER_MANAGER_MODE_RESET_RXMBUF_POINTER(__reg__)  (((__reg__) & 0x20) >> 5u)
#define SET_DEVICE_BUFFER_MANAGER_MODE_RESET_RXMBUF_POINTER(__val__)  (((__val__) << 5u) & 0x20u)

/** @brief Register definition for @ref DEVICE_t.BufferManagerMode. */
typedef register_container RegDEVICEBufferManagerMode_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;

    BITFIELD_BEGIN(BCM5719_DEVICE_H_uint32_t, bits)
        /** @brief Padding */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, reserved_0_0, 0, 1)
        /** @brief This bit controls whether the Buffer Manager is active or not. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, Enable, 1, 1)
        /** @brief When this bit is set to 1, an internal attention is generated when an error occurs. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, AttentionEnable, 2, 1)
        /** @brief Padding */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, reserved_4_3, 3, 2)
        /** @brief When this bit is set, it will cause the RXMBUF allocation and deallocation pointer to reset back to the RXMBUF base. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, ResetRXMBUFPointer, 5, 1)
    BITFIELD_END(BCM5719_DEVICE_H_uint32_t, bits)
#ifdef CXX_SIMULATOR
    RegDEVICEBufferManagerMode_t()
    {
        /** @brief constructor for @ref DEVICE_t.BufferManagerMode. */
        bits.Enable.setBaseRegister(&r32);
        bits.AttentionEnable.setBaseRegister(&r32);
        bits.ResetRXMBUFPointer.setBaseRegister(&r32);
    }
    RegDEVICEBufferManagerMode_t& operator=(const RegDEVICEBufferManagerMode_t& other)
    {
        r32 = other.r32;
        return *this;
    }
#endif /* CXX_SIMULATOR */
} RegDEVICEBufferManagerMode_t;

#define REG_DEVICE_LSO_NONLSO_BD_READ_DMA_CORRUPTION_ENABLE_CONTROL ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0004910) /*  */
#define     DEVICE_LSO_NONLSO_BD_READ_DMA_CORRUPTION_ENABLE_CONTROL_PCI_REQUEST_BURST_LENGTH_FOR_BD_RDMA_ENGINE_SHIFT 16u
#define     DEVICE_LSO_NONLSO_BD_READ_DMA_CORRUPTION_ENABLE_CONTROL_PCI_REQUEST_BURST_LENGTH_FOR_BD_RDMA_ENGINE_MASK  0x30000u
#define GET_DEVICE_LSO_NONLSO_BD_READ_DMA_CORRUPTION_ENABLE_CONTROL_PCI_REQUEST_BURST_LENGTH_FOR_BD_RDMA_ENGINE(__reg__)  (((__reg__) & 0x30000) >> 16u)
#define SET_DEVICE_LSO_NONLSO_BD_READ_DMA_CORRUPTION_ENABLE_CONTROL_PCI_REQUEST_BURST_LENGTH_FOR_BD_RDMA_ENGINE(__val__)  (((__val__) << 16u) & 0x30000u)
#define     DEVICE_LSO_NONLSO_BD_READ_DMA_CORRUPTION_ENABLE_CONTROL_PCI_REQUEST_BURST_LENGTH_FOR_BD_RDMA_ENGINE_128B 0x0u
#define     DEVICE_LSO_NONLSO_BD_READ_DMA_CORRUPTION_ENABLE_CONTROL_PCI_REQUEST_BURST_LENGTH_FOR_BD_RDMA_ENGINE_256B 0x1u
#define     DEVICE_LSO_NONLSO_BD_READ_DMA_CORRUPTION_ENABLE_CONTROL_PCI_REQUEST_BURST_LENGTH_FOR_BD_RDMA_ENGINE_512B 0x2u
#define     DEVICE_LSO_NONLSO_BD_READ_DMA_CORRUPTION_ENABLE_CONTROL_PCI_REQUEST_BURST_LENGTH_FOR_BD_RDMA_ENGINE_4K 0x3u

#define     DEVICE_LSO_NONLSO_BD_READ_DMA_CORRUPTION_ENABLE_CONTROL_PCI_REQUEST_BURST_LENGTH_FOR_NONLSO_RDMA_ENGINE_SHIFT 18u
#define     DEVICE_LSO_NONLSO_BD_READ_DMA_CORRUPTION_ENABLE_CONTROL_PCI_REQUEST_BURST_LENGTH_FOR_NONLSO_RDMA_ENGINE_MASK  0xc0000u
#define GET_DEVICE_LSO_NONLSO_BD_READ_DMA_CORRUPTION_ENABLE_CONTROL_PCI_REQUEST_BURST_LENGTH_FOR_NONLSO_RDMA_ENGINE(__reg__)  (((__reg__) & 0xc0000) >> 18u)
#define SET_DEVICE_LSO_NONLSO_BD_READ_DMA_CORRUPTION_ENABLE_CONTROL_PCI_REQUEST_BURST_LENGTH_FOR_NONLSO_RDMA_ENGINE(__val__)  (((__val__) << 18u) & 0xc0000u)
#define     DEVICE_LSO_NONLSO_BD_READ_DMA_CORRUPTION_ENABLE_CONTROL_PCI_REQUEST_BURST_LENGTH_FOR_NONLSO_RDMA_ENGINE_128B 0x0u
#define     DEVICE_LSO_NONLSO_BD_READ_DMA_CORRUPTION_ENABLE_CONTROL_PCI_REQUEST_BURST_LENGTH_FOR_NONLSO_RDMA_ENGINE_256B 0x1u
#define     DEVICE_LSO_NONLSO_BD_READ_DMA_CORRUPTION_ENABLE_CONTROL_PCI_REQUEST_BURST_LENGTH_FOR_NONLSO_RDMA_ENGINE_512B 0x2u
#define     DEVICE_LSO_NONLSO_BD_READ_DMA_CORRUPTION_ENABLE_CONTROL_PCI_REQUEST_BURST_LENGTH_FOR_NONLSO_RDMA_ENGINE_4K 0x3u


/** @brief Register definition for @ref DEVICE_t.LsoNonlsoBdReadDmaCorruptionEnableControl. */
typedef register_container RegDEVICELsoNonlsoBdReadDmaCorruptionEnableControl_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;

    BITFIELD_BEGIN(BCM5719_DEVICE_H_uint32_t, bits)
        /** @brief Padding */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, reserved_15_0, 0, 16)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, PCIRequestBurstLengthforBDRDMAEngine, 16, 2)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, PCIRequestBurstLengthforNonLSORDMAEngine, 18, 2)
    BITFIELD_END(BCM5719_DEVICE_H_uint32_t, bits)
#ifdef CXX_SIMULATOR
    RegDEVICELsoNonlsoBdReadDmaCorruptionEnableControl_t()
    {
        /** @brief constructor for @ref DEVICE_t.LsoNonlsoBdReadDmaCorruptionEnableControl. */
        bits.PCIRequestBurstLengthforBDRDMAEngine.setBaseRegister(&r32);
        bits.PCIRequestBurstLengthforNonLSORDMAEngine.setBaseRegister(&r32);
    }
    RegDEVICELsoNonlsoBdReadDmaCorruptionEnableControl_t& operator=(const RegDEVICELsoNonlsoBdReadDmaCorruptionEnableControl_t& other)
    {
        r32 = other.r32;
        return *this;
    }
#endif /* CXX_SIMULATOR */
} RegDEVICELsoNonlsoBdReadDmaCorruptionEnableControl_t;

#define REG_DEVICE_RX_RISC_MODE ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0005000) /*  */
#define     DEVICE_RX_RISC_MODE_RESET_SHIFT 0u
#define     DEVICE_RX_RISC_MODE_RESET_MASK  0x1u
#define GET_DEVICE_RX_RISC_MODE_RESET(__reg__)  (((__reg__) & 0x1) >> 0u)
#define SET_DEVICE_RX_RISC_MODE_RESET(__val__)  (((__val__) << 0u) & 0x1u)
#define     DEVICE_RX_RISC_MODE_SINGLE_STEP_SHIFT 1u
#define     DEVICE_RX_RISC_MODE_SINGLE_STEP_MASK  0x2u
#define GET_DEVICE_RX_RISC_MODE_SINGLE_STEP(__reg__)  (((__reg__) & 0x2) >> 1u)
#define SET_DEVICE_RX_RISC_MODE_SINGLE_STEP(__val__)  (((__val__) << 1u) & 0x2u)
#define     DEVICE_RX_RISC_MODE_PAGE_0_DATA_HALT_SHIFT 2u
#define     DEVICE_RX_RISC_MODE_PAGE_0_DATA_HALT_MASK  0x4u
#define GET_DEVICE_RX_RISC_MODE_PAGE_0_DATA_HALT(__reg__)  (((__reg__) & 0x4) >> 2u)
#define SET_DEVICE_RX_RISC_MODE_PAGE_0_DATA_HALT(__val__)  (((__val__) << 2u) & 0x4u)
#define     DEVICE_RX_RISC_MODE_PAGE_0_INSTR_HALT_SHIFT 3u
#define     DEVICE_RX_RISC_MODE_PAGE_0_INSTR_HALT_MASK  0x8u
#define GET_DEVICE_RX_RISC_MODE_PAGE_0_INSTR_HALT(__reg__)  (((__reg__) & 0x8) >> 3u)
#define SET_DEVICE_RX_RISC_MODE_PAGE_0_INSTR_HALT(__val__)  (((__val__) << 3u) & 0x8u)
#define     DEVICE_RX_RISC_MODE_ENABLE_DATA_CACHE_SHIFT 5u
#define     DEVICE_RX_RISC_MODE_ENABLE_DATA_CACHE_MASK  0x20u
#define GET_DEVICE_RX_RISC_MODE_ENABLE_DATA_CACHE(__reg__)  (((__reg__) & 0x20) >> 5u)
#define SET_DEVICE_RX_RISC_MODE_ENABLE_DATA_CACHE(__val__)  (((__val__) << 5u) & 0x20u)
#define     DEVICE_RX_RISC_MODE_ROM_FAIL_SHIFT 6u
#define     DEVICE_RX_RISC_MODE_ROM_FAIL_MASK  0x40u
#define GET_DEVICE_RX_RISC_MODE_ROM_FAIL(__reg__)  (((__reg__) & 0x40) >> 6u)
#define SET_DEVICE_RX_RISC_MODE_ROM_FAIL(__val__)  (((__val__) << 6u) & 0x40u)
#define     DEVICE_RX_RISC_MODE_ENABLE_WATCHDOG_SHIFT 7u
#define     DEVICE_RX_RISC_MODE_ENABLE_WATCHDOG_MASK  0x80u
#define GET_DEVICE_RX_RISC_MODE_ENABLE_WATCHDOG(__reg__)  (((__reg__) & 0x80) >> 7u)
#define SET_DEVICE_RX_RISC_MODE_ENABLE_WATCHDOG(__val__)  (((__val__) << 7u) & 0x80u)
#define     DEVICE_RX_RISC_MODE_ENABLE_INSTRUCTION_CACHE_SHIFT 8u
#define     DEVICE_RX_RISC_MODE_ENABLE_INSTRUCTION_CACHE_MASK  0x100u
#define GET_DEVICE_RX_RISC_MODE_ENABLE_INSTRUCTION_CACHE(__reg__)  (((__reg__) & 0x100) >> 8u)
#define SET_DEVICE_RX_RISC_MODE_ENABLE_INSTRUCTION_CACHE(__val__)  (((__val__) << 8u) & 0x100u)
#define     DEVICE_RX_RISC_MODE_FLUSH_INSTRUCTION_CACHE_SHIFT 9u
#define     DEVICE_RX_RISC_MODE_FLUSH_INSTRUCTION_CACHE_MASK  0x200u
#define GET_DEVICE_RX_RISC_MODE_FLUSH_INSTRUCTION_CACHE(__reg__)  (((__reg__) & 0x200) >> 9u)
#define SET_DEVICE_RX_RISC_MODE_FLUSH_INSTRUCTION_CACHE(__val__)  (((__val__) << 9u) & 0x200u)
#define     DEVICE_RX_RISC_MODE_HALT_SHIFT 10u
#define     DEVICE_RX_RISC_MODE_HALT_MASK  0x400u
#define GET_DEVICE_RX_RISC_MODE_HALT(__reg__)  (((__reg__) & 0x400) >> 10u)
#define SET_DEVICE_RX_RISC_MODE_HALT(__val__)  (((__val__) << 10u) & 0x400u)
#define     DEVICE_RX_RISC_MODE_INVALID_DATA_ACCESS_HALT_SHIFT 11u
#define     DEVICE_RX_RISC_MODE_INVALID_DATA_ACCESS_HALT_MASK  0x800u
#define GET_DEVICE_RX_RISC_MODE_INVALID_DATA_ACCESS_HALT(__reg__)  (((__reg__) & 0x800) >> 11u)
#define SET_DEVICE_RX_RISC_MODE_INVALID_DATA_ACCESS_HALT(__val__)  (((__val__) << 11u) & 0x800u)
#define     DEVICE_RX_RISC_MODE_INVALID_INSTRUCTION_ACCESS_HALT_SHIFT 12u
#define     DEVICE_RX_RISC_MODE_INVALID_INSTRUCTION_ACCESS_HALT_MASK  0x1000u
#define GET_DEVICE_RX_RISC_MODE_INVALID_INSTRUCTION_ACCESS_HALT(__reg__)  (((__reg__) & 0x1000) >> 12u)
#define SET_DEVICE_RX_RISC_MODE_INVALID_INSTRUCTION_ACCESS_HALT(__val__)  (((__val__) << 12u) & 0x1000u)
#define     DEVICE_RX_RISC_MODE_ENABLE_MEMORY_ADDRESS_TRAP_HALT_SHIFT 13u
#define     DEVICE_RX_RISC_MODE_ENABLE_MEMORY_ADDRESS_TRAP_HALT_MASK  0x2000u
#define GET_DEVICE_RX_RISC_MODE_ENABLE_MEMORY_ADDRESS_TRAP_HALT(__reg__)  (((__reg__) & 0x2000) >> 13u)
#define SET_DEVICE_RX_RISC_MODE_ENABLE_MEMORY_ADDRESS_TRAP_HALT(__val__)  (((__val__) << 13u) & 0x2000u)
#define     DEVICE_RX_RISC_MODE_ENABLE_REGISTER_ADDRESS_TRAP_HALT_SHIFT 14u
#define     DEVICE_RX_RISC_MODE_ENABLE_REGISTER_ADDRESS_TRAP_HALT_MASK  0x4000u
#define GET_DEVICE_RX_RISC_MODE_ENABLE_REGISTER_ADDRESS_TRAP_HALT(__reg__)  (((__reg__) & 0x4000) >> 14u)
#define SET_DEVICE_RX_RISC_MODE_ENABLE_REGISTER_ADDRESS_TRAP_HALT(__val__)  (((__val__) << 14u) & 0x4000u)

/** @brief Register definition for @ref DEVICE_t.RxRiscMode. */
typedef register_container RegDEVICERxRiscMode_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;

    BITFIELD_BEGIN(BCM5719_DEVICE_H_uint32_t, bits)
        /** @brief Self-clearing bit which resets only the RX RISC. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, Reset, 0, 1)
        /** @brief Advances the RX RISC's PC for one cycle. If halting condition still exists, the RX RISC will again halt; otherwise, it will resume normal operation. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, SingleStep, 1, 1)
        /** @brief When set, data references to the first 256 bytes of SRAM force the RX RISC to halt and cause bit 3 in the RX RISC state register to be latched. Cleared on reset and Watchdog interrupt. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, Page0DataHalt, 2, 1)
        /** @brief When set, instruction references to the first 256 bytes of SRAM force the RX RISC to halt and cause bit 4 in the RX RISC state register to be latched. Cleared on reset and Watchdog interrupt. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, Page0InstrHalt, 3, 1)
        /** @brief Padding */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, reserved_4_4, 4, 1)
        /** @brief Enables the data cache. Cleared on reset. Note: Firmware developers should take care to clear this bit before polling internal SRAM memory locations, because the RX RISC processor uses a two-element LRU caching algorithm, which is not affected by writes from the PCI interface. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, EnableDataCache, 5, 1)
        /** @brief Asserted on reset. Cleared by ROM code after it successfully loads code from NVRAM. Afterwards, this bit can be used by software for any purpose. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, ROMFail, 6, 1)
        /** @brief Enables watchdog interrupt state machine. Used in conjunction with Watchdog Clear register, Watchdog Saved PC register and Watchdog Vector register. Cleared on reset and Watchdog interrupt. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, EnableWatchdog, 7, 1)
        /** @brief Enables prefetch logic within the instruction cache. When disabled only a single cache line is read on a cache miss. Cleared on reset. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, EnableInstructionCache, 8, 1)
        /** @brief Self-clearing bit which forces the instruction cache to flush. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, FlushInstructionCache, 9, 1)
        /** @brief Set by TX RISC or the host to halt the RX RISC. Cleared on reset and Watchdog interrupt. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, Halt, 10, 1)
        /** @brief When set, the condition that causes RX RISC state bit 5 to be set, also halts the RX RISC. Set by reset. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, InvalidDataAccessHalt, 11, 1)
        /** @brief When set, the condition that causes RX RISC state bit 6 to be set, also halts the RX RISC. Set by reset. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, InvalidInstructionAccessHalt, 12, 1)
        /** @brief When set, if the MA raises the trap signal to this processor, it will halt. CLeared on reset and Watchdog interrupt. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, EnableMemoryAddressTrapHalt, 13, 1)
        /** @brief When set, if the GRC raises the trap signal to this processor, it will halt. CLeared on reset and Watchdog interrupt. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, EnableRegisterAddressTrapHalt, 14, 1)
    BITFIELD_END(BCM5719_DEVICE_H_uint32_t, bits)
#ifdef CXX_SIMULATOR
    RegDEVICERxRiscMode_t()
    {
        /** @brief constructor for @ref DEVICE_t.RxRiscMode. */
        bits.Reset.setBaseRegister(&r32);
        bits.SingleStep.setBaseRegister(&r32);
        bits.Page0DataHalt.setBaseRegister(&r32);
        bits.Page0InstrHalt.setBaseRegister(&r32);
        bits.EnableDataCache.setBaseRegister(&r32);
        bits.ROMFail.setBaseRegister(&r32);
        bits.EnableWatchdog.setBaseRegister(&r32);
        bits.EnableInstructionCache.setBaseRegister(&r32);
        bits.FlushInstructionCache.setBaseRegister(&r32);
        bits.Halt.setBaseRegister(&r32);
        bits.InvalidDataAccessHalt.setBaseRegister(&r32);
        bits.InvalidInstructionAccessHalt.setBaseRegister(&r32);
        bits.EnableMemoryAddressTrapHalt.setBaseRegister(&r32);
        bits.EnableRegisterAddressTrapHalt.setBaseRegister(&r32);
    }
    RegDEVICERxRiscMode_t& operator=(const RegDEVICERxRiscMode_t& other)
    {
        r32 = other.r32;
        return *this;
    }
#endif /* CXX_SIMULATOR */
} RegDEVICERxRiscMode_t;

#define REG_DEVICE_RX_RISC_STATUS ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0005004) /*  */
#define     DEVICE_RX_RISC_STATUS_HARDWARE_BREAKPOINT_SHIFT 0u
#define     DEVICE_RX_RISC_STATUS_HARDWARE_BREAKPOINT_MASK  0x1u
#define GET_DEVICE_RX_RISC_STATUS_HARDWARE_BREAKPOINT(__reg__)  (((__reg__) & 0x1) >> 0u)
#define SET_DEVICE_RX_RISC_STATUS_HARDWARE_BREAKPOINT(__val__)  (((__val__) << 0u) & 0x1u)
#define     DEVICE_RX_RISC_STATUS_HALT_INSTRUCTION_EXECUTED_SHIFT 1u
#define     DEVICE_RX_RISC_STATUS_HALT_INSTRUCTION_EXECUTED_MASK  0x2u
#define GET_DEVICE_RX_RISC_STATUS_HALT_INSTRUCTION_EXECUTED(__reg__)  (((__reg__) & 0x2) >> 1u)
#define SET_DEVICE_RX_RISC_STATUS_HALT_INSTRUCTION_EXECUTED(__val__)  (((__val__) << 1u) & 0x2u)
#define     DEVICE_RX_RISC_STATUS_INVALID_INSTRUCTION_SHIFT 2u
#define     DEVICE_RX_RISC_STATUS_INVALID_INSTRUCTION_MASK  0x4u
#define GET_DEVICE_RX_RISC_STATUS_INVALID_INSTRUCTION(__reg__)  (((__reg__) & 0x4) >> 2u)
#define SET_DEVICE_RX_RISC_STATUS_INVALID_INSTRUCTION(__val__)  (((__val__) << 2u) & 0x4u)
#define     DEVICE_RX_RISC_STATUS_PAGE_0_DATA_REFEENCE_SHIFT 3u
#define     DEVICE_RX_RISC_STATUS_PAGE_0_DATA_REFEENCE_MASK  0x8u
#define GET_DEVICE_RX_RISC_STATUS_PAGE_0_DATA_REFEENCE(__reg__)  (((__reg__) & 0x8) >> 3u)
#define SET_DEVICE_RX_RISC_STATUS_PAGE_0_DATA_REFEENCE(__val__)  (((__val__) << 3u) & 0x8u)
#define     DEVICE_RX_RISC_STATUS_PAGE_0_INSTRUCTION_REFERENCE_SHIFT 4u
#define     DEVICE_RX_RISC_STATUS_PAGE_0_INSTRUCTION_REFERENCE_MASK  0x10u
#define GET_DEVICE_RX_RISC_STATUS_PAGE_0_INSTRUCTION_REFERENCE(__reg__)  (((__reg__) & 0x10) >> 4u)
#define SET_DEVICE_RX_RISC_STATUS_PAGE_0_INSTRUCTION_REFERENCE(__val__)  (((__val__) << 4u) & 0x10u)
#define     DEVICE_RX_RISC_STATUS_INVALID_DATA_ACCESS_SHIFT 5u
#define     DEVICE_RX_RISC_STATUS_INVALID_DATA_ACCESS_MASK  0x20u
#define GET_DEVICE_RX_RISC_STATUS_INVALID_DATA_ACCESS(__reg__)  (((__reg__) & 0x20) >> 5u)
#define SET_DEVICE_RX_RISC_STATUS_INVALID_DATA_ACCESS(__val__)  (((__val__) << 5u) & 0x20u)
#define     DEVICE_RX_RISC_STATUS_INVALID_INSTRUCTION_FETCH_SHIFT 6u
#define     DEVICE_RX_RISC_STATUS_INVALID_INSTRUCTION_FETCH_MASK  0x40u
#define GET_DEVICE_RX_RISC_STATUS_INVALID_INSTRUCTION_FETCH(__reg__)  (((__reg__) & 0x40) >> 6u)
#define SET_DEVICE_RX_RISC_STATUS_INVALID_INSTRUCTION_FETCH(__val__)  (((__val__) << 6u) & 0x40u)
#define     DEVICE_RX_RISC_STATUS_BAD_MEMORY_ALIGNMENT_SHIFT 7u
#define     DEVICE_RX_RISC_STATUS_BAD_MEMORY_ALIGNMENT_MASK  0x80u
#define GET_DEVICE_RX_RISC_STATUS_BAD_MEMORY_ALIGNMENT(__reg__)  (((__reg__) & 0x80) >> 7u)
#define SET_DEVICE_RX_RISC_STATUS_BAD_MEMORY_ALIGNMENT(__val__)  (((__val__) << 7u) & 0x80u)
#define     DEVICE_RX_RISC_STATUS_MEMORY_ADDRESS_TRAP_SHIFT 8u
#define     DEVICE_RX_RISC_STATUS_MEMORY_ADDRESS_TRAP_MASK  0x100u
#define GET_DEVICE_RX_RISC_STATUS_MEMORY_ADDRESS_TRAP(__reg__)  (((__reg__) & 0x100) >> 8u)
#define SET_DEVICE_RX_RISC_STATUS_MEMORY_ADDRESS_TRAP(__val__)  (((__val__) << 8u) & 0x100u)
#define     DEVICE_RX_RISC_STATUS_REGISTER_ADDRESS_TRAP_SHIFT 9u
#define     DEVICE_RX_RISC_STATUS_REGISTER_ADDRESS_TRAP_MASK  0x200u
#define GET_DEVICE_RX_RISC_STATUS_REGISTER_ADDRESS_TRAP(__reg__)  (((__reg__) & 0x200) >> 9u)
#define SET_DEVICE_RX_RISC_STATUS_REGISTER_ADDRESS_TRAP(__val__)  (((__val__) << 9u) & 0x200u)
#define     DEVICE_RX_RISC_STATUS_HALTED_SHIFT 10u
#define     DEVICE_RX_RISC_STATUS_HALTED_MASK  0x400u
#define GET_DEVICE_RX_RISC_STATUS_HALTED(__reg__)  (((__reg__) & 0x400) >> 10u)
#define SET_DEVICE_RX_RISC_STATUS_HALTED(__val__)  (((__val__) << 10u) & 0x400u)
#define     DEVICE_RX_RISC_STATUS_UNKNOWN_SHIFT 11u
#define     DEVICE_RX_RISC_STATUS_UNKNOWN_MASK  0x800u
#define GET_DEVICE_RX_RISC_STATUS_UNKNOWN(__reg__)  (((__reg__) & 0x800) >> 11u)
#define SET_DEVICE_RX_RISC_STATUS_UNKNOWN(__val__)  (((__val__) << 11u) & 0x800u)
#define     DEVICE_RX_RISC_STATUS_DATA_ACCESS_STALL_SHIFT 14u
#define     DEVICE_RX_RISC_STATUS_DATA_ACCESS_STALL_MASK  0x4000u
#define GET_DEVICE_RX_RISC_STATUS_DATA_ACCESS_STALL(__reg__)  (((__reg__) & 0x4000) >> 14u)
#define SET_DEVICE_RX_RISC_STATUS_DATA_ACCESS_STALL(__val__)  (((__val__) << 14u) & 0x4000u)
#define     DEVICE_RX_RISC_STATUS_INSTRUCTION_FETCH_STALL_SHIFT 15u
#define     DEVICE_RX_RISC_STATUS_INSTRUCTION_FETCH_STALL_MASK  0x8000u
#define GET_DEVICE_RX_RISC_STATUS_INSTRUCTION_FETCH_STALL(__reg__)  (((__reg__) & 0x8000) >> 15u)
#define SET_DEVICE_RX_RISC_STATUS_INSTRUCTION_FETCH_STALL(__val__)  (((__val__) << 15u) & 0x8000u)
#define     DEVICE_RX_RISC_STATUS_BLOCKING_READ_SHIFT 31u
#define     DEVICE_RX_RISC_STATUS_BLOCKING_READ_MASK  0x80000000u
#define GET_DEVICE_RX_RISC_STATUS_BLOCKING_READ(__reg__)  (((__reg__) & 0x80000000) >> 31u)
#define SET_DEVICE_RX_RISC_STATUS_BLOCKING_READ(__val__)  (((__val__) << 31u) & 0x80000000u)

/** @brief Register definition for @ref DEVICE_t.RxRiscStatus. */
typedef register_container RegDEVICERxRiscStatus_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;

    BITFIELD_BEGIN(BCM5719_DEVICE_H_uint32_t, bits)
        /** @brief When enabled in mode register, indicates hardware breakpoint has been reached. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, HardwareBreakpoint, 0, 1)
        /** @brief When enabled in mode register, indicates hardware breakpoint has been reached. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, HaltInstructionExecuted, 1, 1)
        /** @brief Invalid instruction fetched. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, InvalidInstruction, 2, 1)
        /** @brief When enabled in mode register, indicates data reference within lower 256 bytes of SRAM. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, Page0DataRefeence, 3, 1)
        /** @brief When enabled in mode register, indicates the address in the PC is within the lower 256 bytes of SRAM. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, Page0InstructionReference, 4, 1)
        /** @brief Data reference to illegal location. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, InvalidDataAccess, 5, 1)
        /** @brief Program Counter (PC) is set to invalid location in processor address space. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, InvalidInstructionFetch, 6, 1)
        /** @brief Load or Store instruction was executed with the least significant two address bits not valid for the width of the operation (e.g., Load word or Load Half-word from an odd byte address). */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, BadMemoryAlignment, 7, 1)
        /** @brief A signal was received from the Memory Arbiter indicating that some BCM5700 block, possibly this processor, accessed a memory location that triggered a software trap. The MA registers are used to configure memory address trapping. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, MemoryAddressTrap, 8, 1)
        /** @brief A signal was received from the Global Resources block indicating that this processor accessed a register location that triggered a software trap. The GRC registers are used to configure register address trapping. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, RegisterAddressTrap, 9, 1)
        /** @brief The RX RISC was explicitly halted via bit 10 in the RX RISC Mode register. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, Halted, 10, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, Unknown, 11, 1)
        /** @brief Padding */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, reserved_13_12, 12, 2)
        /** @brief The processor is currently stalled due to a data access. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, DataAccessStall, 14, 1)
        /** @brief The processor is currently stalled due to an instruction fetch. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, InstructionFetchStall, 15, 1)
        /** @brief Padding */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, reserved_30_16, 16, 15)
        /** @brief A blocking data cache miss occurred, causing the RX RISC to stall while data is fetched from external (to the RX RISC) memory. This is intended as a debugging tool. No state is saved other than the fact that the miss occurred. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, BlockingRead, 31, 1)
    BITFIELD_END(BCM5719_DEVICE_H_uint32_t, bits)
#ifdef CXX_SIMULATOR
    RegDEVICERxRiscStatus_t()
    {
        /** @brief constructor for @ref DEVICE_t.RxRiscStatus. */
        bits.HardwareBreakpoint.setBaseRegister(&r32);
        bits.HaltInstructionExecuted.setBaseRegister(&r32);
        bits.InvalidInstruction.setBaseRegister(&r32);
        bits.Page0DataRefeence.setBaseRegister(&r32);
        bits.Page0InstructionReference.setBaseRegister(&r32);
        bits.InvalidDataAccess.setBaseRegister(&r32);
        bits.InvalidInstructionFetch.setBaseRegister(&r32);
        bits.BadMemoryAlignment.setBaseRegister(&r32);
        bits.MemoryAddressTrap.setBaseRegister(&r32);
        bits.RegisterAddressTrap.setBaseRegister(&r32);
        bits.Halted.setBaseRegister(&r32);
        bits.Unknown.setBaseRegister(&r32);
        bits.DataAccessStall.setBaseRegister(&r32);
        bits.InstructionFetchStall.setBaseRegister(&r32);
        bits.BlockingRead.setBaseRegister(&r32);
    }
    RegDEVICERxRiscStatus_t& operator=(const RegDEVICERxRiscStatus_t& other)
    {
        r32 = other.r32;
        return *this;
    }
#endif /* CXX_SIMULATOR */
} RegDEVICERxRiscStatus_t;

#define REG_DEVICE_RX_RISC_PROGRAM_COUNTER ((volatile BCM5719_DEVICE_H_uint32_t*)0xc000501c) /* The program counter register can be used to read or write the current Program Counter of the each CPU. Reads can occur at any time, however writes can only be performed when the CPU is halted. Writes will also clear any pending instruction in the decode stage of the pipeline. Bits 31-2 are implemented. 1s written to bits 1-0 are ignored. */
/** @brief Register definition for @ref DEVICE_t.RxRiscProgramCounter. */
typedef register_container RegDEVICERxRiscProgramCounter_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICERxRiscProgramCounter_t;

#define REG_DEVICE_RX_RISC_CURRENT_INSTRUCTION ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0005020) /* This undocumented register contains the current word located at the program counter address loaded in  */
/** @brief Register definition for @ref DEVICE_t.RxRiscCurrentInstruction. */
typedef register_container RegDEVICERxRiscCurrentInstruction_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICERxRiscCurrentInstruction_t;

#define REG_DEVICE_RX_RISC_HARDWARE_BREAKPOINT ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0005034) /* This register is used to set a hardware breakpoint based on the RISC's program counter (PC). If the PC equals the value in this register, and the hardware breakpoint is enabled, the RISC is halted and the appropriate stopping condition is indicated in the RISC State Register. To enable the hardware breakpoint, simply write the byte address of the instruction to break on and clear the Disable Hardware Breakpoint bit. */
/** @brief Register definition for @ref DEVICE_t.RxRiscHardwareBreakpoint. */
typedef register_container RegDEVICERxRiscHardwareBreakpoint_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICERxRiscHardwareBreakpoint_t;

#define REG_DEVICE_RX_RISC_REGISTER_0 ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0005200) /* $zero (R0) */
/** @brief Register definition for @ref DEVICE_t.RxRiscRegister0. */
typedef register_container RegDEVICERxRiscRegister0_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICERxRiscRegister0_t;

#define REG_DEVICE_RX_RISC_REGISTER_1 ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0005204) /* $at (R1) */
/** @brief Register definition for @ref DEVICE_t.RxRiscRegister1. */
typedef register_container RegDEVICERxRiscRegister1_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICERxRiscRegister1_t;

#define REG_DEVICE_RX_RISC_REGISTER_2 ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0005208) /* $v0 (R2) */
/** @brief Register definition for @ref DEVICE_t.RxRiscRegister2. */
typedef register_container RegDEVICERxRiscRegister2_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICERxRiscRegister2_t;

#define REG_DEVICE_RX_RISC_REGISTER_3 ((volatile BCM5719_DEVICE_H_uint32_t*)0xc000520c) /* $v1 (R3) */
/** @brief Register definition for @ref DEVICE_t.RxRiscRegister3. */
typedef register_container RegDEVICERxRiscRegister3_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICERxRiscRegister3_t;

#define REG_DEVICE_RX_RISC_REGISTER_4 ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0005210) /* $a0 (R4) */
/** @brief Register definition for @ref DEVICE_t.RxRiscRegister4. */
typedef register_container RegDEVICERxRiscRegister4_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICERxRiscRegister4_t;

#define REG_DEVICE_RX_RISC_REGISTER_5 ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0005214) /* $a1 (R5) */
/** @brief Register definition for @ref DEVICE_t.RxRiscRegister5. */
typedef register_container RegDEVICERxRiscRegister5_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICERxRiscRegister5_t;

#define REG_DEVICE_RX_RISC_REGISTER_6 ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0005218) /* $a2 (R6) */
/** @brief Register definition for @ref DEVICE_t.RxRiscRegister6. */
typedef register_container RegDEVICERxRiscRegister6_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICERxRiscRegister6_t;

#define REG_DEVICE_RX_RISC_REGISTER_7 ((volatile BCM5719_DEVICE_H_uint32_t*)0xc000521c) /* $a3 (R7) */
/** @brief Register definition for @ref DEVICE_t.RxRiscRegister7. */
typedef register_container RegDEVICERxRiscRegister7_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICERxRiscRegister7_t;

#define REG_DEVICE_RX_RISC_REGISTER_8 ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0005220) /* $t0 (R8) */
/** @brief Register definition for @ref DEVICE_t.RxRiscRegister8. */
typedef register_container RegDEVICERxRiscRegister8_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICERxRiscRegister8_t;

#define REG_DEVICE_RX_RISC_REGISTER_9 ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0005224) /* $t1 (R9) */
/** @brief Register definition for @ref DEVICE_t.RxRiscRegister9. */
typedef register_container RegDEVICERxRiscRegister9_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICERxRiscRegister9_t;

#define REG_DEVICE_RX_RISC_REGISTER_10 ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0005228) /* $t2 (R10) */
/** @brief Register definition for @ref DEVICE_t.RxRiscRegister10. */
typedef register_container RegDEVICERxRiscRegister10_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICERxRiscRegister10_t;

#define REG_DEVICE_RX_RISC_REGISTER_11 ((volatile BCM5719_DEVICE_H_uint32_t*)0xc000522c) /* $t3 (R11) */
/** @brief Register definition for @ref DEVICE_t.RxRiscRegister11. */
typedef register_container RegDEVICERxRiscRegister11_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICERxRiscRegister11_t;

#define REG_DEVICE_RX_RISC_REGISTER_12 ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0005230) /* $t4 (R12) */
/** @brief Register definition for @ref DEVICE_t.RxRiscRegister12. */
typedef register_container RegDEVICERxRiscRegister12_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICERxRiscRegister12_t;

#define REG_DEVICE_RX_RISC_REGISTER_13 ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0005234) /* $t5 (R13) */
/** @brief Register definition for @ref DEVICE_t.RxRiscRegister13. */
typedef register_container RegDEVICERxRiscRegister13_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICERxRiscRegister13_t;

#define REG_DEVICE_RX_RISC_REGISTER_14 ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0005238) /* $t6 (R14) */
/** @brief Register definition for @ref DEVICE_t.RxRiscRegister14. */
typedef register_container RegDEVICERxRiscRegister14_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICERxRiscRegister14_t;

#define REG_DEVICE_RX_RISC_REGISTER_15 ((volatile BCM5719_DEVICE_H_uint32_t*)0xc000523c) /* $t7 (R15) */
/** @brief Register definition for @ref DEVICE_t.RxRiscRegister15. */
typedef register_container RegDEVICERxRiscRegister15_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICERxRiscRegister15_t;

#define REG_DEVICE_RX_RISC_REGISTER_16 ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0005240) /* $s0 (R16) */
/** @brief Register definition for @ref DEVICE_t.RxRiscRegister16. */
typedef register_container RegDEVICERxRiscRegister16_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICERxRiscRegister16_t;

#define REG_DEVICE_RX_RISC_REGISTER_17 ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0005244) /* $s1 (R17) */
/** @brief Register definition for @ref DEVICE_t.RxRiscRegister17. */
typedef register_container RegDEVICERxRiscRegister17_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICERxRiscRegister17_t;

#define REG_DEVICE_RX_RISC_REGISTER_18 ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0005248) /* $s2 (R18) */
/** @brief Register definition for @ref DEVICE_t.RxRiscRegister18. */
typedef register_container RegDEVICERxRiscRegister18_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICERxRiscRegister18_t;

#define REG_DEVICE_RX_RISC_REGISTER_19 ((volatile BCM5719_DEVICE_H_uint32_t*)0xc000524c) /* $s3 (R19) */
/** @brief Register definition for @ref DEVICE_t.RxRiscRegister19. */
typedef register_container RegDEVICERxRiscRegister19_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICERxRiscRegister19_t;

#define REG_DEVICE_RX_RISC_REGISTER_20 ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0005250) /* $s4 (R20) */
/** @brief Register definition for @ref DEVICE_t.RxRiscRegister20. */
typedef register_container RegDEVICERxRiscRegister20_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICERxRiscRegister20_t;

#define REG_DEVICE_RX_RISC_REGISTER_21 ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0005254) /* $s5 (R21) */
/** @brief Register definition for @ref DEVICE_t.RxRiscRegister21. */
typedef register_container RegDEVICERxRiscRegister21_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICERxRiscRegister21_t;

#define REG_DEVICE_RX_RISC_REGISTER_22 ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0005258) /* $s6 (R22) */
/** @brief Register definition for @ref DEVICE_t.RxRiscRegister22. */
typedef register_container RegDEVICERxRiscRegister22_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICERxRiscRegister22_t;

#define REG_DEVICE_RX_RISC_REGISTER_23 ((volatile BCM5719_DEVICE_H_uint32_t*)0xc000525c) /* $s7 (R23) */
/** @brief Register definition for @ref DEVICE_t.RxRiscRegister23. */
typedef register_container RegDEVICERxRiscRegister23_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICERxRiscRegister23_t;

#define REG_DEVICE_RX_RISC_REGISTER_24 ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0005260) /* $t8 (R24) */
/** @brief Register definition for @ref DEVICE_t.RxRiscRegister24. */
typedef register_container RegDEVICERxRiscRegister24_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICERxRiscRegister24_t;

#define REG_DEVICE_RX_RISC_REGISTER_25 ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0005264) /* $t9 (R25) */
/** @brief Register definition for @ref DEVICE_t.RxRiscRegister25. */
typedef register_container RegDEVICERxRiscRegister25_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICERxRiscRegister25_t;

#define REG_DEVICE_RX_RISC_REGISTER_26 ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0005268) /* $k0 (R26) */
/** @brief Register definition for @ref DEVICE_t.RxRiscRegister26. */
typedef register_container RegDEVICERxRiscRegister26_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICERxRiscRegister26_t;

#define REG_DEVICE_RX_RISC_REGISTER_27 ((volatile BCM5719_DEVICE_H_uint32_t*)0xc000526c) /* $k1 (R27) */
/** @brief Register definition for @ref DEVICE_t.RxRiscRegister27. */
typedef register_container RegDEVICERxRiscRegister27_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICERxRiscRegister27_t;

#define REG_DEVICE_RX_RISC_REGISTER_28 ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0005270) /* $gp (R28) */
/** @brief Register definition for @ref DEVICE_t.RxRiscRegister28. */
typedef register_container RegDEVICERxRiscRegister28_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICERxRiscRegister28_t;

#define REG_DEVICE_RX_RISC_REGISTER_29 ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0005274) /* $sp (R29) */
/** @brief Register definition for @ref DEVICE_t.RxRiscRegister29. */
typedef register_container RegDEVICERxRiscRegister29_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICERxRiscRegister29_t;

#define REG_DEVICE_RX_RISC_REGISTER_30 ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0005278) /* $fp (R30) */
/** @brief Register definition for @ref DEVICE_t.RxRiscRegister30. */
typedef register_container RegDEVICERxRiscRegister30_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICERxRiscRegister30_t;

#define REG_DEVICE_RX_RISC_REGISTER_31 ((volatile BCM5719_DEVICE_H_uint32_t*)0xc000527c) /* $ra (R31) */
/** @brief Register definition for @ref DEVICE_t.RxRiscRegister31. */
typedef register_container RegDEVICERxRiscRegister31_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICERxRiscRegister31_t;

#define REG_DEVICE_6408 ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0006408) /*  */
/** @brief Register definition for @ref DEVICE_t.6408. */
typedef register_container RegDEVICE6408_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICE6408_t;

#define REG_DEVICE_PCI_POWER_CONSUMPTION_INFO ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0006410) /* This undocumented register is used to set PCIe Power Consumption information as reported in configuration space. It is loaded from NVM configuration data. */
/** @brief Register definition for @ref DEVICE_t.PciPowerConsumptionInfo. */
typedef register_container RegDEVICEPciPowerConsumptionInfo_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICEPciPowerConsumptionInfo_t;

#define REG_DEVICE_PCI_POWER_DISSIPATED_INFO ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0006414) /* This undocumented register is used to set PCIe Power Dissipated information as reported in configuration space. It is loaded from NVM configuration data. */
/** @brief Register definition for @ref DEVICE_t.PciPowerDissipatedInfo. */
typedef register_container RegDEVICEPciPowerDissipatedInfo_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICEPciPowerDissipatedInfo_t;

#define REG_DEVICE_PCI_VPD_REQUEST ((volatile BCM5719_DEVICE_H_uint32_t*)0xc000642c) /* This undocumented register appears to be used to implement the PCI VPD capability. It is set to the VPD offset which was requested by the host by writing to the VPD register. */
#define     DEVICE_PCI_VPD_REQUEST_REQUESTED_VPD_OFFSET_SHIFT 16u
#define     DEVICE_PCI_VPD_REQUEST_REQUESTED_VPD_OFFSET_MASK  0x7fff0000u
#define GET_DEVICE_PCI_VPD_REQUEST_REQUESTED_VPD_OFFSET(__reg__)  (((__reg__) & 0x7fff0000) >> 16u)
#define SET_DEVICE_PCI_VPD_REQUEST_REQUESTED_VPD_OFFSET(__val__)  (((__val__) << 16u) & 0x7fff0000u)

/** @brief Register definition for @ref DEVICE_t.PciVpdRequest. */
typedef register_container RegDEVICEPciVpdRequest_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;

    BITFIELD_BEGIN(BCM5719_DEVICE_H_uint32_t, bits)
        /** @brief Padding */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, reserved_15_0, 0, 16)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, RequestedVPDOffset, 16, 15)
    BITFIELD_END(BCM5719_DEVICE_H_uint32_t, bits)
#ifdef CXX_SIMULATOR
    RegDEVICEPciVpdRequest_t()
    {
        /** @brief constructor for @ref DEVICE_t.PciVpdRequest. */
        bits.RequestedVPDOffset.setBaseRegister(&r32);
    }
    RegDEVICEPciVpdRequest_t& operator=(const RegDEVICEPciVpdRequest_t& other)
    {
        r32 = other.r32;
        return *this;
    }
#endif /* CXX_SIMULATOR */
} RegDEVICEPciVpdRequest_t;

#define REG_DEVICE_PCI_VPD_RESPONSE ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0006430) /* This undocumented register appears to be used to implement the PCI VPD capability. Bootcode writes the 32 bits of data loaded from the word requested by  */
/** @brief Register definition for @ref DEVICE_t.PciVpdResponse. */
typedef register_container RegDEVICEPciVpdResponse_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICEPciVpdResponse_t;

#define REG_DEVICE_PCI_VENDOR_DEVICE_ID ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0006434) /* This is the undocumented register used to set the PCI Vendor/Device ID, which is configurable from NVM. */
#define     DEVICE_PCI_VENDOR_DEVICE_ID_DEVICE_ID_SHIFT 0u
#define     DEVICE_PCI_VENDOR_DEVICE_ID_DEVICE_ID_MASK  0xffffu
#define GET_DEVICE_PCI_VENDOR_DEVICE_ID_DEVICE_ID(__reg__)  (((__reg__) & 0xffff) >> 0u)
#define SET_DEVICE_PCI_VENDOR_DEVICE_ID_DEVICE_ID(__val__)  (((__val__) << 0u) & 0xffffu)
#define     DEVICE_PCI_VENDOR_DEVICE_ID_VENDOR_ID_SHIFT 16u
#define     DEVICE_PCI_VENDOR_DEVICE_ID_VENDOR_ID_MASK  0xffff0000u
#define GET_DEVICE_PCI_VENDOR_DEVICE_ID_VENDOR_ID(__reg__)  (((__reg__) & 0xffff0000) >> 16u)
#define SET_DEVICE_PCI_VENDOR_DEVICE_ID_VENDOR_ID(__val__)  (((__val__) << 16u) & 0xffff0000u)

/** @brief Register definition for @ref DEVICE_t.PciVendorDeviceId. */
typedef register_container RegDEVICEPciVendorDeviceId_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;

    BITFIELD_BEGIN(BCM5719_DEVICE_H_uint32_t, bits)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, DeviceID, 0, 16)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, VendorID, 16, 16)
    BITFIELD_END(BCM5719_DEVICE_H_uint32_t, bits)
#ifdef CXX_SIMULATOR
    RegDEVICEPciVendorDeviceId_t()
    {
        /** @brief constructor for @ref DEVICE_t.PciVendorDeviceId. */
        bits.DeviceID.setBaseRegister(&r32);
        bits.VendorID.setBaseRegister(&r32);
    }
    RegDEVICEPciVendorDeviceId_t& operator=(const RegDEVICEPciVendorDeviceId_t& other)
    {
        r32 = other.r32;
        return *this;
    }
#endif /* CXX_SIMULATOR */
} RegDEVICEPciVendorDeviceId_t;

#define REG_DEVICE_PCI_SUBSYSTEM_ID ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0006438) /* This is the undocumented register used to set the PCI Subsystem/Subsystem Vendor ID, which is configurable from NVM. */
#define     DEVICE_PCI_SUBSYSTEM_ID_SUBSYSTEM_VENDOR_ID_SHIFT 0u
#define     DEVICE_PCI_SUBSYSTEM_ID_SUBSYSTEM_VENDOR_ID_MASK  0xffffu
#define GET_DEVICE_PCI_SUBSYSTEM_ID_SUBSYSTEM_VENDOR_ID(__reg__)  (((__reg__) & 0xffff) >> 0u)
#define SET_DEVICE_PCI_SUBSYSTEM_ID_SUBSYSTEM_VENDOR_ID(__val__)  (((__val__) << 0u) & 0xffffu)
#define     DEVICE_PCI_SUBSYSTEM_ID_SUBSYSTEM_ID_SHIFT 16u
#define     DEVICE_PCI_SUBSYSTEM_ID_SUBSYSTEM_ID_MASK  0xffff0000u
#define GET_DEVICE_PCI_SUBSYSTEM_ID_SUBSYSTEM_ID(__reg__)  (((__reg__) & 0xffff0000) >> 16u)
#define SET_DEVICE_PCI_SUBSYSTEM_ID_SUBSYSTEM_ID(__val__)  (((__val__) << 16u) & 0xffff0000u)

/** @brief Register definition for @ref DEVICE_t.PciSubsystemId. */
typedef register_container RegDEVICEPciSubsystemId_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;

    BITFIELD_BEGIN(BCM5719_DEVICE_H_uint32_t, bits)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, SubsystemVendorID, 0, 16)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, SubsystemID, 16, 16)
    BITFIELD_END(BCM5719_DEVICE_H_uint32_t, bits)
#ifdef CXX_SIMULATOR
    RegDEVICEPciSubsystemId_t()
    {
        /** @brief constructor for @ref DEVICE_t.PciSubsystemId. */
        bits.SubsystemVendorID.setBaseRegister(&r32);
        bits.SubsystemID.setBaseRegister(&r32);
    }
    RegDEVICEPciSubsystemId_t& operator=(const RegDEVICEPciSubsystemId_t& other)
    {
        r32 = other.r32;
        return *this;
    }
#endif /* CXX_SIMULATOR */
} RegDEVICEPciSubsystemId_t;

#define REG_DEVICE_PCI_CLASS_CODE_REVISION ((volatile BCM5719_DEVICE_H_uint32_t*)0xc000643c) /* This undocumented register is suspected to set the class code and device revision in PCI configuration space. Unconfirmed. */
/** @brief Register definition for @ref DEVICE_t.PciClassCodeRevision. */
typedef register_container RegDEVICEPciClassCodeRevision_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICEPciClassCodeRevision_t;

#define REG_DEVICE_64C0 ((volatile BCM5719_DEVICE_H_uint32_t*)0xc00064c0) /*  */
/** @brief Register definition for @ref DEVICE_t.64c0. */
typedef register_container RegDEVICE64c0_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICE64c0_t;

#define REG_DEVICE_64C8 ((volatile BCM5719_DEVICE_H_uint32_t*)0xc00064c8) /*  */
/** @brief Register definition for @ref DEVICE_t.64c8. */
typedef register_container RegDEVICE64c8_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICE64c8_t;

#define REG_DEVICE_64DC ((volatile BCM5719_DEVICE_H_uint32_t*)0xc00064dc) /*  */
/** @brief Register definition for @ref DEVICE_t.64dc. */
typedef register_container RegDEVICE64dc_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICE64dc_t;

#define REG_DEVICE_PCI_SERIAL_NUMBER_LOW ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0006504) /* This sets the low 32 bits of the 64-bit device serial number, which isexposed as a PCIe capability in configuration space. */
/** @brief Register definition for @ref DEVICE_t.PciSerialNumberLow. */
typedef register_container RegDEVICEPciSerialNumberLow_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICEPciSerialNumberLow_t;

#define REG_DEVICE_PCI_SERIAL_NUMBER_HIGH ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0006508) /* This sets the high 32 bits of the 64-bit device serial number, which isexposed as a PCIe capability in configuration space. */
/** @brief Register definition for @ref DEVICE_t.PciSerialNumberHigh. */
typedef register_container RegDEVICEPciSerialNumberHigh_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICEPciSerialNumberHigh_t;

#define REG_DEVICE_PCI_POWER_BUDGET_0 ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0006510) /* Used to report power budget capability data to the host. The values are loaded from NVM, and up to eight values may be specified. Each value is specified in the lower 16 bits of one of these PCI Power Budget registers. The upper 16 bits are set to zero. */
#define     DEVICE_PCI_POWER_BUDGET_0_POWER_BUDGET_VALUE_SHIFT 0u
#define     DEVICE_PCI_POWER_BUDGET_0_POWER_BUDGET_VALUE_MASK  0xffffu
#define GET_DEVICE_PCI_POWER_BUDGET_0_POWER_BUDGET_VALUE(__reg__)  (((__reg__) & 0xffff) >> 0u)
#define SET_DEVICE_PCI_POWER_BUDGET_0_POWER_BUDGET_VALUE(__val__)  (((__val__) << 0u) & 0xffffu)
#define     DEVICE_PCI_POWER_BUDGET_0_UNKNOWN_SHIFT 16u
#define     DEVICE_PCI_POWER_BUDGET_0_UNKNOWN_MASK  0xffff0000u
#define GET_DEVICE_PCI_POWER_BUDGET_0_UNKNOWN(__reg__)  (((__reg__) & 0xffff0000) >> 16u)
#define SET_DEVICE_PCI_POWER_BUDGET_0_UNKNOWN(__val__)  (((__val__) << 16u) & 0xffff0000u)

/** @brief Register definition for @ref DEVICE_t.PciPowerBudget0. */
typedef register_container RegDEVICEPciPowerBudget0_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;

    BITFIELD_BEGIN(BCM5719_DEVICE_H_uint32_t, bits)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, PowerBudgetValue, 0, 16)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, Unknown, 16, 16)
    BITFIELD_END(BCM5719_DEVICE_H_uint32_t, bits)
#ifdef CXX_SIMULATOR
    RegDEVICEPciPowerBudget0_t()
    {
        /** @brief constructor for @ref DEVICE_t.PciPowerBudget0. */
        bits.PowerBudgetValue.setBaseRegister(&r32);
        bits.Unknown.setBaseRegister(&r32);
    }
    RegDEVICEPciPowerBudget0_t& operator=(const RegDEVICEPciPowerBudget0_t& other)
    {
        r32 = other.r32;
        return *this;
    }
#endif /* CXX_SIMULATOR */
} RegDEVICEPciPowerBudget0_t;

#define REG_DEVICE_PCI_POWER_BUDGET_1 ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0006514) /* See  */
/** @brief Register definition for @ref DEVICE_t.PciPowerBudget1. */
typedef register_container RegDEVICEPciPowerBudget1_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICEPciPowerBudget1_t;

#define REG_DEVICE_PCI_POWER_BUDGET_2 ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0006518) /* See  */
/** @brief Register definition for @ref DEVICE_t.PciPowerBudget2. */
typedef register_container RegDEVICEPciPowerBudget2_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICEPciPowerBudget2_t;

#define REG_DEVICE_PCI_POWER_BUDGET_3 ((volatile BCM5719_DEVICE_H_uint32_t*)0xc000651c) /* See  */
/** @brief Register definition for @ref DEVICE_t.PciPowerBudget3. */
typedef register_container RegDEVICEPciPowerBudget3_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICEPciPowerBudget3_t;

#define REG_DEVICE_PCI_POWER_BUDGET_4 ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0006520) /* See  */
/** @brief Register definition for @ref DEVICE_t.PciPowerBudget4. */
typedef register_container RegDEVICEPciPowerBudget4_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICEPciPowerBudget4_t;

#define REG_DEVICE_PCI_POWER_BUDGET_5 ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0006524) /* See  */
/** @brief Register definition for @ref DEVICE_t.PciPowerBudget5. */
typedef register_container RegDEVICEPciPowerBudget5_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICEPciPowerBudget5_t;

#define REG_DEVICE_PCI_POWER_BUDGET_6 ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0006528) /* See  */
/** @brief Register definition for @ref DEVICE_t.PciPowerBudget6. */
typedef register_container RegDEVICEPciPowerBudget6_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICEPciPowerBudget6_t;

#define REG_DEVICE_PCI_POWER_BUDGET_7 ((volatile BCM5719_DEVICE_H_uint32_t*)0xc000652c) /* See  */
/** @brief Register definition for @ref DEVICE_t.PciPowerBudget7. */
typedef register_container RegDEVICEPciPowerBudget7_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICEPciPowerBudget7_t;

#define REG_DEVICE_6530 ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0006530) /*  */
/** @brief Register definition for @ref DEVICE_t.6530. */
typedef register_container RegDEVICE6530_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICE6530_t;

#define REG_DEVICE_6550 ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0006550) /* The LSB in this undocumented and unknown register is set if the device is a LOM (LAN-on-Motherboard) design (i.e., builtin to a system and not an expansion card). */
/** @brief Register definition for @ref DEVICE_t.6550. */
typedef register_container RegDEVICE6550_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICE6550_t;

#define REG_DEVICE_65F4 ((volatile BCM5719_DEVICE_H_uint32_t*)0xc00065f4) /*  */
/** @brief Register definition for @ref DEVICE_t.65f4. */
typedef register_container RegDEVICE65f4_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICE65f4_t;

#define REG_DEVICE_GRC_MODE_CONTROL ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0006800) /*  */
#define     DEVICE_GRC_MODE_CONTROL_TIME_SYNC_MODE_ENABLE_SHIFT 19u
#define     DEVICE_GRC_MODE_CONTROL_TIME_SYNC_MODE_ENABLE_MASK  0x80000u
#define GET_DEVICE_GRC_MODE_CONTROL_TIME_SYNC_MODE_ENABLE(__reg__)  (((__reg__) & 0x80000) >> 19u)
#define SET_DEVICE_GRC_MODE_CONTROL_TIME_SYNC_MODE_ENABLE(__val__)  (((__val__) << 19u) & 0x80000u)
#define     DEVICE_GRC_MODE_CONTROL_NVRAM_WRITE_ENABLE_SHIFT 21u
#define     DEVICE_GRC_MODE_CONTROL_NVRAM_WRITE_ENABLE_MASK  0x200000u
#define GET_DEVICE_GRC_MODE_CONTROL_NVRAM_WRITE_ENABLE(__reg__)  (((__reg__) & 0x200000) >> 21u)
#define SET_DEVICE_GRC_MODE_CONTROL_NVRAM_WRITE_ENABLE(__val__)  (((__val__) << 21u) & 0x200000u)
#define     DEVICE_GRC_MODE_CONTROL_PCIE_TL_DIV_DL_DIV_PL_MAPPING_1_SHIFT 22u
#define     DEVICE_GRC_MODE_CONTROL_PCIE_TL_DIV_DL_DIV_PL_MAPPING_1_MASK  0x400000u
#define GET_DEVICE_GRC_MODE_CONTROL_PCIE_TL_DIV_DL_DIV_PL_MAPPING_1(__reg__)  (((__reg__) & 0x400000) >> 22u)
#define SET_DEVICE_GRC_MODE_CONTROL_PCIE_TL_DIV_DL_DIV_PL_MAPPING_1(__val__)  (((__val__) << 22u) & 0x400000u)
#define     DEVICE_GRC_MODE_CONTROL_PCIE_TL_DIV_DL_DIV_PL_MAPPING_2_SHIFT 29u
#define     DEVICE_GRC_MODE_CONTROL_PCIE_TL_DIV_DL_DIV_PL_MAPPING_2_MASK  0x20000000u
#define GET_DEVICE_GRC_MODE_CONTROL_PCIE_TL_DIV_DL_DIV_PL_MAPPING_2(__reg__)  (((__reg__) & 0x20000000) >> 29u)
#define SET_DEVICE_GRC_MODE_CONTROL_PCIE_TL_DIV_DL_DIV_PL_MAPPING_2(__val__)  (((__val__) << 29u) & 0x20000000u)
#define     DEVICE_GRC_MODE_CONTROL_PCIE_TL_DIV_DL_DIV_PL_MAPPING_3_SHIFT 31u
#define     DEVICE_GRC_MODE_CONTROL_PCIE_TL_DIV_DL_DIV_PL_MAPPING_3_MASK  0x80000000u
#define GET_DEVICE_GRC_MODE_CONTROL_PCIE_TL_DIV_DL_DIV_PL_MAPPING_3(__reg__)  (((__reg__) & 0x80000000) >> 31u)
#define SET_DEVICE_GRC_MODE_CONTROL_PCIE_TL_DIV_DL_DIV_PL_MAPPING_3(__val__)  (((__val__) << 31u) & 0x80000000u)

/** @brief Register definition for @ref DEVICE_t.GrcModeControl. */
typedef register_container RegDEVICEGrcModeControl_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;

    BITFIELD_BEGIN(BCM5719_DEVICE_H_uint32_t, bits)
        /** @brief Padding */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, reserved_18_0, 0, 19)
        /** @brief Write 1 to this bit to enable Time Sync Mode. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, TimeSyncModeEnable, 19, 1)
        /** @brief Padding */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, reserved_20_20, 20, 1)
        /** @brief The host must set this bit before attempting to update the Flash or SEEPROM. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, NVRAMWriteEnable, 21, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, PCIeTL_DIV_DL_DIV_PLMapping1, 22, 1)
        /** @brief Padding */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, reserved_28_23, 23, 6)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, PCIeTL_DIV_DL_DIV_PLMapping2, 29, 1)
        /** @brief Padding */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, reserved_30_30, 30, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, PCIeTL_DIV_DL_DIV_PLMapping3, 31, 1)
    BITFIELD_END(BCM5719_DEVICE_H_uint32_t, bits)
#ifdef CXX_SIMULATOR
    RegDEVICEGrcModeControl_t()
    {
        /** @brief constructor for @ref DEVICE_t.GrcModeControl. */
        bits.TimeSyncModeEnable.setBaseRegister(&r32);
        bits.NVRAMWriteEnable.setBaseRegister(&r32);
        bits.PCIeTL_DIV_DL_DIV_PLMapping1.setBaseRegister(&r32);
        bits.PCIeTL_DIV_DL_DIV_PLMapping2.setBaseRegister(&r32);
        bits.PCIeTL_DIV_DL_DIV_PLMapping3.setBaseRegister(&r32);
    }
    RegDEVICEGrcModeControl_t& operator=(const RegDEVICEGrcModeControl_t& other)
    {
        r32 = other.r32;
        return *this;
    }
#endif /* CXX_SIMULATOR */
} RegDEVICEGrcModeControl_t;

#define REG_DEVICE_MISCELLANEOUS_LOCAL_CONTROL ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0006808) /*  */
#define     DEVICE_MISCELLANEOUS_LOCAL_CONTROL_GPIO_0_INPUT_SHIFT 8u
#define     DEVICE_MISCELLANEOUS_LOCAL_CONTROL_GPIO_0_INPUT_MASK  0x100u
#define GET_DEVICE_MISCELLANEOUS_LOCAL_CONTROL_GPIO_0_INPUT(__reg__)  (((__reg__) & 0x100) >> 8u)
#define SET_DEVICE_MISCELLANEOUS_LOCAL_CONTROL_GPIO_0_INPUT(__val__)  (((__val__) << 8u) & 0x100u)
#define     DEVICE_MISCELLANEOUS_LOCAL_CONTROL_GPIO_1_INPUT_SHIFT 9u
#define     DEVICE_MISCELLANEOUS_LOCAL_CONTROL_GPIO_1_INPUT_MASK  0x200u
#define GET_DEVICE_MISCELLANEOUS_LOCAL_CONTROL_GPIO_1_INPUT(__reg__)  (((__reg__) & 0x200) >> 9u)
#define SET_DEVICE_MISCELLANEOUS_LOCAL_CONTROL_GPIO_1_INPUT(__val__)  (((__val__) << 9u) & 0x200u)
#define     DEVICE_MISCELLANEOUS_LOCAL_CONTROL_GPIO_2_INPUT_SHIFT 10u
#define     DEVICE_MISCELLANEOUS_LOCAL_CONTROL_GPIO_2_INPUT_MASK  0x400u
#define GET_DEVICE_MISCELLANEOUS_LOCAL_CONTROL_GPIO_2_INPUT(__reg__)  (((__reg__) & 0x400) >> 10u)
#define SET_DEVICE_MISCELLANEOUS_LOCAL_CONTROL_GPIO_2_INPUT(__val__)  (((__val__) << 10u) & 0x400u)
#define     DEVICE_MISCELLANEOUS_LOCAL_CONTROL_GPIO_0_OUTPUT_ENABLE_SHIFT 11u
#define     DEVICE_MISCELLANEOUS_LOCAL_CONTROL_GPIO_0_OUTPUT_ENABLE_MASK  0x800u
#define GET_DEVICE_MISCELLANEOUS_LOCAL_CONTROL_GPIO_0_OUTPUT_ENABLE(__reg__)  (((__reg__) & 0x800) >> 11u)
#define SET_DEVICE_MISCELLANEOUS_LOCAL_CONTROL_GPIO_0_OUTPUT_ENABLE(__val__)  (((__val__) << 11u) & 0x800u)
#define     DEVICE_MISCELLANEOUS_LOCAL_CONTROL_GPIO_1_OUTPUT_ENABLE_SHIFT 12u
#define     DEVICE_MISCELLANEOUS_LOCAL_CONTROL_GPIO_1_OUTPUT_ENABLE_MASK  0x1000u
#define GET_DEVICE_MISCELLANEOUS_LOCAL_CONTROL_GPIO_1_OUTPUT_ENABLE(__reg__)  (((__reg__) & 0x1000) >> 12u)
#define SET_DEVICE_MISCELLANEOUS_LOCAL_CONTROL_GPIO_1_OUTPUT_ENABLE(__val__)  (((__val__) << 12u) & 0x1000u)
#define     DEVICE_MISCELLANEOUS_LOCAL_CONTROL_GPIO_2_OUTPUT_ENABLE_SHIFT 13u
#define     DEVICE_MISCELLANEOUS_LOCAL_CONTROL_GPIO_2_OUTPUT_ENABLE_MASK  0x2000u
#define GET_DEVICE_MISCELLANEOUS_LOCAL_CONTROL_GPIO_2_OUTPUT_ENABLE(__reg__)  (((__reg__) & 0x2000) >> 13u)
#define SET_DEVICE_MISCELLANEOUS_LOCAL_CONTROL_GPIO_2_OUTPUT_ENABLE(__val__)  (((__val__) << 13u) & 0x2000u)
#define     DEVICE_MISCELLANEOUS_LOCAL_CONTROL_GPIO_0_OUTPUT_SHIFT 14u
#define     DEVICE_MISCELLANEOUS_LOCAL_CONTROL_GPIO_0_OUTPUT_MASK  0x4000u
#define GET_DEVICE_MISCELLANEOUS_LOCAL_CONTROL_GPIO_0_OUTPUT(__reg__)  (((__reg__) & 0x4000) >> 14u)
#define SET_DEVICE_MISCELLANEOUS_LOCAL_CONTROL_GPIO_0_OUTPUT(__val__)  (((__val__) << 14u) & 0x4000u)
#define     DEVICE_MISCELLANEOUS_LOCAL_CONTROL_GPIO_1_OUTPUT_SHIFT 15u
#define     DEVICE_MISCELLANEOUS_LOCAL_CONTROL_GPIO_1_OUTPUT_MASK  0x8000u
#define GET_DEVICE_MISCELLANEOUS_LOCAL_CONTROL_GPIO_1_OUTPUT(__reg__)  (((__reg__) & 0x8000) >> 15u)
#define SET_DEVICE_MISCELLANEOUS_LOCAL_CONTROL_GPIO_1_OUTPUT(__val__)  (((__val__) << 15u) & 0x8000u)
#define     DEVICE_MISCELLANEOUS_LOCAL_CONTROL_GPIO_2_OUTPUT_SHIFT 16u
#define     DEVICE_MISCELLANEOUS_LOCAL_CONTROL_GPIO_2_OUTPUT_MASK  0x10000u
#define GET_DEVICE_MISCELLANEOUS_LOCAL_CONTROL_GPIO_2_OUTPUT(__reg__)  (((__reg__) & 0x10000) >> 16u)
#define SET_DEVICE_MISCELLANEOUS_LOCAL_CONTROL_GPIO_2_OUTPUT(__val__)  (((__val__) << 16u) & 0x10000u)
#define     DEVICE_MISCELLANEOUS_LOCAL_CONTROL_AUTO_SEEPROM_ACCESS_SHIFT 24u
#define     DEVICE_MISCELLANEOUS_LOCAL_CONTROL_AUTO_SEEPROM_ACCESS_MASK  0x1000000u
#define GET_DEVICE_MISCELLANEOUS_LOCAL_CONTROL_AUTO_SEEPROM_ACCESS(__reg__)  (((__reg__) & 0x1000000) >> 24u)
#define SET_DEVICE_MISCELLANEOUS_LOCAL_CONTROL_AUTO_SEEPROM_ACCESS(__val__)  (((__val__) << 24u) & 0x1000000u)

/** @brief Register definition for @ref DEVICE_t.MiscellaneousLocalControl. */
typedef register_container RegDEVICEMiscellaneousLocalControl_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;

    BITFIELD_BEGIN(BCM5719_DEVICE_H_uint32_t, bits)
        /** @brief Padding */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, reserved_7_0, 0, 8)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, GPIO0Input, 8, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, GPIO1Input, 9, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, GPIO2Input, 10, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, GPIO0OutputEnable, 11, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, GPIO1OutputEnable, 12, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, GPIO2OutputEnable, 13, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, GPIO0Output, 14, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, GPIO1Output, 15, 1)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, GPIO2Output, 16, 1)
        /** @brief Padding */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, reserved_23_17, 17, 7)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, AutoSEEPROMAccess, 24, 1)
    BITFIELD_END(BCM5719_DEVICE_H_uint32_t, bits)
#ifdef CXX_SIMULATOR
    RegDEVICEMiscellaneousLocalControl_t()
    {
        /** @brief constructor for @ref DEVICE_t.MiscellaneousLocalControl. */
        bits.GPIO0Input.setBaseRegister(&r32);
        bits.GPIO1Input.setBaseRegister(&r32);
        bits.GPIO2Input.setBaseRegister(&r32);
        bits.GPIO0OutputEnable.setBaseRegister(&r32);
        bits.GPIO1OutputEnable.setBaseRegister(&r32);
        bits.GPIO2OutputEnable.setBaseRegister(&r32);
        bits.GPIO0Output.setBaseRegister(&r32);
        bits.GPIO1Output.setBaseRegister(&r32);
        bits.GPIO2Output.setBaseRegister(&r32);
        bits.AutoSEEPROMAccess.setBaseRegister(&r32);
    }
    RegDEVICEMiscellaneousLocalControl_t& operator=(const RegDEVICEMiscellaneousLocalControl_t& other)
    {
        r32 = other.r32;
        return *this;
    }
#endif /* CXX_SIMULATOR */
} RegDEVICEMiscellaneousLocalControl_t;

#define REG_DEVICE_TIMER ((volatile BCM5719_DEVICE_H_uint32_t*)0xc000680c) /* 32-bit free-running counter */
/** @brief Register definition for @ref DEVICE_t.Timer. */
typedef register_container RegDEVICETimer_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICETimer_t;

#define REG_DEVICE_RX_CPU_EVENT ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0006810) /*  */
#define     DEVICE_RX_CPU_EVENT_VPD_ATTENTION_SHIFT 30u
#define     DEVICE_RX_CPU_EVENT_VPD_ATTENTION_MASK  0x40000000u
#define GET_DEVICE_RX_CPU_EVENT_VPD_ATTENTION(__reg__)  (((__reg__) & 0x40000000) >> 30u)
#define SET_DEVICE_RX_CPU_EVENT_VPD_ATTENTION(__val__)  (((__val__) << 30u) & 0x40000000u)

/** @brief Register definition for @ref DEVICE_t.RxCpuEvent. */
typedef register_container RegDEVICERxCpuEvent_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;

    BITFIELD_BEGIN(BCM5719_DEVICE_H_uint32_t, bits)
        /** @brief Padding */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, reserved_29_0, 0, 30)
        /** @brief  */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, VPDAttention, 30, 1)
    BITFIELD_END(BCM5719_DEVICE_H_uint32_t, bits)
#ifdef CXX_SIMULATOR
    RegDEVICERxCpuEvent_t()
    {
        /** @brief constructor for @ref DEVICE_t.RxCpuEvent. */
        bits.VPDAttention.setBaseRegister(&r32);
    }
    RegDEVICERxCpuEvent_t& operator=(const RegDEVICERxCpuEvent_t& other)
    {
        r32 = other.r32;
        return *this;
    }
#endif /* CXX_SIMULATOR */
} RegDEVICERxCpuEvent_t;

#define REG_DEVICE_6838 ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0006838) /* Unknown. Used by PXE agent. */
/** @brief Register definition for @ref DEVICE_t.6838. */
typedef register_container RegDEVICE6838_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICE6838_t;

#define REG_DEVICE_MDI_CONTROL ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0006844) /* The register manual only mentions this in the changelog; it was removed from the manual in a previous revision. :| */
/** @brief Register definition for @ref DEVICE_t.MdiControl. */
typedef register_container RegDEVICEMdiControl_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICEMdiControl_t;

#define REG_DEVICE_FAST_BOOT_PROGRAM_COUNTER ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0006894) /*  */
#define     DEVICE_FAST_BOOT_PROGRAM_COUNTER_PROGRAM_COUNTER_SHIFT 0u
#define     DEVICE_FAST_BOOT_PROGRAM_COUNTER_PROGRAM_COUNTER_MASK  0x7fffffffu
#define GET_DEVICE_FAST_BOOT_PROGRAM_COUNTER_PROGRAM_COUNTER(__reg__)  (((__reg__) & 0x7fffffff) >> 0u)
#define SET_DEVICE_FAST_BOOT_PROGRAM_COUNTER_PROGRAM_COUNTER(__val__)  (((__val__) << 0u) & 0x7fffffffu)
#define     DEVICE_FAST_BOOT_PROGRAM_COUNTER_ENABLE_SHIFT 31u
#define     DEVICE_FAST_BOOT_PROGRAM_COUNTER_ENABLE_MASK  0x80000000u
#define GET_DEVICE_FAST_BOOT_PROGRAM_COUNTER_ENABLE(__reg__)  (((__reg__) & 0x80000000) >> 31u)
#define SET_DEVICE_FAST_BOOT_PROGRAM_COUNTER_ENABLE(__val__)  (((__val__) << 31u) & 0x80000000u)

/** @brief Register definition for @ref DEVICE_t.FastBootProgramCounter. */
typedef register_container RegDEVICEFastBootProgramCounter_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;

    BITFIELD_BEGIN(BCM5719_DEVICE_H_uint32_t, bits)
        /** @brief This field is used by the CPU to keep track of the location of the phase 1 boot code in RX MBUF. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, ProgramCounter, 0, 31)
        /** @brief This bit is used by the CPU to keep track of whether or not there is valid phase 1 boot code stored in the RX MBUF. If the bit is set, then RXMBUF contains valid boot code. Otherwise, it is assumed that RXMBUF does not contain valid boot code. */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, Enable, 31, 1)
    BITFIELD_END(BCM5719_DEVICE_H_uint32_t, bits)
#ifdef CXX_SIMULATOR
    RegDEVICEFastBootProgramCounter_t()
    {
        /** @brief constructor for @ref DEVICE_t.FastBootProgramCounter. */
        bits.ProgramCounter.setBaseRegister(&r32);
        bits.Enable.setBaseRegister(&r32);
    }
    RegDEVICEFastBootProgramCounter_t& operator=(const RegDEVICEFastBootProgramCounter_t& other)
    {
        r32 = other.r32;
        return *this;
    }
#endif /* CXX_SIMULATOR */
} RegDEVICEFastBootProgramCounter_t;

#define REG_DEVICE_EXPANSION_ROM_ADDR ((volatile BCM5719_DEVICE_H_uint32_t*)0xc00068ec) /* Expansion ROM base address, expect to be d- word aligned. */
/** @brief Register definition for @ref DEVICE_t.ExpansionRomAddr. */
typedef register_container RegDEVICEExpansionRomAddr_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICEExpansionRomAddr_t;

#define REG_DEVICE_68F0 ((volatile BCM5719_DEVICE_H_uint32_t*)0xc00068f0) /*  */
/** @brief Register definition for @ref DEVICE_t.68f0. */
typedef register_container RegDEVICE68f0_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICE68f0_t;

#define REG_DEVICE_EAV_REF_CLOCK_CONTROL ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0006908) /*  */
#define     DEVICE_EAV_REF_CLOCK_CONTROL_TIMESYNC_GPIO_MAPPING_SHIFT 16u
#define     DEVICE_EAV_REF_CLOCK_CONTROL_TIMESYNC_GPIO_MAPPING_MASK  0x30000u
#define GET_DEVICE_EAV_REF_CLOCK_CONTROL_TIMESYNC_GPIO_MAPPING(__reg__)  (((__reg__) & 0x30000) >> 16u)
#define SET_DEVICE_EAV_REF_CLOCK_CONTROL_TIMESYNC_GPIO_MAPPING(__val__)  (((__val__) << 16u) & 0x30000u)
#define     DEVICE_EAV_REF_CLOCK_CONTROL_TIMESYNC_GPIO_MAPPING_SNAP_SHOT_0_ 0x0u
#define     DEVICE_EAV_REF_CLOCK_CONTROL_TIMESYNC_GPIO_MAPPING_SNAP_SHOT_1_ 0x1u
#define     DEVICE_EAV_REF_CLOCK_CONTROL_TIMESYNC_GPIO_MAPPING_TIME_WATCHDOG_0_ 0x2u
#define     DEVICE_EAV_REF_CLOCK_CONTROL_TIMESYNC_GPIO_MAPPING_TIME_WATCHDOG_1_ 0x3u

#define     DEVICE_EAV_REF_CLOCK_CONTROL_APE_GPIO_0_MAPPING_SHIFT 18u
#define     DEVICE_EAV_REF_CLOCK_CONTROL_APE_GPIO_0_MAPPING_MASK  0x1c0000u
#define GET_DEVICE_EAV_REF_CLOCK_CONTROL_APE_GPIO_0_MAPPING(__reg__)  (((__reg__) & 0x1c0000) >> 18u)
#define SET_DEVICE_EAV_REF_CLOCK_CONTROL_APE_GPIO_0_MAPPING(__val__)  (((__val__) << 18u) & 0x1c0000u)
#define     DEVICE_EAV_REF_CLOCK_CONTROL_APE_GPIO_0_MAPPING_NOT_USED 0x0u
#define     DEVICE_EAV_REF_CLOCK_CONTROL_APE_GPIO_0_MAPPING_SNAP_SHOT_0_ 0x4u
#define     DEVICE_EAV_REF_CLOCK_CONTROL_APE_GPIO_0_MAPPING_SNAP_SHOT_1_ 0x5u
#define     DEVICE_EAV_REF_CLOCK_CONTROL_APE_GPIO_0_MAPPING_TIME_WATCHDOG_0_ 0x6u
#define     DEVICE_EAV_REF_CLOCK_CONTROL_APE_GPIO_0_MAPPING_TIME_WATCHDOG_1_ 0x7u

#define     DEVICE_EAV_REF_CLOCK_CONTROL_APE_GPIO_1_MAPPING_SHIFT 21u
#define     DEVICE_EAV_REF_CLOCK_CONTROL_APE_GPIO_1_MAPPING_MASK  0xe00000u
#define GET_DEVICE_EAV_REF_CLOCK_CONTROL_APE_GPIO_1_MAPPING(__reg__)  (((__reg__) & 0xe00000) >> 21u)
#define SET_DEVICE_EAV_REF_CLOCK_CONTROL_APE_GPIO_1_MAPPING(__val__)  (((__val__) << 21u) & 0xe00000u)
#define     DEVICE_EAV_REF_CLOCK_CONTROL_APE_GPIO_1_MAPPING_NOT_USED 0x0u
#define     DEVICE_EAV_REF_CLOCK_CONTROL_APE_GPIO_1_MAPPING_SNAP_SHOT_0_ 0x4u
#define     DEVICE_EAV_REF_CLOCK_CONTROL_APE_GPIO_1_MAPPING_SNAP_SHOT_1_ 0x5u
#define     DEVICE_EAV_REF_CLOCK_CONTROL_APE_GPIO_1_MAPPING_TIME_WATCHDOG_0_ 0x6u
#define     DEVICE_EAV_REF_CLOCK_CONTROL_APE_GPIO_1_MAPPING_TIME_WATCHDOG_1_ 0x7u

#define     DEVICE_EAV_REF_CLOCK_CONTROL_APE_GPIO_2_MAPPING_SHIFT 24u
#define     DEVICE_EAV_REF_CLOCK_CONTROL_APE_GPIO_2_MAPPING_MASK  0x7000000u
#define GET_DEVICE_EAV_REF_CLOCK_CONTROL_APE_GPIO_2_MAPPING(__reg__)  (((__reg__) & 0x7000000) >> 24u)
#define SET_DEVICE_EAV_REF_CLOCK_CONTROL_APE_GPIO_2_MAPPING(__val__)  (((__val__) << 24u) & 0x7000000u)
#define     DEVICE_EAV_REF_CLOCK_CONTROL_APE_GPIO_2_MAPPING_NOT_USED 0x0u
#define     DEVICE_EAV_REF_CLOCK_CONTROL_APE_GPIO_2_MAPPING_SNAP_SHOT_0_ 0x4u
#define     DEVICE_EAV_REF_CLOCK_CONTROL_APE_GPIO_2_MAPPING_SNAP_SHOT_1_ 0x5u
#define     DEVICE_EAV_REF_CLOCK_CONTROL_APE_GPIO_2_MAPPING_TIME_WATCHDOG_0_ 0x6u
#define     DEVICE_EAV_REF_CLOCK_CONTROL_APE_GPIO_2_MAPPING_TIME_WATCHDOG_1_ 0x7u

#define     DEVICE_EAV_REF_CLOCK_CONTROL_APE_GPIO_3_MAPPING_SHIFT 27u
#define     DEVICE_EAV_REF_CLOCK_CONTROL_APE_GPIO_3_MAPPING_MASK  0x38000000u
#define GET_DEVICE_EAV_REF_CLOCK_CONTROL_APE_GPIO_3_MAPPING(__reg__)  (((__reg__) & 0x38000000) >> 27u)
#define SET_DEVICE_EAV_REF_CLOCK_CONTROL_APE_GPIO_3_MAPPING(__val__)  (((__val__) << 27u) & 0x38000000u)
#define     DEVICE_EAV_REF_CLOCK_CONTROL_APE_GPIO_3_MAPPING_NOT_USED 0x0u
#define     DEVICE_EAV_REF_CLOCK_CONTROL_APE_GPIO_3_MAPPING_SNAP_SHOT_0_ 0x4u
#define     DEVICE_EAV_REF_CLOCK_CONTROL_APE_GPIO_3_MAPPING_SNAP_SHOT_1_ 0x5u
#define     DEVICE_EAV_REF_CLOCK_CONTROL_APE_GPIO_3_MAPPING_TIME_WATCHDOG_0_ 0x6u
#define     DEVICE_EAV_REF_CLOCK_CONTROL_APE_GPIO_3_MAPPING_TIME_WATCHDOG_1_ 0x7u


/** @brief Register definition for @ref DEVICE_t.EavRefClockControl. */
typedef register_container RegDEVICEEavRefClockControl_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;

    BITFIELD_BEGIN(BCM5719_DEVICE_H_uint32_t, bits)
        /** @brief Padding */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, reserved_15_0, 0, 16)
        /** @brief The MAC/Port dedicated TimeSync_GPIO pin is mapped via this field */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, TimesyncGPIOMapping, 16, 2)
        /** @brief APE_GPIO[0] pin is mapped to 1588 input/ output via this field */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, APEGPIO0Mapping, 18, 3)
        /** @brief APE_GPIO[1] pin is mapped to 1588 input/ output via this field */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, APEGPIO1Mapping, 21, 3)
        /** @brief APE_GPIO[2] pin is mapped to 1588 input/ output via this field */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, APEGPIO2Mapping, 24, 3)
        /** @brief APE_GPIO[3] pin is mapped to 1588 input/ output via this field */
        BITFIELD_MEMBER(BCM5719_DEVICE_H_uint32_t, APEGPIO3Mapping, 27, 3)
    BITFIELD_END(BCM5719_DEVICE_H_uint32_t, bits)
#ifdef CXX_SIMULATOR
    RegDEVICEEavRefClockControl_t()
    {
        /** @brief constructor for @ref DEVICE_t.EavRefClockControl. */
        bits.TimesyncGPIOMapping.setBaseRegister(&r32);
        bits.APEGPIO0Mapping.setBaseRegister(&r32);
        bits.APEGPIO1Mapping.setBaseRegister(&r32);
        bits.APEGPIO2Mapping.setBaseRegister(&r32);
        bits.APEGPIO3Mapping.setBaseRegister(&r32);
    }
    RegDEVICEEavRefClockControl_t& operator=(const RegDEVICEEavRefClockControl_t& other)
    {
        r32 = other.r32;
        return *this;
    }
#endif /* CXX_SIMULATOR */
} RegDEVICEEavRefClockControl_t;

#define REG_DEVICE_7C04 ((volatile BCM5719_DEVICE_H_uint32_t*)0xc0007c04) /* PCIe-related. tg3 driver calls this  */
/** @brief Register definition for @ref DEVICE_t.7c04. */
typedef register_container RegDEVICE7c04_t {
    /** @brief 32bit direct register access. */
    BCM5719_DEVICE_H_uint32_t r32;
} RegDEVICE7c04_t;

/** @brief Component definition for @ref DEVICE. */
typedef struct {
    /** @brief Reserved bytes to pad out data structure. */
    BCM5719_DEVICE_H_uint32_t reserved_0[26];

    /** @brief  */
    RegDEVICEMiscellaneousHostControl_t MiscellaneousHostControl;

    /** @brief Reserved bytes to pad out data structure. */
    BCM5719_DEVICE_H_uint32_t reserved_108[1];

    /** @brief  */
    RegDEVICEPciState_t PciState;

    /** @brief Reserved bytes to pad out data structure. */
    BCM5719_DEVICE_H_uint32_t reserved_116[1];

    /** @brief Local controller memory address of a register than can be written or read by writing to the register data register. */
    RegDEVICERegisterBase_t RegisterBase;

    /** @brief Local controller memory address of the NIC memory region that can be accessed via Memory Window data register. */
    RegDEVICEMemoryBase_t MemoryBase;

    /** @brief Register Data at the location pointed by the Register Base Register. */
    RegDEVICERegisterData_t RegisterData;

    /** @brief Reserved bytes to pad out data structure. */
    BCM5719_DEVICE_H_uint32_t reserved_132[1];

    /** @brief UNDI Receive Return Ring Consumer Index Mailbox */
    RegDEVICEUndiReceiveReturnRingConsumerIndex_t UndiReceiveReturnRingConsumerIndex;

    /** @brief UNDI Receive Return Ring Consumer Index Mailbox */
    RegDEVICEUndiReceiveReturnRingConsumerIndexLow_t UndiReceiveReturnRingConsumerIndexLow;

    /** @brief Reserved bytes to pad out data structure. */
    BCM5719_DEVICE_H_uint32_t reserved_144[11];

    /** @brief PCIe standard register. */
    RegDEVICELinkStatusControl_t LinkStatusControl;

    /** @brief Reserved bytes to pad out data structure. */
    BCM5719_DEVICE_H_uint32_t reserved_192[208];

    /** @brief  */
    RegDEVICEEmacMode_t EmacMode;

    /** @brief Reserved bytes to pad out data structure. */
    BCM5719_DEVICE_H_uint32_t reserved_1028[2];

    /** @brief  */
    RegDEVICELedControl_t LedControl;

    /** @brief Upper 2-bytes of this node's MAC address. */
    RegDEVICEEmacMacAddresses0High_t EmacMacAddresses0High;

    /** @brief Lower 4-byte of this node's MAC address. */
    RegDEVICEEmacMacAddresses0Low_t EmacMacAddresses0Low;

    /** @brief Upper 2-bytes of this node's MAC address. */
    RegDEVICEEmacMacAddresses1High_t EmacMacAddresses1High;

    /** @brief Lower 4-byte of this node's MAC address. */
    RegDEVICEEmacMacAddresses1Low_t EmacMacAddresses1Low;

    /** @brief Upper 2-bytes of this node's MAC address. */
    RegDEVICEEmacMacAddresses2High_t EmacMacAddresses2High;

    /** @brief Lower 4-byte of this node's MAC address. */
    RegDEVICEEmacMacAddresses2Low_t EmacMacAddresses2Low;

    /** @brief Upper 2-bytes of this node's MAC address. */
    RegDEVICEEmacMacAddresses3High_t EmacMacAddresses3High;

    /** @brief Lower 4-byte of this node's MAC address. */
    RegDEVICEEmacMacAddresses3Low_t EmacMacAddresses3Low;

    /** @brief Specifies the offset into the 6 KB BD memory for frame comparison. (Bits 3:0 are ignored to align the memory address to a natural 128-bit boundary). */
    RegDEVICEWolPatternPointer_t WolPatternPointer;

    /** @brief  */
    RegDEVICEWolPatternCfg_t WolPatternCfg;

    /** @brief Reserved bytes to pad out data structure. */
    BCM5719_DEVICE_H_uint32_t reserved_1080[1];

    /** @brief 2-byte field which is the largest size frame that will be accepted without being marked as oversize. */
    RegDEVICEMtuSize_t MtuSize;

    /** @brief Reserved bytes to pad out data structure. */
    BCM5719_DEVICE_H_uint32_t reserved_1088[3];

    /** @brief  */
    RegDEVICEMiiCommunication_t MiiCommunication;

    /** @brief Reserved bytes to pad out data structure. */
    BCM5719_DEVICE_H_uint32_t reserved_1104[1];

    /** @brief  */
    RegDEVICEMiiMode_t MiiMode;

    /** @brief Reserved bytes to pad out data structure. */
    BCM5719_DEVICE_H_uint32_t reserved_1112[4];

    /** @brief  */
    RegDEVICEReceiveMacMode_t ReceiveMacMode;

    /** @brief Reserved bytes to pad out data structure. */
    BCM5719_DEVICE_H_uint32_t reserved_1132[82];

    /** @brief This register reflects various status of the respective SGMII port when enabled. */
    RegDEVICESgmiiStatus_t SgmiiStatus;

    /** @brief Reserved bytes to pad out data structure. */
    BCM5719_DEVICE_H_uint32_t reserved_1464[3090];

    /** @brief  */
    RegDEVICECpmuControl_t CpmuControl;

    /** @brief Reserved bytes to pad out data structure. */
    BCM5719_DEVICE_H_uint32_t reserved_13828[3];

    /** @brief  */
    RegDEVICELinkAwarePowerModeClockPolicy_t LinkAwarePowerModeClockPolicy;

    /** @brief Reserved bytes to pad out data structure. */
    BCM5719_DEVICE_H_uint32_t reserved_13844[4];

    /** @brief  */
    RegDEVICEClockSpeedOverridePolicy_t ClockSpeedOverridePolicy;

    /** @brief Reserved bytes to pad out data structure. */
    BCM5719_DEVICE_H_uint32_t reserved_13864[1];

    /** @brief  */
    RegDEVICEStatus_t Status;

    /** @brief  */
    RegDEVICEClockStatus_t ClockStatus;

    /** @brief Reserved bytes to pad out data structure. */
    BCM5719_DEVICE_H_uint32_t reserved_13876[1];

    /** @brief  */
    RegDEVICEGphyControlStatus_t GphyControlStatus;

    /** @brief Reserved bytes to pad out data structure. */
    BCM5719_DEVICE_H_uint32_t reserved_13884[7];

    /** @brief  */
    RegDEVICEChipId_t ChipId;

    /** @brief Writing a 1 to any of these bits pends a Mutex lock request on behalf of a software agent. The bit is subsequently latched by hardware and shall read 1 as long as the request is pending. Writing a 0 to a bit shall have no effect. */
    RegDEVICEMutexRequest_t MutexRequest;

    /** @brief Reading this field shall return a maximum of one set bit at any time. The set bit shall point to the lock owner. If the Mutex is not locked, then a read shall return a value 0x0000. Writing a 1 to the already set bit shall relinquish the lock and the set bit shall be cleared. Writing a 1 to an unset bit shall cancel the corresponding pending request if there was one, and the pairing bit in the Mutex_Request_Reg shall be cleared. */
    RegDEVICEMutexGrant_t MutexGrant;

    /** @brief  */
    RegDEVICEGphyStrap_t GphyStrap;

    /** @brief Reserved bytes to pad out data structure. */
    BCM5719_DEVICE_H_uint32_t reserved_13928[5];

    /** @brief  */
    RegDEVICETopLevelMiscellaneousControl1_t TopLevelMiscellaneousControl1;

    /** @brief Reserved bytes to pad out data structure. */
    BCM5719_DEVICE_H_uint32_t reserved_13952[12];

    /** @brief  */
    RegDEVICEEeeMode_t EeeMode;

    /** @brief Reserved bytes to pad out data structure. */
    BCM5719_DEVICE_H_uint32_t reserved_14004[2];

    /** @brief  */
    RegDEVICEEeeLinkIdleControl_t EeeLinkIdleControl;

    /** @brief Reserved bytes to pad out data structure. */
    BCM5719_DEVICE_H_uint32_t reserved_14016[4];

    /** @brief  */
    RegDEVICEEeeControl_t EeeControl;

    /** @brief Reserved bytes to pad out data structure. */
    BCM5719_DEVICE_H_uint32_t reserved_14036[7];

    /** @brief  */
    RegDEVICEGlobalMutexRequest_t GlobalMutexRequest;

    /** @brief  */
    RegDEVICEGlobalMutexGrant_t GlobalMutexGrant;

    /** @brief Reserved bytes to pad out data structure. */
    BCM5719_DEVICE_H_uint32_t reserved_14072[578];

    /** @brief  */
    RegDEVICEMemoryArbiterMode_t MemoryArbiterMode;

    /** @brief Reserved bytes to pad out data structure. */
    BCM5719_DEVICE_H_uint32_t reserved_16388[255];

    /** @brief  */
    RegDEVICEBufferManagerMode_t BufferManagerMode;

    /** @brief Reserved bytes to pad out data structure. */
    BCM5719_DEVICE_H_uint32_t reserved_17412[323];

    /** @brief  */
    RegDEVICELsoNonlsoBdReadDmaCorruptionEnableControl_t LsoNonlsoBdReadDmaCorruptionEnableControl;

    /** @brief Reserved bytes to pad out data structure. */
    BCM5719_DEVICE_H_uint32_t reserved_18708[443];

    /** @brief  */
    RegDEVICERxRiscMode_t RxRiscMode;

    /** @brief  */
    RegDEVICERxRiscStatus_t RxRiscStatus;

    /** @brief Reserved bytes to pad out data structure. */
    BCM5719_DEVICE_H_uint32_t reserved_20488[5];

    /** @brief The program counter register can be used to read or write the current Program Counter of the each CPU. Reads can occur at any time, however writes can only be performed when the CPU is halted. Writes will also clear any pending instruction in the decode stage of the pipeline. Bits 31-2 are implemented. 1s written to bits 1-0 are ignored. */
    RegDEVICERxRiscProgramCounter_t RxRiscProgramCounter;

    /** @brief This undocumented register contains the current word located at the program counter address loaded in  */
    RegDEVICERxRiscCurrentInstruction_t RxRiscCurrentInstruction;

    /** @brief Reserved bytes to pad out data structure. */
    BCM5719_DEVICE_H_uint32_t reserved_20516[4];

    /** @brief This register is used to set a hardware breakpoint based on the RISC's program counter (PC). If the PC equals the value in this register, and the hardware breakpoint is enabled, the RISC is halted and the appropriate stopping condition is indicated in the RISC State Register. To enable the hardware breakpoint, simply write the byte address of the instruction to break on and clear the Disable Hardware Breakpoint bit. */
    RegDEVICERxRiscHardwareBreakpoint_t RxRiscHardwareBreakpoint;

    /** @brief Reserved bytes to pad out data structure. */
    BCM5719_DEVICE_H_uint32_t reserved_20536[114];

    /** @brief $zero (R0) */
    RegDEVICERxRiscRegister0_t RxRiscRegister0;

    /** @brief $at (R1) */
    RegDEVICERxRiscRegister1_t RxRiscRegister1;

    /** @brief $v0 (R2) */
    RegDEVICERxRiscRegister2_t RxRiscRegister2;

    /** @brief $v1 (R3) */
    RegDEVICERxRiscRegister3_t RxRiscRegister3;

    /** @brief $a0 (R4) */
    RegDEVICERxRiscRegister4_t RxRiscRegister4;

    /** @brief $a1 (R5) */
    RegDEVICERxRiscRegister5_t RxRiscRegister5;

    /** @brief $a2 (R6) */
    RegDEVICERxRiscRegister6_t RxRiscRegister6;

    /** @brief $a3 (R7) */
    RegDEVICERxRiscRegister7_t RxRiscRegister7;

    /** @brief $t0 (R8) */
    RegDEVICERxRiscRegister8_t RxRiscRegister8;

    /** @brief $t1 (R9) */
    RegDEVICERxRiscRegister9_t RxRiscRegister9;

    /** @brief $t2 (R10) */
    RegDEVICERxRiscRegister10_t RxRiscRegister10;

    /** @brief $t3 (R11) */
    RegDEVICERxRiscRegister11_t RxRiscRegister11;

    /** @brief $t4 (R12) */
    RegDEVICERxRiscRegister12_t RxRiscRegister12;

    /** @brief $t5 (R13) */
    RegDEVICERxRiscRegister13_t RxRiscRegister13;

    /** @brief $t6 (R14) */
    RegDEVICERxRiscRegister14_t RxRiscRegister14;

    /** @brief $t7 (R15) */
    RegDEVICERxRiscRegister15_t RxRiscRegister15;

    /** @brief $s0 (R16) */
    RegDEVICERxRiscRegister16_t RxRiscRegister16;

    /** @brief $s1 (R17) */
    RegDEVICERxRiscRegister17_t RxRiscRegister17;

    /** @brief $s2 (R18) */
    RegDEVICERxRiscRegister18_t RxRiscRegister18;

    /** @brief $s3 (R19) */
    RegDEVICERxRiscRegister19_t RxRiscRegister19;

    /** @brief $s4 (R20) */
    RegDEVICERxRiscRegister20_t RxRiscRegister20;

    /** @brief $s5 (R21) */
    RegDEVICERxRiscRegister21_t RxRiscRegister21;

    /** @brief $s6 (R22) */
    RegDEVICERxRiscRegister22_t RxRiscRegister22;

    /** @brief $s7 (R23) */
    RegDEVICERxRiscRegister23_t RxRiscRegister23;

    /** @brief $t8 (R24) */
    RegDEVICERxRiscRegister24_t RxRiscRegister24;

    /** @brief $t9 (R25) */
    RegDEVICERxRiscRegister25_t RxRiscRegister25;

    /** @brief $k0 (R26) */
    RegDEVICERxRiscRegister26_t RxRiscRegister26;

    /** @brief $k1 (R27) */
    RegDEVICERxRiscRegister27_t RxRiscRegister27;

    /** @brief $gp (R28) */
    RegDEVICERxRiscRegister28_t RxRiscRegister28;

    /** @brief $sp (R29) */
    RegDEVICERxRiscRegister29_t RxRiscRegister29;

    /** @brief $fp (R30) */
    RegDEVICERxRiscRegister30_t RxRiscRegister30;

    /** @brief $ra (R31) */
    RegDEVICERxRiscRegister31_t RxRiscRegister31;

    /** @brief Reserved bytes to pad out data structure. */
    BCM5719_DEVICE_H_uint32_t reserved_21120[1122];

    /** @brief  */
    RegDEVICE6408_t _6408;

    /** @brief Reserved bytes to pad out data structure. */
    BCM5719_DEVICE_H_uint32_t reserved_25612[1];

    /** @brief This undocumented register is used to set PCIe Power Consumption information as reported in configuration space. It is loaded from NVM configuration data. */
    RegDEVICEPciPowerConsumptionInfo_t PciPowerConsumptionInfo;

    /** @brief This undocumented register is used to set PCIe Power Dissipated information as reported in configuration space. It is loaded from NVM configuration data. */
    RegDEVICEPciPowerDissipatedInfo_t PciPowerDissipatedInfo;

    /** @brief Reserved bytes to pad out data structure. */
    BCM5719_DEVICE_H_uint32_t reserved_25624[5];

    /** @brief This undocumented register appears to be used to implement the PCI VPD capability. It is set to the VPD offset which was requested by the host by writing to the VPD register. */
    RegDEVICEPciVpdRequest_t PciVpdRequest;

    /** @brief This undocumented register appears to be used to implement the PCI VPD capability. Bootcode writes the 32 bits of data loaded from the word requested by  */
    RegDEVICEPciVpdResponse_t PciVpdResponse;

    /** @brief This is the undocumented register used to set the PCI Vendor/Device ID, which is configurable from NVM. */
    RegDEVICEPciVendorDeviceId_t PciVendorDeviceId;

    /** @brief This is the undocumented register used to set the PCI Subsystem/Subsystem Vendor ID, which is configurable from NVM. */
    RegDEVICEPciSubsystemId_t PciSubsystemId;

    /** @brief This undocumented register is suspected to set the class code and device revision in PCI configuration space. Unconfirmed. */
    RegDEVICEPciClassCodeRevision_t PciClassCodeRevision;

    /** @brief Reserved bytes to pad out data structure. */
    BCM5719_DEVICE_H_uint32_t reserved_25664[32];

    /** @brief  */
    RegDEVICE64c0_t _64c0;

    /** @brief Reserved bytes to pad out data structure. */
    BCM5719_DEVICE_H_uint32_t reserved_25796[1];

    /** @brief  */
    RegDEVICE64c8_t _64c8;

    /** @brief Reserved bytes to pad out data structure. */
    BCM5719_DEVICE_H_uint32_t reserved_25804[4];

    /** @brief  */
    RegDEVICE64dc_t _64dc;

    /** @brief Reserved bytes to pad out data structure. */
    BCM5719_DEVICE_H_uint32_t reserved_25824[9];

    /** @brief This sets the low 32 bits of the 64-bit device serial number, which isexposed as a PCIe capability in configuration space. */
    RegDEVICEPciSerialNumberLow_t PciSerialNumberLow;

    /** @brief This sets the high 32 bits of the 64-bit device serial number, which isexposed as a PCIe capability in configuration space. */
    RegDEVICEPciSerialNumberHigh_t PciSerialNumberHigh;

    /** @brief Reserved bytes to pad out data structure. */
    BCM5719_DEVICE_H_uint32_t reserved_25868[1];

    /** @brief Used to report power budget capability data to the host. The values are loaded from NVM, and up to eight values may be specified. Each value is specified in the lower 16 bits of one of these PCI Power Budget registers. The upper 16 bits are set to zero. */
    RegDEVICEPciPowerBudget0_t PciPowerBudget0;

    /** @brief See  */
    RegDEVICEPciPowerBudget1_t PciPowerBudget1;

    /** @brief See  */
    RegDEVICEPciPowerBudget2_t PciPowerBudget2;

    /** @brief See  */
    RegDEVICEPciPowerBudget3_t PciPowerBudget3;

    /** @brief See  */
    RegDEVICEPciPowerBudget4_t PciPowerBudget4;

    /** @brief See  */
    RegDEVICEPciPowerBudget5_t PciPowerBudget5;

    /** @brief See  */
    RegDEVICEPciPowerBudget6_t PciPowerBudget6;

    /** @brief See  */
    RegDEVICEPciPowerBudget7_t PciPowerBudget7;

    /** @brief  */
    RegDEVICE6530_t _6530;

    /** @brief Reserved bytes to pad out data structure. */
    BCM5719_DEVICE_H_uint32_t reserved_25908[7];

    /** @brief The LSB in this undocumented and unknown register is set if the device is a LOM (LAN-on-Motherboard) design (i.e., builtin to a system and not an expansion card). */
    RegDEVICE6550_t _6550;

    /** @brief Reserved bytes to pad out data structure. */
    BCM5719_DEVICE_H_uint32_t reserved_25940[40];

    /** @brief  */
    RegDEVICE65f4_t _65f4;

    /** @brief Reserved bytes to pad out data structure. */
    BCM5719_DEVICE_H_uint32_t reserved_26104[130];

    /** @brief  */
    RegDEVICEGrcModeControl_t GrcModeControl;

    /** @brief Reserved bytes to pad out data structure. */
    BCM5719_DEVICE_H_uint32_t reserved_26628[1];

    /** @brief  */
    RegDEVICEMiscellaneousLocalControl_t MiscellaneousLocalControl;

    /** @brief 32-bit free-running counter */
    RegDEVICETimer_t Timer;

    /** @brief  */
    RegDEVICERxCpuEvent_t RxCpuEvent;

    /** @brief Reserved bytes to pad out data structure. */
    BCM5719_DEVICE_H_uint32_t reserved_26644[9];

    /** @brief Unknown. Used by PXE agent. */
    RegDEVICE6838_t _6838;

    /** @brief Reserved bytes to pad out data structure. */
    BCM5719_DEVICE_H_uint32_t reserved_26684[2];

    /** @brief The register manual only mentions this in the changelog; it was removed from the manual in a previous revision. :| */
    RegDEVICEMdiControl_t MdiControl;

    /** @brief Reserved bytes to pad out data structure. */
    BCM5719_DEVICE_H_uint32_t reserved_26696[19];

    /** @brief  */
    RegDEVICEFastBootProgramCounter_t FastBootProgramCounter;

    /** @brief Reserved bytes to pad out data structure. */
    BCM5719_DEVICE_H_uint32_t reserved_26776[21];

    /** @brief Expansion ROM base address, expect to be d- word aligned. */
    RegDEVICEExpansionRomAddr_t ExpansionRomAddr;

    /** @brief  */
    RegDEVICE68f0_t _68f0;

    /** @brief Reserved bytes to pad out data structure. */
    BCM5719_DEVICE_H_uint32_t reserved_26868[5];

    /** @brief  */
    RegDEVICEEavRefClockControl_t EavRefClockControl;

    /** @brief Reserved bytes to pad out data structure. */
    BCM5719_DEVICE_H_uint32_t reserved_26892[1214];

    /** @brief PCIe-related. tg3 driver calls this  */
    RegDEVICE7c04_t _7c04;

} DEVICE_t;

/** @brief Device Registers */
extern volatile DEVICE_t DEVICE;



#ifdef CXX_SIMULATOR /* Compiling c++ code - uses register wrappers */
#undef volatile
#endif /* CXX_SIMULATOR */

#undef register_container
#undef BITFIELD_BEGIN
#undef BITFIELD_MEMBER
#undef BITFIELD_END

#endif /* !BCM5719_DEVICE_H */

/** @} */