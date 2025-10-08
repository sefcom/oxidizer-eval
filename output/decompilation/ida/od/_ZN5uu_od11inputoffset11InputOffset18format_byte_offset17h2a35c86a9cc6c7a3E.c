_QWORD *__fastcall uu_od::inputoffset::InputOffset::format_byte_offset(_QWORD *a1, char *a2)
{
  char v2; // cl
  __int64 (__fastcall *v3)(); // rax
  void *v4; // rax
  __int64 (__fastcall *v5)(); // rax
  void *v7; // rax
  _UNKNOWN **v8; // [rsp+8h] [rbp-60h] BYREF
  __int64 v9; // [rsp+10h] [rbp-58h]
  __int64 **v10; // [rsp+18h] [rbp-50h]
  __int64 v11; // [rsp+20h] [rbp-48h]
  void *v12; // [rsp+28h] [rbp-40h]
  __int64 v13; // [rsp+30h] [rbp-38h]
  __int64 v14; // [rsp+38h] [rbp-30h] BYREF
  __int64 *v15; // [rsp+40h] [rbp-28h] BYREF
  __int64 (__fastcall *v16)(); // [rsp+48h] [rbp-20h]
  __int64 *v17; // [rsp+50h] [rbp-18h]
  __int64 (__fastcall *v18)(); // [rsp+58h] [rbp-10h]

  v2 = *a2;
  switch ( a2[24] )
  {
    case 0:
      if ( (v2 & 1) != 0 )
      {
        v14 = *((_QWORD *)a2 + 1);
        v15 = (__int64 *)(a2 + 16);
        v3 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
        goto LABEL_6;
      }
      v15 = (__int64 *)(a2 + 16);
      v5 = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      goto LABEL_15;
    case 1:
      if ( (v2 & 1) != 0 )
      {
        v14 = *((_QWORD *)a2 + 1);
        v15 = (__int64 *)(a2 + 16);
        v16 = core::fmt::num::<impl core::fmt::UpperHex for usize>::fmt;
        v17 = &v14;
        v18 = core::fmt::num::<impl core::fmt::UpperHex for usize>::fmt;
        v8 = (_UNKNOWN **)&unk_1023C8;
        v9 = 3LL;
        v4 = &unk_1CD18;
        goto LABEL_11;
      }
      v15 = (__int64 *)(a2 + 16);
      v16 = core::fmt::num::<impl core::fmt::UpperHex for usize>::fmt;
      v8 = (_UNKNOWN **)&unk_1A940;
      v9 = 1LL;
      v7 = &unk_1CCE8;
      goto LABEL_18;
    case 2:
      if ( (v2 & 1) == 0 )
      {
        v15 = (__int64 *)(a2 + 16);
        v5 = core::fmt::num::<impl core::fmt::Octal for usize>::fmt;
LABEL_15:
        v16 = v5;
        v8 = (_UNKNOWN **)&unk_1A940;
        v9 = 1LL;
        goto LABEL_16;
      }
      v14 = *((_QWORD *)a2 + 1);
      v15 = (__int64 *)(a2 + 16);
      v3 = core::fmt::num::<impl core::fmt::Octal for usize>::fmt;
LABEL_6:
      v16 = v3;
      v17 = &v14;
      v18 = v3;
      v8 = (_UNKNOWN **)&unk_1023C8;
      v9 = 3LL;
      v4 = &unk_1CC88;
LABEL_11:
      v12 = v4;
      v13 = 2LL;
      v10 = &v15;
      v11 = 2LL;
      goto LABEL_19;
    case 3:
      if ( (v2 & 1) != 0 )
      {
        v14 = *((_QWORD *)a2 + 1);
        v15 = &v14;
        v16 = core::fmt::num::<impl core::fmt::Octal for usize>::fmt;
        v8 = &off_1023F8;
        v9 = 2LL;
LABEL_16:
        v7 = &unk_1CC50;
LABEL_18:
        v12 = v7;
        v13 = 1LL;
        v10 = &v15;
        v11 = 1LL;
LABEL_19:
        core::option::Option<T>::map_or_else(a1, &v8);
        return a1;
      }
      else
      {
        *a1 = 0LL;
        a1[1] = 1LL;
        a1[2] = 0LL;
        return a1;
      }
  }
}