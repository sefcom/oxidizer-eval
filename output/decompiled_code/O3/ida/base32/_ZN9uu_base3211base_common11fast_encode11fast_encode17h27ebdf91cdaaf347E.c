        __int64 a6)
{
  unsigned __int64 v8; // r12
  __int64 v9; // rbp
  __int64 (__fastcall *v10)(__int64, __int64, __int64); // r14
  __int64 i; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rbx
  __int64 v14; // r13
  __int64 v15; // rax
  unsigned __int8 v16; // al
  __int64 contiguous; // rax
  __int64 v18; // rdx
  _OWORD *v19; // rax
  __int128 v20; // xmm0
  unsigned __int64 v22; // [rsp+8h] [rbp-100h] BYREF
  __int64 v23; // [rsp+10h] [rbp-F8h]
  __int64 v24; // [rsp+18h] [rbp-F0h]
  __int64 v25; // [rsp+20h] [rbp-E8h]
  _QWORD v26[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v27; // [rsp+38h] [rbp-D0h]
  __int64 v28; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v29; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v30; // [rsp+58h] [rbp-B0h]
  _QWORD v31[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v32; // [rsp+70h] [rbp-98h]
  char **v33; // [rsp+80h] [rbp-88h]
  __int64 v34; // [rsp+88h] [rbp-80h]
  __int64 v35; // [rsp+90h] [rbp-78h]
  __int64 v36; // [rsp+98h] [rbp-70h] BYREF
  __int128 v37; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v38; // [rsp+B0h] [rbp-58h]
  __int128 v39; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v40; // [rsp+D0h] [rbp-38h]

  v36 = a2;
  v34 = a3;
  v35 = a4;
  v8 = (*(__int64 (__fastcall **)(__int64))(a4 + 48))(a3) << 10;
  if ( !v8 )
    core::panicking::panic(aAssertionFaile, 46LL, &off_FED88);
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
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v37, 0x8000LL, 1LL);
  if ( (_QWORD)v37 )
    alloc::raw_vec::handle_error(*((_QWORD *)&v37 + 1), v38);
  v28 = *((_QWORD *)&v37 + 1);
  v29 = v38;
  v30 = 0x8000LL;
  v26[0] = 0LL;
  v27 = 0LL;
  v26[1] = 1LL;
  v31[0] = 0LL;
  v32 = 0LL;
  v31[1] = 1LL;
  v9 = *a1;
  v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1[1] + 24);
  v33 = &off_FEE08;
  for ( i = v10(v9, v38, 0x8000LL); ; i = v10(v9, v29, v30) )
  {
    v13 = v12;
    if ( i )
    {
      switch ( v12 & 3 )
      {
        case 0uLL:
          v16 = *(_BYTE *)(v12 + 16);
          break;
        case 1uLL:
          v16 = *(_BYTE *)(v12 + 15);
          break;
        case 2uLL:
          switch ( HIDWORD(v12) )
          {
            case 1:
            case 0xD:
              goto LABEL_38;
            case 2:
              goto LABEL_28;
            case 4:
              goto LABEL_40;
            case 7:
              goto LABEL_48;
            case 0xB:
              goto LABEL_57;
            case 0xC:
              goto LABEL_66;
            case 0x10:
              goto LABEL_71;
            case 0x11:
              goto LABEL_61;
            case 0x12:
              goto LABEL_60;
            case 0x14:
              goto LABEL_52;
            case 0x15:
              goto LABEL_65;
            case 0x16:
              goto LABEL_68;
            case 0x1A:
              goto LABEL_70;
            case 0x1B:
              goto LABEL_39;
            case 0x1C:
              goto LABEL_69;
            case 0x1D:
              goto LABEL_49;
            case 0x1E:
              goto LABEL_72;
            case 0x1F:
              goto LABEL_54;
            case 0x20:
              goto LABEL_55;
            case 0x23:
              goto LABEL_50;
            case 0x24:
              goto LABEL_46;
            case 0x26:
              goto LABEL_42;
            case 0x27:
              goto LABEL_47;
            case 0x28:
              goto LABEL_67;
            case 0x62:
              goto LABEL_58;
            case 0x63:
              goto LABEL_41;
            case 0x64:
              goto LABEL_44;
            case 0x65:
              goto LABEL_56;
            case 0x67:
              goto LABEL_62;
            case 0x68:
              goto LABEL_64;
            case 0x6B:
              goto LABEL_59;
            case 0x6E:
              goto LABEL_45;
            case 0x6F:
              goto LABEL_51;
            case 0x71:
              goto LABEL_63;
            case 0x74:
              goto LABEL_43;
            case 0x7A:
              goto LABEL_53;
            default:
              goto LABEL_73;
          }
        case 3uLL:
          switch ( HIDWORD(v12) )
          {
            case 0:
LABEL_28:
              v16 = 0;
              break;
            case 1:
LABEL_38:
              v16 = 1;
              break;
            case 2:
LABEL_51:
              v16 = 2;
              break;
            case 3:
LABEL_64:
              v16 = 3;
              break;
            case 4:
LABEL_63:
              v16 = 4;
              break;
            case 5:
LABEL_56:
              v16 = 5;
              break;
            case 6:
LABEL_62:
              v16 = 6;
              break;
            case 7:
LABEL_59:
              v16 = 7;
              break;
            case 8:
LABEL_58:
              v16 = 8;
              break;
            case 9:
LABEL_41:
              v16 = 9;
              break;
            case 0xA:
LABEL_44:
              v16 = 10;
              break;
            case 0xB:
LABEL_55:
              v16 = 11;
              break;
            case 0xC:
LABEL_61:
              v16 = 12;
              break;
            case 0xD:
LABEL_57:
              v16 = 13;
              break;
            case 0xE:
LABEL_52:
              v16 = 14;
              break;
            case 0xF:
LABEL_65:
              v16 = 15;
              break;
            case 0x10:
LABEL_47:
              v16 = 16;
              break;
            case 0x11:
LABEL_72:
              v16 = 17;
              break;
            case 0x12:
LABEL_67:
              v16 = 18;
              break;
            case 0x13:
LABEL_43:
              v16 = 19;
              break;
            case 0x14:
LABEL_68:
              v16 = 20;
              break;
            case 0x15:
              v16 = 21;
              break;
            case 0x16:
LABEL_45:
              v16 = 22;
              break;
            case 0x17:
              v16 = 23;
              break;
            case 0x18:
LABEL_69:
              v16 = 24;
              break;
            case 0x19:
LABEL_49:
              v16 = 25;
              break;
            case 0x1A:
LABEL_53:
              v16 = 26;
              break;
            case 0x1B:
LABEL_39:
              v16 = 27;
              break;
            case 0x1C:
LABEL_71:
              v16 = 28;
              break;
            case 0x1D:
LABEL_70:
              v16 = 29;
              break;
            case 0x1E:
LABEL_50:
              v16 = 30;
              break;
            case 0x1F:
LABEL_60:
              v16 = 31;
              break;
            case 0x20:
LABEL_54:
              v16 = 32;
              break;
            case 0x21:
LABEL_46:
              v16 = 33;
              break;
            case 0x22:
LABEL_48:
              v16 = 34;
              break;
            case 0x23:
LABEL_40:
              v16 = 35;
              break;
            case 0x24:
LABEL_42:
              v16 = 36;
              break;
            case 0x25:
              v16 = 37;
              break;
            case 0x26:
LABEL_66:
              v16 = 38;
              break;
            case 0x27:
              v16 = 39;
              break;
            case 0x28:
LABEL_73:
              v16 = 40;
              break;
            default:
              v16 = 41;
              break;
          }
          break;
      }
      uu_base32::base_common::format_read_error(&v39, v16);
      DWORD2(v38) = 1;
      v37 = v39;
      *(_QWORD *)&v38 = v40;
      v19 = (_OWORD *)_rust_alloc(32LL, 8LL);
      if ( !v19 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v14 = (__int64)v19;
      v20 = v37;
      v19[1] = v38;
      *v19 = v20;
      core::ptr::drop_in_place<std::io::error::Error>(v13);
      goto LABEL_32;
    }
    if ( !v12 )
      break;
    if ( v30 < v12 )
      core::slice::index::slice_end_index_len_fail(v12, v30, &off_FEDF0);
    if ( v8 - *((_QWORD *)&v27 + 1) <= v12 )
    {
      v14 = uu_base32::base_common::fast_encode::encode_in_chunks_to_buffer(
              v34,
              v35,
              v8,
              (int)v8 - DWORD2(v27),
              v29,
              v12,
              (__int64)v31,
              (__int64)v26);
      if ( v14 )
        goto LABEL_32;
      if ( *((_QWORD *)&v27 + 1) >= v8 )
        goto LABEL_80;
      v15 = uu_base32::base_common::fast_encode::write_to_output(&v22, v31, &v36, &unk_FEDA0, 0LL);
      if ( v15 )
        goto LABEL_24;
    }
    else
    {
      <alloc::collections::vec_deque::VecDeque<T,A> as alloc::collections::vec_deque::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
        v26,
        v29,
        v29 + v12);
      if ( *((_QWORD *)&v27 + 1) >= v8 )
      {
        v33 = &off_FEE20;
LABEL_80:
        core::panicking::panic(aAssertionFaile_0, 66LL, v33);
      }
    }
  }
  contiguous = alloc::collections::vec_deque::VecDeque<T,A>::make_contiguous(v26);
  v14 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD *))(v35 + 40))(v34, contiguous, v18, v31);
  if ( v14 )
  {
LABEL_32:
    <alloc::collections::vec_deque::VecDeque<T,A> as core::ops::drop::Drop>::drop(v31);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v31);
    <alloc::collections::vec_deque::VecDeque<T,A> as core::ops::drop::Drop>::drop(v26);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v26);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v28);
    if ( v22 != 0x8000000000000000LL )
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v22);
    return v14;
  }
  v15 = uu_base32::base_common::fast_encode::write_to_output(&v22, v31, &v36, &unk_FEDA0, 1LL);
  if ( v15 )
  {
LABEL_24:
    v14 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v15);
    goto LABEL_32;
  }
  <alloc::collections::vec_deque::VecDeque<T,A> as core::ops::drop::Drop>::drop(v31);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v31);
  <alloc::collections::vec_deque::VecDeque<T,A> as core::ops::drop::Drop>::drop(v26);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v26);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v28);
  if ( v22 != 0x8000000000000000LL )
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v22);
  return 0LL;
}
