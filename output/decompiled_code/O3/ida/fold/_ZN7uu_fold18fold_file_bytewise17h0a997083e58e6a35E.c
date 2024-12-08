void *__fastcall uu_fold::fold_file_bytewise(_QWORD *a1, int a2, unsigned __int64 a3)
{
  _QWORD *v3; // r15
  __int64 v4; // rax
  void *v5; // rbx
  unsigned __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rbp
  __int64 v11; // r12
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rdx
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // r13
  __int64 v18; // rdx
  __int64 v20; // [rsp+8h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+10h] [rbp-A8h]
  unsigned __int64 v22; // [rsp+18h] [rbp-A0h]
  void *v23; // [rsp+20h] [rbp-98h] BYREF
  __int64 v24; // [rsp+28h] [rbp-90h]
  __int64 **v25; // [rsp+30h] [rbp-88h]
  __int128 v26; // [rsp+38h] [rbp-80h]
  int v27; // [rsp+54h] [rbp-64h]
  __int64 v28; // [rsp+58h] [rbp-60h] BYREF
  __int64 v29; // [rsp+60h] [rbp-58h]
  unsigned __int64 v30; // [rsp+68h] [rbp-50h]
  unsigned __int64 v31; // [rsp+70h] [rbp-48h]
  __int64 *v32; // [rsp+78h] [rbp-40h] BYREF
  __int64 (__fastcall *v33)(); // [rsp+80h] [rbp-38h]

  v30 = a3;
  v27 = a2;
  v3 = a1;
  v20 = 0LL;
  v21 = 1LL;
  v22 = 0LL;
  while ( 1 )
  {
    v4 = std::io::append_to_string(&v20, v3);
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
      &v23,
      v4);
    v5 = v23;
    if ( v23 || !v24 )
      break;
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v21, v22, asc_1D264, 1LL) )
    {
      v23 = &off_11BC18;
      v24 = 1LL;
      v25 = (__int64 **)&byte_8;
      v26 = 0LL;
      std::io::stdio::_print(&v23);
    }
    else if ( v22 )
    {
      v6 = v30;
      if ( v22 < v30 )
        v6 = v22;
      v7 = v21;
      v31 = v22;
      v8 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
             0LL,
             v6,
             v21);
      if ( !v8 )
      {
        v12 = 0LL;
        v17 = v31;
LABEL_26:
        core::str::slice_error_fail(v7, v17, v12, v6, &off_11BC28);
      }
      v10 = v8;
      v11 = v9;
      v12 = 0LL;
      while ( 1 )
      {
        v13 = v31;
        if ( v6 < v31 && (_BYTE)v27 && core::str::<impl str>::rfind(v10, v11) )
        {
          v23 = 0LL;
          v24 = v14;
          LOBYTE(v25) = 0;
          v10 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeInclusive<usize>>::index(
                  &v23,
                  v10,
                  v11);
          v11 = v15;
        }
        v28 = v10;
        v29 = v11;
        if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v10, v11, asc_1D264, 1LL) )
          break;
        v12 += v29;
        v16 = v13 - v12;
        if ( v13 <= v12 )
        {
          v32 = &v28;
          v33 = <&T as core::fmt::Display>::fmt;
          v23 = &unk_14850;
          v24 = 1LL;
          v25 = &v32;
          v26 = 1uLL;
          std::io::stdio::_print(&v23);
          break;
        }
        v32 = &v28;
        v33 = <&T as core::fmt::Display>::fmt;
        v23 = &unk_11BC58;
        v24 = 2LL;
        v25 = &v32;
        v26 = 1uLL;
        std::io::stdio::_print(&v23);
        if ( v16 >= v30 )
          v16 = v30;
        v6 = v12 + v16;
        v7 = v21;
        v17 = v22;
        v10 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                v12,
                v6,
                v21);
        v11 = v18;
        if ( !v10 )
          goto LABEL_26;
      }
      v3 = a1;
    }
    alloc::string::String::truncate(&v20);
  }
  core::ptr::drop_in_place<alloc::string::String>(&v20);
  core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<&mut dyn std::io::Read>>(*v3, v3[1]);
  return v5;
}
