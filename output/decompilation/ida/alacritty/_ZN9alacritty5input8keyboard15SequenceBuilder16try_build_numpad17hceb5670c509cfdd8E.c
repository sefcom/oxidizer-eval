void __fastcall alacritty::input::keyboard::SequenceBuilder::try_build_numpad(__int64 a1, char a2, __int64 a3)
{
  unsigned int v3; // eax
  int v4; // ecx
  char *v5; // r14
  __int64 v6; // r14
  __int64 v7; // r15
  _BYTE v8[2]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int16 v9; // [rsp+2h] [rbp-36h]
  __int64 v10; // [rsp+8h] [rbp-30h]
  __int64 v11; // [rsp+10h] [rbp-28h]

  if ( (a2 & 1) == 0 || *(_BYTE *)(a3 + 122) != 3 )
  {
    *(_QWORD *)a1 = 0x8000000000000001LL;
    return;
  }
  winit::keyboard::Key::as_ref(v8, a3);
  if ( v8[0] == 32 )
  {
    v6 = v10;
    v7 = v11;
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v10, v11, a0_2, 1LL) )
    {
      v5 = &a57414574205741[130];
      goto LABEL_41;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, a1_1, 1LL) )
    {
      v5 = &a57414574205741[125];
      goto LABEL_41;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, a2_0, 1LL) )
    {
      v5 = &a57414574205741[120];
      goto LABEL_41;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, a3_0, 1LL) )
    {
      v5 = &a57414574205741[115];
      goto LABEL_41;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, a4_1, 1LL) )
    {
      v5 = &a57414574205741[110];
      goto LABEL_41;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, a5_0, 1LL) )
    {
      v5 = &a57414574205741[105];
      goto LABEL_41;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, a6, 1LL) )
    {
      v5 = &a57414574205741[100];
      goto LABEL_41;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, a7, 1LL) )
    {
      v5 = &a57414574205741[95];
      goto LABEL_41;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, a8_0, 1LL) )
    {
      v5 = &a57414574205741[90];
      goto LABEL_41;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, a9_0, 1LL) )
    {
      v5 = &a57414574205741[85];
      goto LABEL_41;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, asc_101A8C, 1LL) )
    {
      v5 = &a57414574205741[80];
      goto LABEL_41;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, asc_FF45E, 1LL) )
    {
      v5 = &a57414574205741[75];
      goto LABEL_41;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, asc_101A78, 1LL) )
    {
      v5 = &a57414574205741[70];
      goto LABEL_41;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, asc_F76B5, 1LL) )
    {
      v5 = &a57414574205741[65];
      goto LABEL_41;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, asc_101A83, 1LL) )
    {
      v5 = &a57414574205741[60];
      goto LABEL_41;
    }
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v7, asc_FFF75, 1LL) )
    {
      v5 = &a57414574205741[55];
      goto LABEL_41;
    }
  }
  else if ( v8[0] == 31 )
  {
    v3 = v9 - 14;
    if ( (unsigned __int16)(v9 - 14) < 0x14u )
    {
      v4 = 591865;
      if ( _bittest(&v4, v3) )
      {
        v5 = (&off_887798)[(unsigned __int16)v3];
LABEL_41:
        core::ptr::drop_in_place<winit::keyboard::Key<&str>>(v8);
        *(_QWORD *)a1 = 0x8000000000000000LL;
        *(_QWORD *)(a1 + 8) = v5;
        *(_QWORD *)(a1 + 16) = 5LL;
        *(_DWORD *)(a1 + 24) = (_DWORD)&unk_110000;
        return;
      }
    }
  }
  *(_QWORD *)a1 = 0x8000000000000001LL;
  core::ptr::drop_in_place<winit::keyboard::Key<&str>>(v8);
}