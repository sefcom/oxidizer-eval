__int64 __fastcall uu_runcon::set_next_exec_context(__int64 a1)
{
  int v1; // eax
  __int64 v2; // r15
  __int64 v3; // r14
  __int64 v4; // r12
  char v5; // al
  int v6; // ecx
  __int128 v7; // xmm0
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  _QWORD v14[3]; // [rsp+0h] [rbp-88h] BYREF
  __int16 v15; // [rsp+18h] [rbp-70h]
  _BYTE v16[64]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v17; // [rsp+60h] [rbp-28h]

  selinux::OpaqueSecurityContext::to_c_string(v16);
  v1 = *(_DWORD *)v16;
  if ( *(_DWORD *)v16 == 10 )
  {
    v2 = *(_QWORD *)&v16[8];
    v3 = *(_QWORD *)&v16[16];
    v4 = *(_QWORD *)&v16[16] - 1LL;
    v14[2] = *(_QWORD *)&v16[8];
    v14[0] = 1LL;
    v14[1] = *(_QWORD *)&v16[16] - 1LL;
    v15 = 0;
    v5 = ((__int64 (__fastcall *)(_QWORD *))selinux::SecurityContext::check)(v14);
    if ( v5 == 2 || (v5 & 1) == 0 )
    {
      uu_runcon::errors::Error::from_io1((__int64)v16, (__int64)aCheckingSecuri, 25LL, v2, v4, 0x1400000003LL);
      *(_QWORD *)(a1 + 64) = v17;
      v8 = *(_OWORD *)v16;
      v9 = *(_OWORD *)&v16[16];
      v10 = *(_OWORD *)&v16[32];
      *(_OWORD *)(a1 + 48) = *(_OWORD *)&v16[48];
      *(_OWORD *)(a1 + 32) = v10;
      *(_OWORD *)(a1 + 16) = v9;
      *(_OWORD *)a1 = v8;
      core::ptr::drop_in_place<selinux::SecurityContext>(v14);
    }
    else
    {
      selinux::SecurityContext::set_for_next_exec(v16, v14);
      if ( *(_DWORD *)v16 == 10 )
      {
        *(_DWORD *)a1 = 17;
      }
      else
      {
        *(_QWORD *)(a1 + 48) = *(_QWORD *)&v16[48];
        v11 = *(_OWORD *)v16;
        v12 = *(_OWORD *)&v16[16];
        *(_OWORD *)(a1 + 32) = *(_OWORD *)&v16[32];
        *(_OWORD *)(a1 + 16) = v12;
        *(_OWORD *)a1 = v11;
        *(_QWORD *)(a1 + 56) = aSettingNewSecu;
        *(_QWORD *)(a1 + 64) = 28LL;
      }
      core::ptr::drop_in_place<selinux::SecurityContext>(v14);
    }
    core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v2, v3);
  }
  else
  {
    v6 = *(_DWORD *)&v16[4];
    v7 = *(_OWORD *)&v16[8];
    *(_OWORD *)(a1 + 24) = *(_OWORD *)&v16[24];
    *(_OWORD *)(a1 + 40) = *(_OWORD *)&v16[40];
    *(_DWORD *)a1 = v1;
    *(_DWORD *)(a1 + 4) = v6;
    *(_OWORD *)(a1 + 8) = v7;
    *(_QWORD *)(a1 + 56) = aCreatingNewCon;
    *(_QWORD *)(a1 + 64) = 20LL;
  }
  return a1;
}