__int64 __fastcall uu_yes::uumain(__int64 a1, __int64 a2)
{
  __m256i *p_src; // rsi
  _OWORD *v4; // rdi
  __int64 (__fastcall **v5)(); // rdx
  __int64 v6; // r14
  __int128 v7; // rax
  __int128 v8; // rax
  unsigned int v9; // ebx
  __int128 v10; // kr10_16
  __int64 v11; // rsi
  const void *v12; // rbp
  size_t v13; // r14
  __int64 v14; // rax
  __int64 v15; // rax
  __int128 v16; // xmm0
  size_t v17; // rdx
  __m256i *v18; // rsi
  __m256i *v19; // rbx
  __m256i *v20; // rbx
  __m256i *v21; // rsi
  __int64 v22; // rax
  __int64 v23; // r15
  char v24; // al
  _OWORD *v25; // rax
  __int128 v26; // xmm0
  __int128 v28; // [rsp+0h] [rbp-3E8h] BYREF
  __m256i *v29; // [rsp+10h] [rbp-3D8h]
  __int64 v30; // [rsp+18h] [rbp-3D0h] BYREF
  __int128 v31; // [rsp+20h] [rbp-3C8h] BYREF
  __int128 v32; // [rsp+30h] [rbp-3B8h]
  __int128 v33; // [rsp+40h] [rbp-3A8h]
  __int128 v34; // [rsp+50h] [rbp-398h]
  _OWORD v35[3]; // [rsp+60h] [rbp-388h] BYREF
  __int64 v36; // [rsp+90h] [rbp-358h]
  _OWORD v37[4]; // [rsp+98h] [rbp-350h] BYREF
  __int128 v38; // [rsp+D8h] [rbp-310h] BYREF
  __int64 v39; // [rsp+E8h] [rbp-300h]
  __m256i src; // [rsp+F0h] [rbp-2F8h] BYREF
  __int64 v41; // [rsp+110h] [rbp-2D8h]
  _QWORD v42[90]; // [rsp+118h] [rbp-2D0h] BYREF

  uu_yes::uu_app(&src);
  p_src = &src;
  clap_builder::builder::command::Command::try_get_matches_from(&v31, &src, a1, a2);
  v4 = (_OWORD *)*((_QWORD *)&v31 + 1);
  if ( (_QWORD)v31 != 0x8000000000000000LL )
  {
    v36 = v34;
    v35[2] = v33;
    v35[1] = v32;
    v35[0] = v31;
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&src, 0x4000LL, 0LL);
    if ( src.m256i_i64[0] )
      alloc::raw_vec::handle_error(src.m256i_i64[1], src.m256i_i64[2]);
    v28 = *(_OWORD *)&src.m256i_u64[1];
    v29 = 0LL;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&src, v35, aString, 6LL);
    clap_builder::parser::error::MatchesError::unwrap(v37, aString, 6LL, &src);
    if ( *(_QWORD *)&v37[0] )
    {
      v34 = v37[3];
      v33 = v37[2];
      v32 = v37[1];
      v31 = v37[0];
      itertools::free::intersperse(&src, &v31, asc_FA40, 1LL);
      while ( 1 )
      {
        if ( src.m256i_i64[0] )
        {
          v12 = (const void *)src.m256i_i64[1];
          if ( src.m256i_i64[1] )
          {
            v13 = src.m256i_u64[2];
            src.m256i_i64[1] = 0LL;
          }
          else
          {
            if ( !v42[0] )
              goto LABEL_27;
            v15 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(v42);
            if ( !v15 )
              goto LABEL_27;
            v16 = *(_OWORD *)(v15 + 8);
            src.m256i_i64[0] = 1LL;
            *(_OWORD *)&src.m256i_u64[1] = v16;
            v12 = (const void *)<itertools::intersperse::IntersperseElementSimple<Item> as itertools::intersperse::IntersperseElement<Item>>::generate(&src.m256i_u64[3]);
            if ( !v12 )
              goto LABEL_27;
            v13 = v17;
          }
        }
        else
        {
          *(_OWORD *)src.m256i_i8 = 1uLL;
          if ( !v42[0]
            || (v14 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(v42)) == 0 )
          {
LABEL_27:
            v19 = v29;
            if ( v29 == (__m256i *)v28 )
              alloc::raw_vec::RawVec<T,A>::grow_one(&v28);
            v19->m256i_i8[*((_QWORD *)&v28 + 1)] = 10;
            v20 = (__m256i *)&v19->m256i_i8[1];
            goto LABEL_33;
          }
          v12 = *(const void **)(v14 + 8);
          v13 = *(_QWORD *)(v14 + 16);
        }
        v18 = v29;
        if ( (_QWORD)v28 - (_QWORD)v29 < v13 )
        {
          alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v28, v29, v13);
          v18 = v29;
        }
        memcpy(&v18->m256i_i8[*((_QWORD *)&v28 + 1)], v12, v13);
        v29 = (__m256i *)((char *)v29 + v13);
      }
    }
    v21 = v29;
    if ( (_QWORD)v28 - (_QWORD)v29 <= 1uLL )
    {
      alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v28, v29, 2LL);
      v21 = v29;
    }
    *(__int16 *)((char *)v21->m256i_i16 + *((_QWORD *)&v28 + 1)) = 2681;
    v20 = (__m256i *)&v29->m256i_i16[1];
LABEL_33:
    v29 = v20;
    uu_yes::prepare_buffer(&v28);
    p_src = v29;
    v22 = uu_yes::exec(*((_QWORD *)&v28 + 1), v29);
    v23 = v22;
    if ( v22 )
    {
      switch ( v22 & 3 )
      {
        case 0LL:
          v24 = *(_BYTE *)(v22 + 16);
          goto LABEL_43;
        case 1LL:
          v24 = *(_BYTE *)(v22 + 15);
          goto LABEL_43;
        case 2LL:
          if ( HIDWORD(v22) != 32 )
            goto LABEL_38;
          goto LABEL_44;
        case 3LL:
          switch ( HIDWORD(v22) )
          {
            case 0:
              v24 = 0;
              break;
            case 1:
              v24 = 1;
              break;
            case 2:
              v24 = 2;
              break;
            case 3:
              v24 = 3;
              break;
            case 4:
              v24 = 4;
              break;
            case 5:
              v24 = 5;
              break;
            case 6:
              v24 = 6;
              break;
            case 7:
              v24 = 7;
              break;
            case 8:
              v24 = 8;
              break;
            case 9:
              v24 = 9;
              break;
            case 0xA:
              v24 = 10;
              break;
            case 0xB:
              v24 = 11;
              break;
            case 0xC:
              v24 = 12;
              break;
            case 0xD:
              v24 = 13;
              break;
            case 0xE:
              v24 = 14;
              break;
            case 0xF:
              v24 = 15;
              break;
            case 0x10:
              v24 = 16;
              break;
            case 0x11:
              v24 = 17;
              break;
            case 0x12:
              v24 = 18;
              break;
            case 0x13:
              v24 = 19;
              break;
            case 0x14:
              v24 = 20;
              break;
            case 0x15:
              v24 = 21;
              break;
            case 0x16:
              v24 = 22;
              break;
            case 0x17:
              v24 = 23;
              break;
            case 0x18:
              v24 = 24;
              break;
            case 0x19:
              v24 = 25;
              break;
            case 0x1A:
              v24 = 26;
              break;
            case 0x1B:
              v24 = 27;
              break;
            case 0x1C:
              v24 = 28;
              break;
            case 0x1D:
              v24 = 29;
              break;
            case 0x1E:
              v24 = 30;
              break;
            case 0x1F:
              v24 = 31;
              break;
            case 0x20:
              v24 = 32;
              break;
            case 0x21:
              v24 = 33;
              break;
            case 0x22:
              v24 = 34;
              break;
            case 0x23:
              v24 = 35;
              break;
            case 0x24:
              v24 = 36;
              break;
            case 0x25:
              v24 = 37;
              break;
            case 0x26:
              v24 = 38;
              break;
            case 0x27:
              v24 = 39;
              break;
            case 0x28:
              v24 = 40;
              break;
            default:
              v24 = 41;
              break;
          }
LABEL_43:
          if ( v24 == 11 )
          {
LABEL_44:
            core::ptr::drop_in_place<std::io::error::Error>(v23);
            goto LABEL_45;
          }
LABEL_38:
          v30 = v23;
          *(_QWORD *)&v37[0] = &v30;
          *((_QWORD *)&v37[0] + 1) = <std::io::error::Error as core::fmt::Display>::fmt;
          src.m256i_i64[0] = (__int64)&off_D47A8;
          src.m256i_i64[1] = 1LL;
          v41 = 0LL;
          src.m256i_i64[2] = (__int64)v37;
          src.m256i_i64[3] = 1LL;
          alloc::fmt::format::format_inner(&v31, &src);
          src.m256i_i32[6] = 1;
          *(_OWORD *)src.m256i_i8 = v31;
          src.m256i_i64[2] = v32;
          p_src = (__m256i *)&byte_8;
          v25 = (_OWORD *)_rust_alloc(32LL, 8LL);
          if ( !v25 )
            alloc::alloc::handle_alloc_error(8LL, 32LL);
          v6 = (__int64)v25;
          v26 = *(_OWORD *)src.m256i_i8;
          v25[1] = *(_OWORD *)&src.m256i_u64[2];
          *v25 = v26;
          core::ptr::drop_in_place<std::io::error::Error>(v30);
          break;
      }
    }
    else
    {
LABEL_45:
      v6 = 0LL;
    }
    <core::array::iter::IntoIter<T,_> as core::ops::drop::Drop>::drop(&v28);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v28);
    v4 = v35;
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v35);
    v5 = &off_D47F0;
    if ( v6 )
      goto LABEL_3;
    return (unsigned int)uucore::mods::error::get_exit_code(v4, p_src, v5);
  }
  v6 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v31 + 1));
  if ( !v6 )
    return (unsigned int)uucore::mods::error::get_exit_code(v4, p_src, v5);
LABEL_3:
  *(_QWORD *)&v28 = v6;
  *((_QWORD *)&v28 + 1) = v5;
  *(_QWORD *)&v31 = &v28;
  *((_QWORD *)&v31 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  src.m256i_i64[0] = (__int64)&anon_a15cc2d3895659decb08e547ee58be7a_73_llvm_5555830998822834654;
  src.m256i_i64[1] = 1LL;
  v41 = 0LL;
  src.m256i_i64[2] = (__int64)&v31;
  src.m256i_i64[3] = 1LL;
  alloc::fmt::format::format_inner(&v38, &src);
  v31 = v38;
  *(_QWORD *)&v32 = v39;
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((_QWORD *)&v38 + 1), v39, 1LL, 0LL) )
  {
    *(_QWORD *)&v7 = uucore::util_name();
    v37[0] = v7;
    *(_QWORD *)&v35[0] = v37;
    *((_QWORD *)&v35[0] + 1) = <&T as core::fmt::Display>::fmt;
    src.m256i_i64[0] = (__int64)&unk_D4748;
    src.m256i_i64[1] = 2LL;
    v41 = 0LL;
    src.m256i_i64[2] = (__int64)v35;
    src.m256i_i64[3] = 1LL;
    std::io::stdio::_eprint(&src);
    *(_QWORD *)&v37[0] = &v31;
    *((_QWORD *)&v37[0] + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    src.m256i_i64[0] = (__int64)&unk_D4768;
    src.m256i_i64[1] = 2LL;
    v41 = 0LL;
    src.m256i_i64[2] = (__int64)v37;
    src.m256i_i64[3] = 1LL;
    std::io::stdio::_eprint(&src);
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*((_QWORD *)&v28 + 1) + 104LL))(v28) )
  {
    *(_QWORD *)&v8 = uucore::execution_phrase();
    v37[0] = v8;
    *(_QWORD *)&v35[0] = v37;
    *((_QWORD *)&v35[0] + 1) = <&T as core::fmt::Display>::fmt;
    src.m256i_i64[0] = (__int64)&off_D4788;
    src.m256i_i64[1] = 2LL;
    v41 = 0LL;
    src.m256i_i64[2] = (__int64)v35;
    src.m256i_i64[3] = 1LL;
    std::io::stdio::_eprint(&src);
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)&v28 + 1) + 96LL))(v28);
  <core::array::iter::IntoIter<T,_> as core::ops::drop::Drop>::drop(&v31);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v31);
  v10 = v28;
  if ( **((_QWORD **)&v28 + 1) )
    (**((void (__fastcall ***)(_QWORD))&v28 + 1))(v28);
  v11 = *(_QWORD *)(*((_QWORD *)&v10 + 1) + 8LL);
  if ( v11 )
    _rust_dealloc(v10, v11, *(_QWORD *)(*((_QWORD *)&v10 + 1) + 16LL));
  return v9;
}
