void *__fastcall uu_fold::fold_file_bytewise(_QWORD *a1, int a2, unsigned __int64 a3)
{
  _QWORD *v3; // r15
  __int64 v4; // rax
  void *v5; // rbx
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rbx
  __int64 v8; // r14
  unsigned __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rbp
  __int64 v13; // r12
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rdx
  unsigned __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v21; // [rsp+8h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+10h] [rbp-A8h]
  unsigned __int64 v23; // [rsp+18h] [rbp-A0h]
  void *v24; // [rsp+20h] [rbp-98h] BYREF
  __int64 v25; // [rsp+28h] [rbp-90h]
  _QWORD **v26; // [rsp+30h] [rbp-88h]
  __int128 v27; // [rsp+38h] [rbp-80h]
  int v28; // [rsp+54h] [rbp-64h]
  unsigned __int64 v29; // [rsp+58h] [rbp-60h]
  unsigned __int64 v30; // [rsp+60h] [rbp-58h]
  _QWORD *v31; // [rsp+68h] [rbp-50h] BYREF
  __int64 (__fastcall *v32)(); // [rsp+70h] [rbp-48h]
  _QWORD v33[8]; // [rsp+78h] [rbp-40h] BYREF

  v29 = a3;
  v28 = a2;
  v3 = a1;
  v21 = 0LL;
  v22 = 1LL;
  v23 = 0LL;
  while ( 1 )
  {
    v4 = std::io::append_to_string(&v21, v3);
    <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
      &v24,
      v4);
    v5 = v24;
    if ( v24 || !v25 )
      break;
    v6 = v23;
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v22, v23, asc_19423, 1LL) )
    {
      v24 = &off_E6B90;
      v25 = 1LL;
      v26 = (_QWORD **)&byte_8;
      v27 = 0LL;
      std::io::stdio::_print(&v24);
    }
    else if ( v6 )
    {
      v7 = v29;
      v30 = v6;
      if ( v6 < v29 )
        v7 = v6;
      v8 = v22;
      v9 = v23;
      v10 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
              0LL,
              v7,
              v22,
              v23);
      if ( !v10 )
      {
        v14 = 0LL;
LABEL_27:
        core::str::slice_error_fail(v8, v9, v14, v7, &off_E6BC0);
      }
      v12 = v10;
      v13 = v11;
      v14 = 0LL;
      while ( 1 )
      {
        if ( (_BYTE)v28 )
        {
          v15 = v30;
          if ( v7 < v30 && (core::str::<impl str>::rfind(v12, v13) & 1) != 0 )
          {
            v24 = 0LL;
            v25 = v16;
            LOBYTE(v26) = 0;
            v12 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeInclusive<usize>>::index(
                    &v24,
                    v12,
                    v13);
            v13 = v17;
          }
        }
        else
        {
          v15 = v30;
        }
        v33[0] = v12;
        v33[1] = v13;
        if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v12, v13, asc_19423, 1LL) )
          break;
        v14 += v13;
        v18 = v15 - v14;
        if ( v15 <= v14 )
        {
          v31 = v33;
          v32 = <&T as core::fmt::Display>::fmt;
          v24 = &unk_17F60;
          v25 = 1LL;
          v26 = &v31;
          v27 = 1uLL;
          std::io::stdio::_print(&v24);
          break;
        }
        v31 = v33;
        v32 = <&T as core::fmt::Display>::fmt;
        v24 = &unk_E6BA0;
        v25 = 2LL;
        v26 = &v31;
        v27 = 1uLL;
        std::io::stdio::_print(&v24);
        if ( v18 >= v29 )
          v18 = v29;
        v7 = v14 + v18;
        v8 = v22;
        v9 = v23;
        v12 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                v14,
                v7,
                v22,
                v23);
        v13 = v19;
        if ( !v12 )
          goto LABEL_27;
      }
      v3 = a1;
    }
    alloc::string::String::truncate(&v21);
  }
  core::ptr::drop_in_place<alloc::string::String>(v21, v22);
  core::ptr::drop_in_place<std::io::buffered::bufreader::BufReader<&mut dyn std::io::Read>>(*v3, v3[1]);
  return v5;
}