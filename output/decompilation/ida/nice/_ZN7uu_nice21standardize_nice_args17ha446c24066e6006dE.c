__int64 __fastcall uu_nice::standardize_nice_args(__int64 a1, __int64 a2, __int64 a3)
{
  bool v3; // bl
  __int64 v4; // r13
  __int64 v5; // rbp
  __int64 v6; // r15
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // r15
  __int64 v13; // rbx
  char v15; // [rsp+Ch] [rbp-17Ch]
  _BYTE v16[24]; // [rsp+10h] [rbp-178h] BYREF
  __int64 v17; // [rsp+28h] [rbp-160h]
  __int64 v18; // [rsp+38h] [rbp-150h]
  _QWORD v19[3]; // [rsp+40h] [rbp-148h] BYREF
  __int64 v20; // [rsp+58h] [rbp-130h]
  _BYTE v21[24]; // [rsp+60h] [rbp-128h] BYREF
  __int64 v22; // [rsp+78h] [rbp-110h]
  __int128 v23; // [rsp+80h] [rbp-108h] BYREF
  __int64 v24; // [rsp+90h] [rbp-F8h]
  __int128 v25; // [rsp+A0h] [rbp-E8h] BYREF
  __int64 v26; // [rsp+B8h] [rbp-D0h]
  __int128 v27; // [rsp+C0h] [rbp-C8h] BYREF
  __int64 v28; // [rsp+D0h] [rbp-B8h]
  __int128 v29; // [rsp+E0h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+F0h] [rbp-98h]
  _QWORD v31[3]; // [rsp+100h] [rbp-88h] BYREF
  __int128 v32; // [rsp+118h] [rbp-70h] BYREF
  __int64 v33; // [rsp+128h] [rbp-60h]
  __int128 v34; // [rsp+130h] [rbp-58h] BYREF
  _BYTE v35[72]; // [rsp+140h] [rbp-48h] BYREF

  *(_QWORD *)&v25 = a2;
  *((_QWORD *)&v25 + 1) = a3;
  v19[0] = 0LL;
  v19[1] = 8LL;
  v19[2] = 0LL;
  <core::iter::adapters::cloned::Cloned<I> as core::iter::traits::iterator::Iterator>::next(v31, &v25);
  if ( __OFSUB__(0LL, v31[0]) )
    core::ptr::drop_in_place<core::option::Option<std::ffi::os_str::OsString>>(0x8000000000000000LL, v31[1]);
  else
    alloc::vec::Vec<T,A>::push(v19, v31, &off_DAD98);
  v26 = a1;
  v34 = v25;
  v3 = 0;
  v15 = 0;
  while ( 1 )
  {
    <core::iter::adapters::cloned::Cloned<I> as core::iter::traits::iterator::Iterator>::next(&v32, &v34);
    v4 = v32;
    if ( (_QWORD)v32 == 0x8000000000000000LL )
      break;
    v5 = *((_QWORD *)&v32 + 1);
    v6 = v33;
    if ( v3 )
    {
      *(_OWORD *)v16 = v32;
      *(_QWORD *)&v16[16] = v33;
      alloc::vec::Vec<T,A>::push(v19, v16, &off_DAE40);
      goto LABEL_6;
    }
    if ( (v15 & 1) != 0 )
    {
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v16, aN, 2LL);
      v28 = *(_QWORD *)&v16[16];
      v27 = *(_OWORD *)v16;
      *(_QWORD *)v16 = v4;
      *(_QWORD *)&v16[8] = v5;
      *(_QWORD *)&v16[16] = v6;
      std::ffi::os_str::OsString::push(&v27, v16);
      v3 = 0;
      alloc::vec::Vec<T,A>::push(v19, &v27, &off_DAE28);
      v15 = 0;
    }
    else
    {
      core::str::converts::from_utf8(v16, *((_QWORD *)&v32 + 1), v33);
      if ( (v16[0] & 1) == 0
        && (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                              *(_QWORD *)&v16[8],
                              *(_QWORD *)&v16[16],
                              aN,
                              2LL)
        || (core::str::converts::from_utf8(v16, v5, v6), (v16[0] & 1) == 0)
        && (unsigned __int8)uu_nice::is_prefix_of(*(_QWORD *)&v16[8], *(_QWORD *)&v16[16], aAdjustment, 12LL, 3LL) )
      {
        v15 = 1;
        v3 = 0;
        goto LABEL_23;
      }
      <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v35, v5, v6);
      alloc::string::String::from_utf8(v16, v35);
      if ( *(_QWORD *)v16 == 0x8000000000000000LL )
      {
        v24 = v17;
        v23 = *(_OWORD *)&v16[8];
        v22 = v17;
        *(_OWORD *)&v21[8] = *(_OWORD *)&v16[8];
        *(_QWORD *)v21 = 0LL;
        v7 = *(_QWORD *)&v16[16];
        v18 = *(_QWORD *)&v16[8];
        v8 = v17;
        *(_DWORD *)v16 = 0;
        v9 = core::char::methods::encode_utf8_raw(v16);
        v10 = <&str as core::str::pattern::Pattern>::strip_prefix_of(v9, v7, v8);
        v3 = v10 == 0;
        if ( v10 )
        {
          v20 = v7;
          core::num::<impl i64>::from_ascii_radix(&v23, v10);
          if ( (_BYTE)v23 )
          {
            *(_QWORD *)v16 = v18;
            *(_QWORD *)&v16[8] = v20;
            *(_QWORD *)&v16[16] = v8;
            alloc::vec::Vec<T,A>::push(v19, v16, &off_DADE0);
          }
          else
          {
            v11 = *((_QWORD *)&v23 + 1);
            v12 = v20;
            <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v16, aN, 2LL);
            v30 = *(_QWORD *)&v16[16];
            v29 = *(_OWORD *)v16;
            <i64 as alloc::string::SpecToString>::spec_to_string(v16, v11);
            std::ffi::os_str::OsString::push(&v29, v16);
            alloc::vec::Vec<T,A>::push(v19, &v29, &off_DADC8);
            core::ptr::drop_in_place<alloc::string::String>(v18, v12);
          }
        }
        else
        {
          *(_QWORD *)v16 = v18;
          *(_QWORD *)&v16[8] = v7;
          *(_QWORD *)&v16[16] = v8;
          alloc::vec::Vec<T,A>::push(v19, v16, &off_DADF8);
        }
LABEL_23:
        core::ptr::drop_in_place<std::ffi::os_str::OsString>(v4, v5);
      }
      else
      {
        v24 = *(_QWORD *)&v16[16];
        v23 = *(_OWORD *)v16;
        v22 = *(_QWORD *)&v16[16];
        *(_OWORD *)&v21[8] = *(_OWORD *)v16;
        *(_QWORD *)v21 = 1LL;
        core::ptr::drop_in_place<clap_builder::error::Message>(v21);
        *(_QWORD *)v16 = v4;
        *(_QWORD *)&v16[8] = v5;
        *(_QWORD *)&v16[16] = v6;
        alloc::vec::Vec<T,A>::push(v19, v16, &off_DAE10);
LABEL_6:
        v3 = 1;
      }
    }
  }
  v13 = v26;
  if ( (v15 & 1) != 0 )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v16, aN, 2LL);
    *(_QWORD *)&v21[16] = *(_QWORD *)&v16[16];
    *(_OWORD *)v21 = *(_OWORD *)v16;
    alloc::vec::Vec<T,A>::push(v19, v21, &off_DADB0);
  }
  return <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v13, v19);
}