__int64 __fastcall firecracker::build_microvm_from_json(
        char *dest,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  char v13; // al
  __int64 v14; // r12
  int v15; // ecx
  __int64 v16; // rcx
  _BYTE v18[55]; // [rsp+10h] [rbp-398h]
  __int128 v19; // [rsp+30h] [rbp-378h]
  __int64 v20; // [rsp+47h] [rbp-361h]
  _QWORD v22[5]; // [rsp+60h] [rbp-348h] BYREF
  __int64 v23; // [rsp+88h] [rbp-320h] BYREF
  _BYTE v24[64]; // [rsp+90h] [rbp-318h]
  _BYTE src[304]; // [rsp+D0h] [rbp-2D8h] BYREF
  _QWORD v26[53]; // [rsp+200h] [rbp-1A8h] BYREF

  vmm::resources::VmResources::from_json(&v23, a10);
  if ( __OFSUB__(-v23, 1LL) )
  {
    v20 = *(_QWORD *)&v24[48];
    *(_OWORD *)&v18[39] = *(_OWORD *)&v24[32];
    *(_OWORD *)&v18[23] = *(_OWORD *)&v24[16];
    *(_OWORD *)&v18[7] = *(_OWORD *)v24;
    *((_QWORD *)dest + 7) = *(_QWORD *)&v24[40];
    *((_QWORD *)dest + 8) = v20;
    *(_OWORD *)(dest + 41) = *(_OWORD *)&v18[32];
    *(_OWORD *)(dest + 25) = *(_OWORD *)&v18[16];
    *(_OWORD *)(dest + 9) = *(_OWORD *)v18;
    dest[8] = 27;
    *(_QWORD *)dest = 0x8000000000000000LL;
  }
  else
  {
    v19 = *(_OWORD *)&v24[33];
    HIBYTE(v19) = v24[48];
    memcpy(&v26[9], src, 0x130uLL);
    *(_OWORD *)((char *)&v26[1] + 1) = *(_OWORD *)&v24[1];
    *(_OWORD *)((char *)&v26[3] + 1) = *(_OWORD *)&v24[17];
    *(_OWORD *)((char *)&v26[5] + 1) = v19;
    *(_OWORD *)&v26[7] = *(_OWORD *)&v24[48];
    v26[0] = v23;
    LOBYTE(v26[1]) = v24[0];
    LOBYTE(v26[46]) = a6;
    BYTE1(v26[46]) = a7;
    vmm::builder::build_and_boot_microvm(&v23, a5, v26, a3, a2);
    v13 = v23;
    if ( (_BYTE)v23 == 27 )
    {
      v14 = *(_QWORD *)v24;
      if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 3 )
      {
        v23 = (__int64)&off_3A4138;
        *(_QWORD *)v24 = 1LL;
        *(_QWORD *)&v24[8] = 8LL;
        *(_OWORD *)&v24[16] = 0LL;
        v22[0] = aFirecracker;
        v22[1] = 11LL;
        v22[2] = aFirecracker;
        v22[3] = 11LL;
        v22[4] = log::__private_api::loc(&off_3A4148);
        log::__private_api::log_impl(&v23, 3LL, v22);
      }
      memcpy(dest, v26, 0x178uLL);
      *((_QWORD *)dest + 47) = v14;
    }
    else
    {
      v15 = *(_DWORD *)((char *)&v23 + 1);
      *((_DWORD *)dest + 3) = HIDWORD(v23);
      *(_DWORD *)(dest + 9) = v15;
      v16 = *(_QWORD *)v24;
      *(_OWORD *)(dest + 40) = *(_OWORD *)&v24[24];
      *(_OWORD *)(dest + 56) = *(_OWORD *)&v24[40];
      *(_OWORD *)(dest + 24) = *(_OWORD *)&v24[8];
      dest[8] = v13;
      *((_QWORD *)dest + 2) = v16;
      *(_QWORD *)dest = 0x8000000000000000LL;
      core::ptr::drop_in_place<vmm::resources::VmResources>(v26);
    }
  }
  core::ptr::drop_in_place<vmm::vmm_config::instance_info::InstanceInfo>(a5);
  return core::ptr::drop_in_place<alloc::string::String>(a4);
}