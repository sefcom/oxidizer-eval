        __int64 a6)
{
  unsigned __int64 v8; // r15
  __int64 v9; // r13
  __int64 v10; // rbp
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rbx
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // r14
  __int64 v17; // rax
  char v18; // al
  __int64 contiguous; // rax
  __int64 v20; // rdx
  unsigned __int64 v22; // [rsp+8h] [rbp-100h] BYREF
  __int64 v23; // [rsp+10h] [rbp-F8h]
  __int64 v24; // [rsp+18h] [rbp-F0h]
  __int64 v25; // [rsp+20h] [rbp-E8h]
  char **v26; // [rsp+28h] [rbp-E0h]
  __int64 v27; // [rsp+30h] [rbp-D8h]
  __int64 v28; // [rsp+38h] [rbp-D0h]
  __int64 v29; // [rsp+40h] [rbp-C8h] BYREF
  char v30[8]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v31; // [rsp+50h] [rbp-B8h]
  __int64 v32; // [rsp+58h] [rbp-B0h]
  _QWORD v33[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v34; // [rsp+70h] [rbp-98h]
  _QWORD v35[2]; // [rsp+80h] [rbp-88h] BYREF
  __int128 v36; // [rsp+90h] [rbp-78h]
  __int128 v37; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v38; // [rsp+B0h] [rbp-58h]
  int v39; // [rsp+B8h] [rbp-50h]
  __int128 v40; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v41; // [rsp+D0h] [rbp-38h]

  v29 = a2;
  v27 = a3;
  v28 = a4;
  v8 = (*(__int64 (__fastcall **)(__int64))(a4 + 48))(a3) << 10;
  if ( !v8 )
    core::panicking::panic(aAssertionFaile, 46LL, &off_147500);
  if ( a5 )
  {
    if ( a6 )
    {
      v22 = 0LL;
      v23 = 1LL;
      v24 = 0LL;
      v25 = a6;
    }
    else
    {
      v22 = 0x8000000000000000LL;
    }
  }
  else
  {
    v22 = 0LL;
    v23 = 1LL;
    v24 = 0LL;
    v25 = 76LL;
  }
  <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(v30);
  if ( !v32 )
    core::panicking::panic(aAssertionFaile_0, 42LL, &off_147518);
  v33[0] = 0LL;
  v34 = 0LL;
  v33[1] = 1LL;
  v35[0] = 0LL;
  v36 = 0LL;
  v35[1] = 1LL;
  v9 = *a1;
  v10 = a1[1];
  v26 = &off_147598;
  while ( 1 )
  {
    v11 = std::io::impls::<impl std::io::Read for alloc::boxed::Box<R>>::read(v9, v10, v31);
    v13 = v12;
    if ( v11 )
    {
      v18 = std::io::error::Error::kind(v12);
      uu_base32::base_common::format_read_error((__int64)&v40, v18);
      v39 = 1;
      v37 = v40;
      v38 = v41;
      v16 = alloc::boxed::Box<T>::new(&v37);
      core::ptr::drop_in_place<std::io::error::Error>(v13);
LABEL_22:
      core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<u8>>(v35);
      core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<u8>>(v33);
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v30);
      core::ptr::drop_in_place<core::option::Option<uu_base32::base_common::fast_encode::LineWrapping>>(&v22);
      return v16;
    }
    if ( !v12 )
      break;
    v14 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v12, v31, v32);
    if ( v8 - *((_QWORD *)&v34 + 1) <= v13 )
    {
      v16 = uu_base32::base_common::fast_encode::encode_in_chunks_to_buffer(
              v27,
              v28,
              v8,
              v8 - *((_QWORD *)&v34 + 1),
              v14,
              v15,
              (__int64)v35,
              (__int64)v33);
      if ( v16 )
        goto LABEL_22;
      if ( *((_QWORD *)&v34 + 1) >= v8 )
        goto LABEL_25;
      v17 = uu_base32::base_common::fast_encode::write_to_output(
              &v22,
              (__int64)v35,
              (__int64)&v29,
              (__int64)&unk_147530,
              0);
      if ( v17 )
        goto LABEL_21;
    }
    else
    {
      <alloc::collections::vec_deque::VecDeque<T,A> as alloc::collections::vec_deque::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
        v33,
        v14,
        v15 + v14);
      if ( *((_QWORD *)&v34 + 1) >= v8 )
      {
        v26 = &off_1475B0;
LABEL_25:
        core::panicking::panic(aAssertionFaile_1, 66LL, v26);
      }
    }
  }
  contiguous = alloc::collections::vec_deque::VecDeque<T,A>::make_contiguous(v33);
  v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD *))(v28 + 40))(v27, contiguous, v20, v35);
  if ( v16 )
    goto LABEL_22;
  v17 = uu_base32::base_common::fast_encode::write_to_output(&v22, (__int64)v35, (__int64)&v29, (__int64)&unk_147530, 1);
  if ( v17 )
  {
LABEL_21:
    v16 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v17);
    goto LABEL_22;
  }
  core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<u8>>(v35);
  core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<u8>>(v33);
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v30);
  core::ptr::drop_in_place<core::option::Option<uu_base32::base_common::fast_encode::LineWrapping>>(&v22);
  return 0LL;
}
