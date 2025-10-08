__int64 __fastcall uu_base32::base_common::fast_encode::fast_encode(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v10; // r13
  __int64 v11; // rbp
  __int64 (__fastcall *v12)(__int64, __int64, __int64); // rbx
  __int64 v13; // r15
  char v14; // al
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r14
  unsigned __int8 v17; // al
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // rbp
  __int64 v21; // rax
  __int64 contiguous; // rax
  __int64 v23; // rdx
  char **v25; // rdx
  char v26; // [rsp+4h] [rbp-104h]
  __int64 (__fastcall *v27)(__int64, __int64); // [rsp+8h] [rbp-100h]
  unsigned __int64 v28; // [rsp+10h] [rbp-F8h] BYREF
  __int64 v29; // [rsp+18h] [rbp-F0h]
  __int64 v30; // [rsp+20h] [rbp-E8h]
  __int64 v31; // [rsp+28h] [rbp-E0h]
  __int64 v32; // [rsp+30h] [rbp-D8h]
  __int64 (__fastcall *v33)(__int64, __int64, __int64, __int64); // [rsp+38h] [rbp-D0h]
  __int64 v34; // [rsp+40h] [rbp-C8h]
  _QWORD v35[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v36; // [rsp+58h] [rbp-B0h]
  __int64 v37; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v38; // [rsp+70h] [rbp-98h]
  __int64 v39; // [rsp+78h] [rbp-90h]
  _QWORD v40[2]; // [rsp+80h] [rbp-88h] BYREF
  __int128 v41; // [rsp+90h] [rbp-78h]
  __int128 v42; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v43; // [rsp+B0h] [rbp-58h]
  int v44; // [rsp+B8h] [rbp-50h]
  __int128 v45; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v46; // [rsp+D0h] [rbp-38h]

  v32 = a3;
  v34 = a5;
  v10 = (*(__int64 (__fastcall **)(__int64))(a6 + 48))(a5) << 10;
  if ( !v10 )
    core::panicking::panic(aAssertionFaile, 46LL, &off_10E248);
  if ( (a7 & 1) != 0 )
  {
    if ( a8 )
    {
      v28 = 0LL;
      v29 = 1LL;
      v30 = 0LL;
      v31 = a8;
    }
    else
    {
      v28 = 0x8000000000000000LL;
    }
  }
  else
  {
    v28 = 0LL;
    v29 = 1LL;
    v30 = 0LL;
    v31 = 76LL;
  }
  <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(&v37, &off_10E260);
  v11 = v39;
  if ( !v39 )
    core::panicking::panic(aAssertionFaile_4, 42LL, &off_10E278);
  v35[0] = 0LL;
  v36 = 0LL;
  v35[1] = 1LL;
  v40[0] = 0LL;
  v41 = 0LL;
  v40[1] = 1LL;
  v12 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a2 + 24);
  v33 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(a6 + 40);
  v27 = *(__int64 (__fastcall **)(__int64, __int64))(a4 + 56);
  v26 = (a8 == 0) & a7;
  while ( 1 )
  {
    v13 = v38;
    v14 = v12(a1, v38, v11);
    v16 = v15;
    if ( (v14 & 1) == 0 )
      break;
    v17 = std::io::error::Error::kind(v15);
    if ( v17 != 35 )
    {
      uu_base32::base_common::format_read_error(&v45, v17);
      v44 = 1;
      v42 = v45;
      v43 = v46;
      v20 = alloc::boxed::Box<T>::new(&v42);
      core::ptr::drop_in_place<std::io::error::Error>(v16);
      v13 = v38;
      goto LABEL_26;
    }
    core::ptr::drop_in_place<std::io::error::Error>(v16);
LABEL_9:
    v11 = v39;
  }
  if ( v15 )
  {
    v18 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v15, v13, v11, &off_10E290);
    if ( v10 - *((_QWORD *)&v36 + 1) <= v16 )
    {
      v20 = uu_base32::base_common::fast_encode::encode_in_chunks_to_buffer(
              v34,
              v33,
              v10,
              v10 - *((_QWORD *)&v36 + 1),
              v18,
              v19,
              (__int64)v40,
              (__int64)v35);
      if ( v20 )
        goto LABEL_26;
      if ( *((_QWORD *)&v36 + 1) >= v10 )
      {
        v25 = &off_10E2A8;
LABEL_29:
        core::panicking::panic(aAssertionFaile_5, 66LL, v25);
      }
      v21 = uu_base32::base_common::fast_encode::write_to_output(&v28, (__int64)v40, v32, v27, 0, v26);
      if ( v21 )
        goto LABEL_23;
    }
    else
    {
      <alloc::collections::vec_deque::VecDeque<T,A> as alloc::collections::vec_deque::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
        v35,
        v18,
        v19 + v18,
        &off_10E2C0);
      if ( *((_QWORD *)&v36 + 1) >= v10 )
      {
        v25 = &off_10E2D8;
        goto LABEL_29;
      }
    }
    goto LABEL_9;
  }
  contiguous = alloc::collections::vec_deque::VecDeque<T,A>::make_contiguous(v35);
  v20 = v33(v34, contiguous, v23, (__int64)v40);
  if ( !v20 )
  {
    v21 = uu_base32::base_common::fast_encode::write_to_output(&v28, (__int64)v40, v32, v27, 1, v26);
    if ( v21 )
LABEL_23:
      v20 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v21);
    else
      v20 = 0LL;
  }
LABEL_26:
  core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<u8>>(v40);
  core::ptr::drop_in_place<alloc::collections::vec_deque::VecDeque<u8>>(v35);
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v37, v13);
  core::ptr::drop_in_place<core::option::Option<uu_base32::base_common::fast_encode::LineWrapping>>(v28, v29);
  return v20;
}