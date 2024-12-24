        unsigned __int8 a5)
{
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // r12
  unsigned __int64 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r14
  __int64 v16; // rbp
  unsigned __int64 v17; // r13
  unsigned __int8 *v18; // rax
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // r15
  char v23; // al
  __int64 v25; // [rsp+0h] [rbp-1F8h] BYREF
  __int64 v26; // [rsp+8h] [rbp-1F0h]
  unsigned __int64 v27; // [rsp+10h] [rbp-1E8h]
  _QWORD v28[3]; // [rsp+18h] [rbp-1E0h] BYREF
  __int64 v29; // [rsp+30h] [rbp-1C8h] BYREF
  __int64 v30; // [rsp+38h] [rbp-1C0h]
  unsigned __int64 v31; // [rsp+40h] [rbp-1B8h]
  char **v32; // [rsp+48h] [rbp-1B0h]
  __int64 v33; // [rsp+50h] [rbp-1A8h]
  __int64 v34; // [rsp+58h] [rbp-1A0h]
  __int64 v35; // [rsp+60h] [rbp-198h] BYREF
  char v36[8]; // [rsp+68h] [rbp-190h] BYREF
  __int64 v37; // [rsp+70h] [rbp-188h]
  __int64 v38; // [rsp+78h] [rbp-180h]
  __int128 v39; // [rsp+80h] [rbp-178h] BYREF
  __int64 v40; // [rsp+90h] [rbp-168h]
  int v41; // [rsp+98h] [rbp-160h]
  __int64 v42; // [rsp+A0h] [rbp-158h]
  __int64 v43; // [rsp+A8h] [rbp-150h]
  __int128 v44; // [rsp+B0h] [rbp-148h] BYREF
  __int64 v45; // [rsp+C0h] [rbp-138h]
  _BYTE dest[304]; // [rsp+C8h] [rbp-130h] BYREF

  v35 = a2;
  v8 = (*(__int64 (__fastcall **)(__int64))(a4 + 24))(a3);
  v10 = v9;
  v33 = a3;
  v34 = a4;
  v11 = (*(__int64 (__fastcall **)(__int64))(a4 + 56))(a3) << 10;
  if ( !v11 )
    core::panicking::panic(aAssertionFaile_4, 46LL, &off_147990);
  uu_base32::base_common::fast_decode::alphabet_to_table(dest, v8, v10, a5);
  <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(v36, v8);
  if ( !v38 )
    core::panicking::panic(aAssertionFaile_5, 42LL, &off_1479A8);
  v25 = 0LL;
  v26 = 1LL;
  v27 = 0LL;
  v28[0] = 0LL;
  v28[1] = 1LL;
  v28[2] = 0LL;
  v29 = 0LL;
  v30 = 1LL;
  v31 = 0LL;
  v43 = *a1;
  v42 = a1[1];
  v32 = &off_147A28;
  while ( 1 )
  {
    if ( std::io::impls::<impl std::io::Read for alloc::boxed::Box<R>>::read(v43, v42, v37) )
    {
      v22 = v12;
      v23 = std::io::error::Error::kind(v12);
      uu_base32::base_common::format_read_error((__int64)&v44, v23);
      v41 = 1;
      v39 = v44;
      v40 = v45;
      v20 = alloc::boxed::Box<T>::new(&v39);
      core::ptr::drop_in_place<std::io::error::Error>(v22);
LABEL_25:
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v29);
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v28);
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v25);
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v36);
      return v20;
    }
    if ( !v12 )
      break;
    v13 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(v12, v37, v38);
    v15 = v14;
    v16 = v13;
    v17 = v14 + v13;
    *(_QWORD *)&v39 = v13;
    *((_QWORD *)&v39 + 1) = v14 + v13;
    if ( (unsigned __int8)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v39, dest) )
    {
      v31 = 0LL;
      *(_QWORD *)&v39 = v16;
      *((_QWORD *)&v39 + 1) = v17;
      v18 = (unsigned __int8 *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v39);
      if ( v18 )
      {
        do
        {
          v19 = *v18;
          if ( dest[v19] )
            alloc::vec::Vec<T,A>::push(&v29, (unsigned __int8)v19);
          v18 = (unsigned __int8 *)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v39);
        }
        while ( v18 );
        v15 = v31;
      }
      else
      {
        v15 = 0LL;
      }
      v16 = v30;
    }
    if ( v11 - v27 <= v15 )
    {
      v20 = uu_base32::base_common::fast_decode::decode_in_chunks_to_buffer(
              v33,
              v34,
              v11,
              v11 - v27,
              v16,
              v15,
              (__int64)v28,
              (__int64)&v25);
      if ( v20 )
        goto LABEL_25;
      if ( v27 >= v11 )
        goto LABEL_28;
      v21 = uu_base32::base_common::fast_decode::write_to_output((__int64)v28, (__int64)&v35, (__int64)&unk_1479C0);
      if ( v21 )
        goto LABEL_24;
    }
    else
    {
      <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
        &v25,
        v16,
        v16 + v15);
      if ( v27 >= v11 )
      {
        v32 = &off_147A40;
LABEL_28:
        core::panicking::panic(aAssertionFaile_6, 66LL, v32);
      }
    }
  }
  v20 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int64, _QWORD *))(v34 + 32))(v33, v26, v27, v28);
  if ( v20 )
    goto LABEL_25;
  v21 = uu_base32::base_common::fast_decode::write_to_output((__int64)v28, (__int64)&v35, (__int64)&unk_1479C0);
  if ( v21 )
  {
LABEL_24:
    v20 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v21);
    goto LABEL_25;
  }
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v29);
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v28);
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v25);
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v36);
  return 0LL;
}
