const char *__fastcall uu_runcon::get_transition_context(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  unsigned int v5; // ebp
  const char *result; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  int v11; // eax
  __int128 v12; // xmm0
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  _BYTE v17[56]; // [rsp+8h] [rbp-F0h] BYREF
  _OWORD v18[2]; // [rsp+40h] [rbp-B8h] BYREF
  __int128 v19; // [rsp+60h] [rbp-98h]
  __int128 v20; // [rsp+70h] [rbp-88h]
  int v21; // [rsp+80h] [rbp-78h]
  _OWORD v22[4]; // [rsp+90h] [rbp-68h] BYREF
  int v23; // [rsp+D0h] [rbp-28h]

  selinux::SecurityClass::from_name(v17, aProcess, 7LL);
  v4 = *(_DWORD *)v17;
  v5 = *(unsigned __int16 *)&v17[4];
  if ( *(_DWORD *)v17 == 10 )
  {
    selinux::SecurityContext::of_path(v17, a2, a3);
    if ( *(_DWORD *)v17 == 10 )
    {
      if ( *(_DWORD *)&v17[8] == 2 )
      {
        return (const char *)uu_runcon::errors::Error::from_io1(
                               a1,
                               (__int64)aGetfilecon_1,
                               10LL,
                               a2,
                               a3,
                               0x3D00000002LL);
      }
      else
      {
        v18[1] = *(_OWORD *)&v17[24];
        v18[0] = *(_OWORD *)&v17[8];
        selinux::SecurityContext::current(v17, 0LL);
        v11 = *(_DWORD *)v17;
        if ( *(_DWORD *)v17 == 10 )
        {
          v22[0] = *(_OWORD *)&v17[8];
          v22[1] = *(_OWORD *)&v17[24];
          selinux::SecurityContext::of_labeling_decision(v17, v22, v18, v5, 1LL, 0LL);
          if ( *(_DWORD *)v17 == 10 )
          {
            v12 = *(_OWORD *)&v17[8];
            *(_OWORD *)(a1 + 24) = *(_OWORD *)&v17[24];
            *(_OWORD *)(a1 + 8) = v12;
            *(_DWORD *)a1 = 17;
          }
          else
          {
            *(_QWORD *)(a1 + 48) = *(_QWORD *)&v17[48];
            v15 = *(_OWORD *)v17;
            v16 = *(_OWORD *)&v17[16];
            *(_OWORD *)(a1 + 32) = *(_OWORD *)&v17[32];
            *(_OWORD *)(a1 + 16) = v16;
            *(_OWORD *)a1 = v15;
            *(_QWORD *)(a1 + 56) = aComputingResul;
            *(_QWORD *)(a1 + 64) = 38LL;
          }
          core::ptr::drop_in_place<selinux::SecurityContext>(v22);
        }
        else
        {
          v21 = *(_DWORD *)&v17[36];
          v20 = *(_OWORD *)&v17[20];
          v19 = *(_OWORD *)&v17[4];
          *(_OWORD *)(a1 + 40) = *(_OWORD *)&v17[40];
          v13 = v19;
          v14 = v20;
          v22[2] = v19;
          v22[3] = v20;
          v23 = v21;
          *(_DWORD *)(a1 + 36) = v21;
          *(_OWORD *)(a1 + 20) = v14;
          *(_OWORD *)(a1 + 4) = v13;
          *(_DWORD *)a1 = v11;
          *(_QWORD *)(a1 + 56) = aGettingSecurit;
          *(_QWORD *)(a1 + 64) = 47LL;
        }
        return (const char *)core::ptr::drop_in_place<selinux::SecurityContext>(v18);
      }
    }
    else
    {
      *(_QWORD *)(a1 + 48) = *(_QWORD *)&v17[48];
      v9 = *(_OWORD *)v17;
      v10 = *(_OWORD *)&v17[16];
      *(_OWORD *)(a1 + 32) = *(_OWORD *)&v17[32];
      *(_OWORD *)(a1 + 16) = v10;
      *(_OWORD *)a1 = v9;
      result = aGettingSecurit_0;
      *(_QWORD *)(a1 + 56) = aGettingSecurit_0;
      *(_QWORD *)(a1 + 64) = 40LL;
    }
  }
  else
  {
    *(_WORD *)(a1 + 54) = *(_WORD *)&v17[54];
    v7 = *(_OWORD *)&v17[6];
    v8 = *(_OWORD *)&v17[22];
    *(_OWORD *)(a1 + 38) = *(_OWORD *)&v17[38];
    *(_OWORD *)(a1 + 22) = v8;
    *(_OWORD *)(a1 + 6) = v7;
    *(_DWORD *)a1 = v4;
    *(_WORD *)(a1 + 4) = v5;
    result = aGettingProcess;
    *(_QWORD *)(a1 + 56) = aGettingProcess;
    *(_QWORD *)(a1 + 64) = 30LL;
  }
  return result;
}