_QWORD *__fastcall uu_od::inputoffset::InputOffset::format_byte_offset(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rcx
  __int64 (__fastcall *v3)(); // rax
  __int64 (__fastcall *v4)(); // rax
  _UNKNOWN **v6; // [rsp+8h] [rbp-D0h] BYREF
  __int64 v7; // [rsp+10h] [rbp-C8h]
  __int64 **v8; // [rsp+18h] [rbp-C0h]
  __int64 v9; // [rsp+20h] [rbp-B8h]
  _QWORD *v10; // [rsp+28h] [rbp-B0h]
  __int64 v11; // [rsp+30h] [rbp-A8h]
  __int64 v12; // [rsp+38h] [rbp-A0h] BYREF
  __int64 *v13; // [rsp+40h] [rbp-98h] BYREF
  __int64 (__fastcall *v14)(); // [rsp+48h] [rbp-90h]
  __int64 *v15; // [rsp+50h] [rbp-88h]
  __int64 (__fastcall *v16)(); // [rsp+58h] [rbp-80h]
  _QWORD v17[2]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v18; // [rsp+70h] [rbp-68h]
  __int64 v19; // [rsp+78h] [rbp-60h]
  __int64 v20; // [rsp+80h] [rbp-58h]
  __int64 v21; // [rsp+88h] [rbp-50h]
  char v22; // [rsp+90h] [rbp-48h]
  __int64 v23; // [rsp+98h] [rbp-40h]
  __int64 v24; // [rsp+A8h] [rbp-30h]
  __int64 v25; // [rsp+B0h] [rbp-28h]
  __int64 v26; // [rsp+B8h] [rbp-20h]
  __int64 v27; // [rsp+C0h] [rbp-18h]
  char v28; // [rsp+C8h] [rbp-10h]

  v2 = *a2;
  switch ( *((_BYTE *)a2 + 24) )
  {
    case 0:
      if ( v2 )
      {
        v12 = a2[1];
        v13 = a2 + 2;
        v3 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
        goto LABEL_6;
      }
      v13 = a2 + 2;
      v4 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      goto LABEL_15;
    case 1:
      if ( v2 )
      {
        v12 = a2[1];
        v13 = a2 + 2;
        v14 = core::fmt::num::<impl core::fmt::UpperHex for usize>::fmt;
        v15 = &v12;
        v16 = core::fmt::num::<impl core::fmt::UpperHex for usize>::fmt;
        v17[0] = 2LL;
        v18 = 0LL;
        v19 = 6LL;
        v20 = 0LL;
        v21 = 0x800000020LL;
        v22 = 3;
        v23 = 2LL;
        v24 = 0LL;
        v25 = 6LL;
        goto LABEL_11;
      }
      v13 = a2 + 2;
      v14 = core::fmt::num::<impl core::fmt::UpperHex for usize>::fmt;
      v17[0] = 2LL;
      v18 = 0LL;
      v19 = 6LL;
      goto LABEL_17;
    case 2:
      if ( v2 )
      {
        v12 = a2[1];
        v13 = a2 + 2;
        v3 = core::fmt::num::<impl core::fmt::Octal for usize>::fmt;
LABEL_6:
        v14 = v3;
        v15 = &v12;
        v16 = v3;
        v17[0] = 2LL;
        v18 = 0LL;
        v19 = 7LL;
        v20 = 0LL;
        v21 = 0x800000020LL;
        v22 = 3;
        v23 = 2LL;
        v24 = 0LL;
        v25 = 7LL;
LABEL_11:
        v26 = 1LL;
        v27 = 0x800000020LL;
        v28 = 3;
        v6 = (_UNKNOWN **)&unk_1035D8;
        v7 = 3LL;
        v10 = v17;
        v11 = 2LL;
        v8 = &v13;
        v9 = 2LL;
        goto LABEL_19;
      }
      v13 = a2 + 2;
      v4 = core::fmt::num::<impl core::fmt::Octal for usize>::fmt;
LABEL_15:
      v14 = v4;
      v17[0] = 2LL;
      v18 = 0LL;
      v19 = 7LL;
LABEL_17:
      v20 = 0LL;
      v21 = 0x800000020LL;
      v22 = 3;
      v6 = (_UNKNOWN **)&anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
      v7 = 1LL;
      goto LABEL_18;
    case 3:
      if ( v2 )
      {
        v12 = a2[1];
        v13 = &v12;
        v14 = core::fmt::num::<impl core::fmt::Octal for usize>::fmt;
        v17[0] = 2LL;
        v18 = 0LL;
        v19 = 7LL;
        v20 = 0LL;
        v21 = 0x800000020LL;
        v22 = 3;
        v6 = &off_103608;
        v7 = 2LL;
LABEL_18:
        v10 = v17;
        v11 = 1LL;
        v8 = &v13;
        v9 = 1LL;
LABEL_19:
        alloc::fmt::format::format_inner(a1, &v6);
      }
      else
      {
        *a1 = 0LL;
        a1[1] = 1LL;
        a1[2] = 0LL;
      }
      return a1;
  }
}
