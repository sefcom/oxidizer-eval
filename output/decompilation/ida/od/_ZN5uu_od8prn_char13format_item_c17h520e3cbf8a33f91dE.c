__int64 __fastcall uu_od::prn_char::format_item_c(__int64 a1, unsigned __int8 *a2, unsigned __int64 a3)
{
  void *v5; // rax
  char ***v6; // rax
  char **v8; // r8
  __int64 v9; // rsi
  __int64 v10; // rax
  void *v11; // rax
  unsigned __int8 v12; // [rsp+7h] [rbp-71h] BYREF
  char **v13; // [rsp+8h] [rbp-70h] BYREF
  __int64 (__fastcall *v14)(); // [rsp+10h] [rbp-68h]
  void *v15; // [rsp+18h] [rbp-60h] BYREF
  __int64 v16; // [rsp+20h] [rbp-58h]
  char ***v17; // [rsp+28h] [rbp-50h]
  __int64 v18; // [rsp+30h] [rbp-48h]
  void *v19; // [rsp+38h] [rbp-40h]
  __int64 v20; // [rsp+40h] [rbp-38h]
  char ***v21; // [rsp+48h] [rbp-30h] BYREF
  __int128 v22; // [rsp+50h] [rbp-28h]
  __int128 v23; // [rsp+60h] [rbp-18h] BYREF

  if ( !a3 )
    core::panicking::panic_bounds_check(0LL, 0LL, &off_103808);
  v12 = *a2;
  if ( (v12 & 0x80u) != 0 )
  {
    if ( v12 < 0xC0u )
    {
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, asc_1B178, 4LL);
      return a1;
    }
    if ( (v12 & 0xE0) == 0xC0 && a3 != 1 )
    {
      v8 = &off_103820;
      v9 = 2LL;
    }
    else if ( (v12 & 0xF0) == 0xE0 && a3 >= 3 )
    {
      v8 = &off_103848;
      v9 = 3LL;
    }
    else
    {
      if ( (v12 & 0xF8) != 0xF0 || a3 < 4 )
      {
        v21 = (char ***)&v12;
        *(_QWORD *)&v22 = core::fmt::num::<impl core::fmt::Octal for u8>::fmt;
        v15 = &off_103838;
        v16 = 1LL;
        v5 = &unk_1D1F8;
        goto LABEL_4;
      }
      v8 = &off_103860;
      v9 = 4LL;
    }
    v10 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(0LL, v9, a2, a3, v8);
    core::str::converts::from_utf8(&v21, v10);
    if ( (_DWORD)v21 == 1 )
    {
      v13 = (char **)&v12;
      v14 = core::fmt::num::<impl core::fmt::Octal for u8>::fmt;
      v15 = &off_103838;
      v16 = 1LL;
      v11 = &unk_1D1F8;
    }
    else
    {
      v23 = v22;
      v13 = (char **)&v23;
      v14 = <&T as core::fmt::Display>::fmt;
      v15 = &unk_1A940;
      v16 = 1LL;
      v11 = &unk_1D150;
    }
    v19 = v11;
    v20 = 1LL;
    v6 = &v13;
    goto LABEL_17;
  }
  v13 = &(&uu_od::prn_char::C_CHARS)[2 * (char)v12];
  v21 = &v13;
  *(_QWORD *)&v22 = <&T as core::fmt::Display>::fmt;
  v15 = &unk_1A940;
  v16 = 1LL;
  v5 = &unk_1D150;
LABEL_4:
  v19 = v5;
  v20 = 1LL;
  v6 = (char ***)&v21;
LABEL_17:
  v17 = v6;
  v18 = 1LL;
  core::option::Option<T>::map_or_else(a1, &v15);
  return a1;
}