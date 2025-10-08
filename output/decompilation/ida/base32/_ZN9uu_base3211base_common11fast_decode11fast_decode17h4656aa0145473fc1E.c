__int64 __fastcall uu_base32::base_common::fast_decode::fast_decode(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int8 a7)
{
  __int64 v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rbp
  unsigned __int64 v13; // r13
  __int64 v14; // r15
  __int64 (__fastcall *v15)(__int64, __int64, __int64); // rbp
  __int64 v16; // rbx
  char v17; // al
  __int64 v18; // rdx
  __int64 v19; // r12
  unsigned __int8 v20; // al
  unsigned __int8 *v21; // r15
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r12
  unsigned __int8 *v24; // r14
  unsigned __int8 *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // r15
  __int64 v29; // rax
  __int64 v30; // r14
  char **v32; // rdx
  __int64 v33; // [rsp+8h] [rbp-1F0h] BYREF
  __int64 v34; // [rsp+10h] [rbp-1E8h]
  unsigned __int64 v35; // [rsp+18h] [rbp-1E0h]
  __int64 v36; // [rsp+20h] [rbp-1D8h] BYREF
  __int64 v37; // [rsp+28h] [rbp-1D0h]
  __int64 v38; // [rsp+30h] [rbp-1C8h]
  __int64 v39; // [rsp+38h] [rbp-1C0h] BYREF
  __int64 v40; // [rsp+40h] [rbp-1B8h]
  unsigned __int64 v41; // [rsp+48h] [rbp-1B0h]
  __int64 (__fastcall *v42)(__int64, _QWORD, _QWORD); // [rsp+50h] [rbp-1A8h]
  __int64 v43; // [rsp+58h] [rbp-1A0h]
  __int64 (__fastcall *v44)(__int64, __int64, __int64, __int64); // [rsp+60h] [rbp-198h]
  __int64 v45; // [rsp+68h] [rbp-190h]
  __int64 v46; // [rsp+70h] [rbp-188h] BYREF
  __int64 v47; // [rsp+78h] [rbp-180h]
  __int64 v48; // [rsp+80h] [rbp-178h]
  __int64 v49; // [rsp+88h] [rbp-170h]
  __int128 v50; // [rsp+90h] [rbp-168h] BYREF
  __int64 v51; // [rsp+A0h] [rbp-158h]
  int v52; // [rsp+A8h] [rbp-150h]
  __int128 v53; // [rsp+B0h] [rbp-148h] BYREF
  __int64 v54; // [rsp+C0h] [rbp-138h]
  _BYTE dest[304]; // [rsp+C8h] [rbp-130h] BYREF

  v43 = a3;
  v49 = a1;
  v10 = (*(__int64 (__fastcall **)(__int64))(a6 + 24))(a5);
  v12 = v11;
  v45 = a5;
  v13 = (*(__int64 (__fastcall **)(__int64))(a6 + 56))(a5) << 10;
  if ( !v13 )
    core::panicking::panic(aAssertionFaile_8, 46LL, &off_10E380);
  uu_base32::base_common::fast_decode::alphabet_to_table(dest, v10, v12, a7);
  <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(&v46, &off_10E398);
  v14 = v48;
  if ( !v48 )
    core::panicking::panic(aAssertionFaile_4, 42LL, &off_10E3B0);
  v33 = 0LL;
  v34 = 1LL;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 1LL;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 1LL;
  v41 = 0LL;
  v15 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a2 + 24);
  v44 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(a6 + 32);
  v42 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(a4 + 56);
  while ( 1 )
  {
    v16 = v47;
    v17 = v15(v49, v47, v14);
    v19 = v18;
    if ( (v17 & 1) != 0 )
    {
      v20 = std::io::error::Error::kind(v18);
      if ( v20 == 35 )
      {
        core::ptr::drop_in_place<std::io::error::Error>(v19);
        goto LABEL_4;
      }
      uu_base32::base_common::format_read_error(&v53, v20);
      v52 = 1;
      v50 = v53;
      v51 = v54;
      v28 = alloc::boxed::Box<T>::new(&v50);
      core::ptr::drop_in_place<std::io::error::Error>(v19);
      v16 = v47;
LABEL_31:
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v39, v40);
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v36, v37);
      core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v33, v34);
      goto LABEL_32;
    }
    if ( !v18 )
      break;
    v21 = (unsigned __int8 *)<core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
                               v18,
                               v16,
                               v14,
                               &off_10E3C8);
    v23 = v22;
    v24 = &v21[v22];
    *(_QWORD *)&v50 = v21;
    *((_QWORD *)&v50 + 1) = &v21[v22];
    if ( (unsigned __int8)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v50, dest) )
    {
      v41 = 0LL;
      if ( v23 == 0 || v21 == 0LL )
      {
        v23 = 0LL;
      }
      else
      {
        v25 = &v21[-(v23 == 0) + 1];
        do
        {
          v26 = *v21;
          v21 = v25;
          if ( dest[v26] )
            alloc::vec::Vec<T,A>::push(&v39, (unsigned __int8)v26, &off_10E410);
          v27 = 0LL;
          if ( !v21 )
            break;
          LOBYTE(v27) = v21 != v24;
          v25 = &v21[v27];
        }
        while ( v21 != v24 );
        v23 = v41;
      }
      v21 = (unsigned __int8 *)v40;
    }
    if ( v13 - v35 <= v23 )
    {
      v28 = uu_base32::base_common::fast_decode::decode_in_chunks_to_buffer(
              v45,
              v44,
              v13,
              v13 - v35,
              (__int64)v21,
              v23,
              (__int64)&v36,
              (__int64)&v33);
      if ( v28 )
        goto LABEL_31;
      if ( v35 >= v13 )
      {
        v32 = &off_10E3E0;
LABEL_35:
        core::panicking::panic(aAssertionFaile_9, 66LL, v32);
      }
      v29 = uu_base32::base_common::fast_decode::write_to_output((__int64)&v36, v43, v42);
      if ( v29 )
        goto LABEL_28;
    }
    else
    {
      <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
        &v33,
        v21,
        &v21[v23]);
      if ( v35 >= v13 )
      {
        v32 = &off_10E3F8;
        goto LABEL_35;
      }
    }
LABEL_4:
    v14 = v48;
  }
  v30 = v34;
  v28 = v44(v45, v34, v35, (__int64)&v36);
  if ( v28 )
    goto LABEL_31;
  v29 = uu_base32::base_common::fast_decode::write_to_output((__int64)&v36, v43, v42);
  if ( v29 )
  {
LABEL_28:
    v28 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v29);
    goto LABEL_31;
  }
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v39, v40);
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v36, v37);
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v33, v30);
  v28 = 0LL;
LABEL_32:
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v46, v16);
  return v28;
}