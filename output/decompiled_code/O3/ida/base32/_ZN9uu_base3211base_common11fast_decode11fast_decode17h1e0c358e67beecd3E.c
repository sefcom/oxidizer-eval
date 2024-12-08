__int64 __fastcall uu_base32::base_common::fast_decode::fast_decode(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r14
  unsigned __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r14
  __int64 v12; // rbp
  unsigned __int64 v13; // r13
  unsigned __int8 *v14; // rax
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // r15
  __int64 v19; // rsi
  __int64 v21; // [rsp+0h] [rbp-1F8h] BYREF
  __int64 v22; // [rsp+8h] [rbp-1F0h]
  unsigned __int64 v23; // [rsp+10h] [rbp-1E8h]
  _QWORD v24[3]; // [rsp+18h] [rbp-1E0h] BYREF
  __int64 v25; // [rsp+30h] [rbp-1C8h] BYREF
  __int64 v26; // [rsp+38h] [rbp-1C0h]
  unsigned __int64 v27; // [rsp+40h] [rbp-1B8h]
  char **v28; // [rsp+48h] [rbp-1B0h]
  __int64 v29; // [rsp+50h] [rbp-1A8h]
  __int64 v30; // [rsp+58h] [rbp-1A0h]
  __int64 v31; // [rsp+60h] [rbp-198h] BYREF
  char v32[8]; // [rsp+68h] [rbp-190h] BYREF
  __int64 v33; // [rsp+70h] [rbp-188h]
  __int64 v34; // [rsp+78h] [rbp-180h]
  __int128 v35; // [rsp+80h] [rbp-178h] BYREF
  __int64 v36; // [rsp+90h] [rbp-168h]
  int v37; // [rsp+98h] [rbp-160h]
  __int64 v38; // [rsp+A0h] [rbp-158h]
  __int64 v39; // [rsp+A8h] [rbp-150h]
  __int128 v40; // [rsp+B0h] [rbp-148h] BYREF
  __int64 v41; // [rsp+C0h] [rbp-138h]
  _BYTE dest[304]; // [rsp+C8h] [rbp-130h] BYREF

  v31 = a2;
  v6 = (*(__int64 (__fastcall **)(__int64))(a4 + 24))(a3);
  v29 = a3;
  v30 = a4;
  v7 = (*(__int64 (__fastcall **)(__int64))(a4 + 56))(a3) << 10;
  if ( !v7 )
    core::panicking::panic(aAssertionFaile_4, 46LL, &off_147990);
  uu_base32::base_common::fast_decode::alphabet_to_table(dest);
  <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(v32, v6);
  if ( !v34 )
    core::panicking::panic(aAssertionFaile_5, 42LL, &off_1479A8);
  v21 = 0LL;
  v22 = 1LL;
  v23 = 0LL;
  v24[0] = 0LL;
  v24[1] = 1LL;
  v24[2] = 0LL;
  v25 = 0LL;
  v26 = 1LL;
  v27 = 0LL;
  v39 = *a1;
  v38 = a1[1];
  v28 = &off_147A28;
  while ( 1 )
  {
    if ( std::io::impls::<impl std::io::Read for alloc::boxed::Box<R>>::read(v39, v38, v33) )
    {
      v18 = v8;
      v19 = (unsigned __int8)std::io::error::Error::kind(v8);
      uu_base32::base_common::format_read_error(&v40, v19);
      v37 = 1;
      v35 = v40;
      v36 = v41;
      v16 = alloc::boxed::Box<T>::new(&v35);
      core::ptr::drop_in_place<std::io::error::Error>(v18);
LABEL_25:
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v25);
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v24);
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v21);
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v32);
      return v16;
    }
    if ( !v8 )
      break;
    v9 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v8, v33, v34);
    v11 = v10;
    v12 = v9;
    v13 = v10 + v9;
    *(_QWORD *)&v35 = v9;
    *((_QWORD *)&v35 + 1) = v10 + v9;
    if ( (unsigned __int8)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v35, dest) )
    {
      v27 = 0LL;
      *(_QWORD *)&v35 = v12;
      *((_QWORD *)&v35 + 1) = v13;
      v14 = (unsigned __int8 *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v35);
      if ( v14 )
      {
        do
        {
          v15 = *v14;
          if ( dest[v15] )
            alloc::vec::Vec<T,A>::push(&v25, (unsigned __int8)v15);
          v14 = (unsigned __int8 *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v35);
        }
        while ( v14 );
        v11 = v27;
      }
      else
      {
        v11 = 0LL;
      }
      v12 = v26;
    }
    if ( v7 - v23 <= v11 )
    {
      v16 = uu_base32::base_common::fast_decode::decode_in_chunks_to_buffer(
              v29,
              v30,
              v7,
              (int)v7 - (int)v23,
              v12,
              v11,
              (__int64)v24,
              (__int64)&v21);
      if ( v16 )
        goto LABEL_25;
      if ( v23 >= v7 )
        goto LABEL_28;
      v17 = uu_base32::base_common::fast_decode::write_to_output(v24, &v31, &unk_1479C0);
      if ( v17 )
        goto LABEL_24;
    }
    else
    {
      <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
        &v21,
        v12,
        v12 + v11);
      if ( v23 >= v7 )
      {
        v28 = &off_147A40;
LABEL_28:
        core::panicking::panic(aAssertionFaile_6, 66LL, v28);
      }
    }
  }
  v16 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int64, _QWORD *))(v30 + 32))(v29, v22, v23, v24);
  if ( v16 )
    goto LABEL_25;
  v17 = uu_base32::base_common::fast_decode::write_to_output(v24, &v31, &unk_1479C0);
  if ( v17 )
  {
LABEL_24:
    v16 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v17);
    goto LABEL_25;
  }
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v25);
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v24);
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v21);
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v32);
  return 0LL;
}
