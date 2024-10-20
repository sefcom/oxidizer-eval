        unsigned __int8 a5)
{
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // r15
  unsigned __int64 v11; // r12
  __int64 v12; // r13
  __int64 (__fastcall *v13)(_QWORD, _QWORD, _QWORD); // rbp
  __int64 i; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r15
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // r13
  __int64 v21; // rbp
  unsigned __int64 v22; // rbx
  unsigned __int8 v23; // r12
  unsigned __int64 v24; // rcx
  __int64 v25; // r14
  __int64 v26; // rax
  unsigned __int8 v27; // al
  _OWORD *v28; // rax
  __int128 v29; // xmm0
  __int64 v31; // [rsp+0h] [rbp-1F8h] BYREF
  __int64 v32; // [rsp+8h] [rbp-1F0h]
  unsigned __int64 v33; // [rsp+10h] [rbp-1E8h]
  __int64 v34; // [rsp+18h] [rbp-1E0h] BYREF
  __int64 v35; // [rsp+20h] [rbp-1D8h]
  unsigned __int128 v36; // [rsp+28h] [rbp-1D0h] BYREF
  __int64 v37; // [rsp+38h] [rbp-1C0h]
  unsigned __int64 v38; // [rsp+40h] [rbp-1B8h]
  _QWORD v39[3]; // [rsp+48h] [rbp-1B0h] BYREF
  char **v40; // [rsp+60h] [rbp-198h]
  __int64 v41; // [rsp+68h] [rbp-190h]
  __int64 v42; // [rsp+70h] [rbp-188h]
  __int64 v43; // [rsp+78h] [rbp-180h] BYREF
  __int128 v44; // [rsp+80h] [rbp-178h] BYREF
  __int128 v45; // [rsp+90h] [rbp-168h]
  __int64 (__fastcall *v46)(_QWORD, _QWORD, _QWORD); // [rsp+A0h] [rbp-158h]
  __int64 v47; // [rsp+A8h] [rbp-150h]
  __int128 v48; // [rsp+B0h] [rbp-148h] BYREF
  __int64 v49; // [rsp+C0h] [rbp-138h]
  _BYTE v50[304]; // [rsp+C8h] [rbp-130h] BYREF

  v43 = a2;
  v8 = (*(__int64 (__fastcall **)(__int64))(a4 + 24))(a3);
  v10 = v9;
  v41 = a3;
  v42 = a4;
  v11 = (*(__int64 (__fastcall **)(__int64))(a4 + 56))(a3) << 10;
  if ( !v11 )
    core::panicking::panic(aAssertionFaile_3, 46LL, &off_FF120);
  uu_base32::base_common::fast_decode::alphabet_to_table(v50, v8, v10, a5);
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v44, 0x8000LL, 1LL);
  if ( (_QWORD)v44 )
    alloc::raw_vec::handle_error(*((_QWORD *)&v44 + 1), v45);
  v37 = v45;
  v38 = 0x8000LL;
  v31 = 0LL;
  v32 = 1LL;
  v33 = 0LL;
  v39[0] = 0LL;
  v39[1] = 1LL;
  v39[2] = 0LL;
  v34 = 0LL;
  v35 = 1LL;
  v36 = __PAIR128__(*((unsigned __int64 *)&v44 + 1), 0LL);
  v12 = *a1;
  v13 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(a1[1] + 24);
  v40 = &off_FF1A0;
  v47 = v12;
  v46 = v13;
  for ( i = v13(v12, v45, 0x8000LL); ; i = v13(v12, v37, v38) )
  {
    v16 = v15;
    if ( i )
      break;
    if ( !v15 )
    {
      v25 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int64, _QWORD *))(v42 + 32))(v41, v32, v33, v39);
      if ( v25 )
        goto LABEL_37;
      v26 = uu_base32::base_common::fast_decode::write_to_output(v39, &v43, &unk_FF138);
      if ( v26 )
        goto LABEL_29;
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v34);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v34);
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v39);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v39);
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v31);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v31);
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop((char *)&v36 + 8);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v36 + 8);
      return 0LL;
    }
    if ( v38 < v15 )
      core::slice::index::slice_end_index_len_fail(v15, v38, &off_FF188);
    v17 = v37;
    v18 = 0LL;
    do
    {
      if ( v15 == v18 )
      {
        v22 = v15;
        v24 = v11 - v33;
        if ( v11 - v33 <= v15 )
          goto LABEL_21;
LABEL_18:
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
          &v31,
          v17,
          v17 + v22);
        if ( v33 < v11 )
          goto LABEL_4;
        v40 = &off_FF1B8;
LABEL_82:
        core::panicking::panic(aAssertionFaile_4, 66LL, v40);
      }
      v19 = *(unsigned __int8 *)(v37 + v18++);
    }
    while ( v50[v19] );
    v20 = v11;
    *(_QWORD *)&v36 = 0LL;
    v21 = 0LL;
    v22 = 0LL;
    do
    {
      v23 = *(_BYTE *)(v17 + v21);
      if ( v50[v23] )
      {
        if ( v22 == v34 )
          alloc::raw_vec::RawVec<T,A>::grow_one(&v34);
        *(_BYTE *)(v35 + v22++) = v23;
        *(_QWORD *)&v36 = v22;
      }
      ++v21;
    }
    while ( v16 != v21 );
    v17 = v35;
    v11 = v20;
    v12 = v47;
    v13 = v46;
    v24 = v11 - v33;
    if ( v11 - v33 > v22 )
      goto LABEL_18;
LABEL_21:
    v25 = uu_base32::base_common::fast_decode::decode_in_chunks_to_buffer(v41, v42, v11, v24, v17, v22, v39, &v31);
    if ( v25 )
      goto LABEL_37;
    if ( v33 >= v11 )
      goto LABEL_82;
    v26 = uu_base32::base_common::fast_decode::write_to_output(v39, &v43, &unk_FF138);
    if ( v26 )
    {
LABEL_29:
      v25 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v26);
      goto LABEL_37;
    }
LABEL_4:
    ;
  }
  switch ( v15 & 3 )
  {
    case 0uLL:
      v27 = *(_BYTE *)(v15 + 16);
      break;
    case 1uLL:
      v27 = *(_BYTE *)(v15 + 15);
      break;
    case 2uLL:
      switch ( HIDWORD(v15) )
      {
        case 1:
        case 0xD:
          goto LABEL_40;
        case 2:
          goto LABEL_33;
        case 4:
          goto LABEL_42;
        case 7:
          goto LABEL_50;
        case 0xB:
          goto LABEL_59;
        case 0xC:
          goto LABEL_68;
        case 0x10:
          goto LABEL_73;
        case 0x11:
          goto LABEL_63;
        case 0x12:
          goto LABEL_62;
        case 0x14:
          goto LABEL_54;
        case 0x15:
          goto LABEL_67;
        case 0x16:
          goto LABEL_70;
        case 0x1A:
          goto LABEL_72;
        case 0x1B:
          goto LABEL_41;
        case 0x1C:
          goto LABEL_71;
        case 0x1D:
          goto LABEL_51;
        case 0x1E:
          goto LABEL_74;
        case 0x1F:
          goto LABEL_56;
        case 0x20:
          goto LABEL_57;
        case 0x23:
          goto LABEL_52;
        case 0x24:
          goto LABEL_48;
        case 0x26:
          goto LABEL_44;
        case 0x27:
          goto LABEL_49;
        case 0x28:
          goto LABEL_69;
        case 0x62:
          goto LABEL_60;
        case 0x63:
          goto LABEL_43;
        case 0x64:
          goto LABEL_46;
        case 0x65:
          goto LABEL_58;
        case 0x67:
          goto LABEL_64;
        case 0x68:
          goto LABEL_66;
        case 0x6B:
          goto LABEL_61;
        case 0x6E:
          goto LABEL_47;
        case 0x6F:
          goto LABEL_53;
        case 0x71:
          goto LABEL_65;
        case 0x74:
          goto LABEL_45;
        case 0x7A:
          goto LABEL_55;
        default:
          goto LABEL_75;
      }
    case 3uLL:
      switch ( HIDWORD(v15) )
      {
        case 0:
LABEL_33:
          v27 = 0;
          break;
        case 1:
LABEL_40:
          v27 = 1;
          break;
        case 2:
LABEL_53:
          v27 = 2;
          break;
        case 3:
LABEL_66:
          v27 = 3;
          break;
        case 4:
LABEL_65:
          v27 = 4;
          break;
        case 5:
LABEL_58:
          v27 = 5;
          break;
        case 6:
LABEL_64:
          v27 = 6;
          break;
        case 7:
LABEL_61:
          v27 = 7;
          break;
        case 8:
LABEL_60:
          v27 = 8;
          break;
        case 9:
LABEL_43:
          v27 = 9;
          break;
        case 0xA:
LABEL_46:
          v27 = 10;
          break;
        case 0xB:
LABEL_57:
          v27 = 11;
          break;
        case 0xC:
LABEL_63:
          v27 = 12;
          break;
        case 0xD:
LABEL_59:
          v27 = 13;
          break;
        case 0xE:
LABEL_54:
          v27 = 14;
          break;
        case 0xF:
LABEL_67:
          v27 = 15;
          break;
        case 0x10:
LABEL_49:
          v27 = 16;
          break;
        case 0x11:
LABEL_74:
          v27 = 17;
          break;
        case 0x12:
LABEL_69:
          v27 = 18;
          break;
        case 0x13:
LABEL_45:
          v27 = 19;
          break;
        case 0x14:
LABEL_70:
          v27 = 20;
          break;
        case 0x15:
          v27 = 21;
          break;
        case 0x16:
LABEL_47:
          v27 = 22;
          break;
        case 0x17:
          v27 = 23;
          break;
        case 0x18:
LABEL_71:
          v27 = 24;
          break;
        case 0x19:
LABEL_51:
          v27 = 25;
          break;
        case 0x1A:
LABEL_55:
          v27 = 26;
          break;
        case 0x1B:
LABEL_41:
          v27 = 27;
          break;
        case 0x1C:
LABEL_73:
          v27 = 28;
          break;
        case 0x1D:
LABEL_72:
          v27 = 29;
          break;
        case 0x1E:
LABEL_52:
          v27 = 30;
          break;
        case 0x1F:
LABEL_62:
          v27 = 31;
          break;
        case 0x20:
LABEL_56:
          v27 = 32;
          break;
        case 0x21:
LABEL_48:
          v27 = 33;
          break;
        case 0x22:
LABEL_50:
          v27 = 34;
          break;
        case 0x23:
LABEL_42:
          v27 = 35;
          break;
        case 0x24:
LABEL_44:
          v27 = 36;
          break;
        case 0x25:
          v27 = 37;
          break;
        case 0x26:
LABEL_68:
          v27 = 38;
          break;
        case 0x27:
          v27 = 39;
          break;
        case 0x28:
LABEL_75:
          v27 = 40;
          break;
        default:
          v27 = 41;
          break;
      }
      break;
  }
  uu_base32::base_common::format_read_error(&v48, v27);
  DWORD2(v45) = 1;
  v44 = v48;
  *(_QWORD *)&v45 = v49;
  v28 = (_OWORD *)_rust_alloc(32LL, 8LL);
  if ( !v28 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v25 = (__int64)v28;
  v29 = v44;
  v28[1] = v45;
  *v28 = v29;
  core::ptr::drop_in_place<std::io::error::Error>(v16);
LABEL_37:
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v34);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v34);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v39);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v39);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v31);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v31);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop((char *)&v36 + 8);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop((char *)&v36 + 8);
  return v25;
}
