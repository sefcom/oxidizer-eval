__int64 __fastcall just::recipe::Recipe<D>::run_linewise(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  __int64 v8; // rcx
  __int64 *v9; // r12
  __int64 v10; // r14
  __int64 v11; // r14
  __int64 v12; // rbp
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rax
  unsigned __int8 v16; // r13
  __int64 v17; // rax
  __int64 v18; // rax
  char is_comment; // bl
  char v20; // al
  __int64 v21; // r15
  char v22; // al
  char is_continuation; // al
  __int64 v24; // rcx
  __int64 v25; // r15
  bool v26; // zf
  _QWORD *v27; // rax
  __int64 *v28; // rbp
  __int64 v29; // r14
  __int64 v30; // r12
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rbx
  __int64 v34; // r14
  unsigned __int8 v35; // al
  char v36; // cl
  int v37; // edx
  char v38; // r14
  __m128 v39; // xmm0
  __m128 v40; // xmm1
  char v41; // al
  __m128 v42; // xmm0
  __m128 v43; // xmm1
  __int64 v44; // r14
  __int64 v45; // rax
  __int64 v46; // rdx
  int v47; // ebx
  int v48; // r15d
  int v49; // eax
  __int128 v50; // xmm2
  __int128 v51; // xmm3
  __int64 v53; // rbx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rdx
  char v58; // si
  __int64 v59; // rcx
  __int64 v60; // rbx
  __int64 v61; // rdx
  __int64 v62; // r14
  char v63; // al
  unsigned __int8 v64; // [rsp+3h] [rbp-355h]
  unsigned __int8 is_infallible; // [rsp+4h] [rbp-354h]
  __int64 v66; // [rsp+10h] [rbp-348h] BYREF
  __int64 v67; // [rsp+18h] [rbp-340h]
  __int64 v68; // [rsp+20h] [rbp-338h] BYREF
  __int64 v69; // [rsp+28h] [rbp-330h]
  __int64 v70; // [rsp+30h] [rbp-328h]
  __int64 v71; // [rsp+38h] [rbp-320h]
  __int64 *v72; // [rsp+40h] [rbp-318h]
  __int64 v73; // [rsp+48h] [rbp-310h]
  __int128 v74; // [rsp+50h] [rbp-308h] BYREF
  __int64 v75; // [rsp+60h] [rbp-2F8h]
  __m128 v76; // [rsp+68h] [rbp-2F0h]
  __int64 *v77; // [rsp+80h] [rbp-2D8h]
  __int64 v78; // [rsp+88h] [rbp-2D0h] BYREF
  __int64 v79; // [rsp+90h] [rbp-2C8h]
  __int64 v80; // [rsp+98h] [rbp-2C0h]
  char v81; // [rsp+A6h] [rbp-2B2h] BYREF
  unsigned __int64 v82; // [rsp+A7h] [rbp-2B1h]
  unsigned __int64 v83; // [rsp+AFh] [rbp-2A9h]
  char v84; // [rsp+B7h] [rbp-2A1h]
  __int64 *v85; // [rsp+B8h] [rbp-2A0h]
  __int64 v86; // [rsp+C0h] [rbp-298h]
  __int64 v87; // [rsp+C8h] [rbp-290h]
  __int64 v88; // [rsp+D0h] [rbp-288h]
  __int64 v89; // [rsp+D8h] [rbp-280h]
  __int64 v90; // [rsp+E0h] [rbp-278h]
  __int64 v91; // [rsp+E8h] [rbp-270h]
  __int64 v92; // [rsp+F0h] [rbp-268h]
  __int64 v93; // [rsp+F8h] [rbp-260h]
  __int64 v94; // [rsp+100h] [rbp-258h]
  char v95[8]; // [rsp+108h] [rbp-250h] BYREF
  __int64 v96; // [rsp+110h] [rbp-248h]
  __int64 v97; // [rsp+118h] [rbp-240h]
  _QWORD v98[2]; // [rsp+120h] [rbp-238h] BYREF
  _OWORD dest[14]; // [rsp+130h] [rbp-228h] BYREF
  _QWORD v100[3]; // [rsp+218h] [rbp-140h] BYREF
  _BYTE v101[16]; // [rsp+230h] [rbp-128h] BYREF
  _OWORD src[17]; // [rsp+240h] [rbp-118h] BYREF

  v93 = a6;
  v92 = a5;
  v94 = a4;
  v8 = a2[1] + 32 * a2[2];
  v9 = &v68;
  v68 = a2[1];
  v69 = v8;
  v66 = 0LL;
  v77 = a2;
  v10 = a2[24];
  if ( !*(_QWORD *)core::option::Option<T>::get_or_insert_with(&v66, &v68) )
  {
LABEL_85:
    *(_BYTE *)a1 = 56;
    return core::ptr::drop_in_place<just::evaluator::Evaluator>(a7);
  }
  v72 = v77 + 18;
  v11 = v10 + 1;
  v12 = a3[2];
  v13 = *a3;
  v90 = a3[1];
  v64 = *((_BYTE *)v77 + 253);
  v85 = v77 + 27;
  v70 = v13;
  v88 = v13 + 388;
  v86 = v12 + 168;
  v91 = a3[3];
  v89 = v12 + 568;
  v73 = v12;
  while ( 1 )
  {
    v78 = 0LL;
    v79 = 1LL;
    v80 = 0LL;
    v15 = *(_QWORD *)core::option::Option<T>::get_or_insert_with(&v66, v9);
    v16 = v15 ? just::line::Line::is_quiet(*(_DWORD **)(v15 + 8), *(_QWORD *)(v15 + 16)) : 0;
    v17 = *(_QWORD *)core::option::Option<T>::get_or_insert_with(&v66, v9);
    if ( v17 )
    {
      is_infallible = just::line::Line::is_infallible(*(_DWORD **)(v17 + 8), *(_QWORD *)(v17 + 16));
      if ( *(_BYTE *)(v12 + 487) != 1 )
        goto LABEL_15;
    }
    else
    {
      is_infallible = 0;
      if ( *(_BYTE *)(v12 + 487) != 1 )
        goto LABEL_15;
    }
    v18 = *(_QWORD *)core::option::Option<T>::get_or_insert_with(&v66, v9);
    if ( v18 )
    {
      is_comment = just::line::Line::is_comment(*(_DWORD **)(v18 + 8), *(_QWORD *)(v18 + 16));
      goto LABEL_16;
    }
LABEL_15:
    is_comment = 0;
LABEL_16:
    if ( !*(_QWORD *)core::option::Option<T>::get_or_insert_with(&v66, v9) )
      break;
    v20 = v66;
    v21 = v67;
    v66 = 0LL;
    if ( !is_comment )
    {
      if ( (v20 & 1) != 0 )
      {
        if ( !v67 )
          goto LABEL_96;
      }
      else
      {
        v21 = v68;
        if ( v68 == v69 )
LABEL_96:
          core::option::unwrap_failed(&off_430C10);
        v68 += 32LL;
      }
      just::evaluator::Evaluator::evaluate_line((__int64)dest, a7, *(_QWORD *)(v21 + 8), *(_QWORD *)(v21 + 16), 0);
      v22 = dest[0];
      if ( LOBYTE(dest[0]) != 56 )
      {
LABEL_86:
        v50 = dest[2];
        v51 = dest[3];
        *(_OWORD *)((char *)src + 15) = dest[1];
        src[0] = *(_OWORD *)((char *)dest + 1);
        *(_QWORD *)(a1 + 96) = *(_QWORD *)&dest[6];
        *(_OWORD *)(a1 + 80) = dest[5];
        *(_OWORD *)(a1 + 64) = dest[4];
        *(_OWORD *)(a1 + 48) = v51;
        *(_OWORD *)(a1 + 32) = v50;
        *(_OWORD *)(a1 + 16) = *(_OWORD *)((char *)src + 15);
        *(_OWORD *)(a1 + 1) = src[0];
        *(_BYTE *)a1 = v22;
        goto LABEL_87;
      }
      *(_QWORD *)((char *)&src[1] + 7) = *((_QWORD *)&dest[1] + 1);
      *(_OWORD *)((char *)src + 7) = *(_OWORD *)((char *)dest + 8);
      v74 = *(_OWORD *)((char *)dest + 8);
      v75 = *((_QWORD *)&dest[1] + 1);
      <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
        &v78,
        *(_QWORD *)&dest[1],
        *(_QWORD *)&dest[1] + *((_QWORD *)&dest[1] + 1));
      core::ptr::drop_in_place<alloc::string::String>(&v74);
      is_continuation = just::line::Line::is_continuation(*(_QWORD *)(v21 + 8), *(_QWORD *)(v21 + 16));
      v71 = v11 + 1;
      if ( is_continuation )
      {
        alloc::string::String::pop(&v78);
        if ( *(_QWORD *)core::option::Option<T>::get_or_insert_with(&v66, v9) )
        {
          v24 = v11 + 2;
          while ( 1 )
          {
            v11 = v24;
            v25 = v67;
            v26 = (v66 & 1) == 0;
            v66 = 0LL;
            if ( v26 )
            {
              v25 = v68;
              if ( v68 == v69 )
                goto LABEL_96;
              v68 += 32LL;
            }
            else if ( !v67 )
            {
              goto LABEL_96;
            }
            just::evaluator::Evaluator::evaluate_line(
              (__int64)dest,
              a7,
              *(_QWORD *)(v25 + 8),
              *(_QWORD *)(v25 + 16),
              1u);
            v22 = dest[0];
            if ( LOBYTE(dest[0]) != 56 )
              goto LABEL_86;
            *(_QWORD *)((char *)&src[1] + 7) = *((_QWORD *)&dest[1] + 1);
            *(_OWORD *)((char *)src + 7) = *(_OWORD *)((char *)dest + 8);
            v74 = *(_OWORD *)((char *)dest + 8);
            v75 = *((_QWORD *)&dest[1] + 1);
            <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
              &v78,
              *(_QWORD *)&dest[1],
              *(_QWORD *)&dest[1] + *((_QWORD *)&dest[1] + 1));
            core::ptr::drop_in_place<alloc::string::String>(&v74);
            if ( !(unsigned __int8)just::line::Line::is_continuation(*(_QWORD *)(v25 + 8), *(_QWORD *)(v25 + 16)) )
              break;
            alloc::string::String::pop(&v78);
            v27 = (_QWORD *)core::option::Option<T>::get_or_insert_with(&v66, v9);
            v24 = v11 + 1;
            if ( !*v27 )
              goto LABEL_41;
          }
          v71 = v11;
        }
      }
      goto LABEL_42;
    }
    if ( (v20 & 1) != 0 )
    {
      if ( !v67 )
        goto LABEL_96;
    }
    else
    {
      v21 = v68;
      if ( v68 == v69 )
        goto LABEL_96;
      v68 += 32LL;
    }
    just::line::Line::is_continuation(*(_QWORD *)(v21 + 8), *(_QWORD *)(v21 + 16));
    v71 = v11 + 1;
LABEL_5:
    core::ptr::drop_in_place<alloc::string::String>(&v78);
    v14 = (_QWORD *)core::option::Option<T>::get_or_insert_with(&v66, v9);
    v11 = v71;
    if ( !*v14 )
      goto LABEL_85;
  }
LABEL_41:
  v71 = v11;
  if ( is_comment )
    goto LABEL_5;
LABEL_42:
  v28 = v9;
  v29 = v79;
  v30 = v80;
  v31 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
          is_infallible + (unsigned __int64)v16,
          v79,
          v80);
  if ( !v31 )
    core::str::slice_error_fail(v29, v30, is_infallible + (unsigned __int64)v16, v30, &off_430C28);
  if ( !v32 )
  {
    v9 = v28;
    goto LABEL_4;
  }
  v33 = v31;
  v87 = v32;
  v34 = v70;
  v9 = v28;
  v12 = v73;
  if ( *(_BYTE *)(v70 + 408) )
    goto LABEL_46;
  v35 = *(_BYTE *)(v70 + 423);
  if ( v35 >= 2u )
    goto LABEL_46;
  if ( ((v64 ^ v16) & 1) == 0 )
  {
    if ( !*(_BYTE *)(v73 + 490) )
      goto LABEL_60;
    v41 = just::attribute_set::AttributeSet::contains(v85, 11);
    v34 = v70;
    if ( v41 )
    {
      v35 = *(_BYTE *)(v70 + 423);
LABEL_60:
      if ( v35 )
      {
LABEL_46:
        if ( *(_BYTE *)(v34 + 411) )
        {
          v36 = *(_BYTE *)(v34 + 405);
          v37 = *(_DWORD *)(v34 + 384);
          LOBYTE(dest[0]) = *(_BYTE *)(v34 + 388);
          BYTE1(dest[0]) = 1;
          *(_DWORD *)((char *)dest + 5) = 0;
          *(_DWORD *)((char *)dest + 2) = 0;
          *(_DWORD *)((char *)dest + 9) = v37;
          *(_DWORD *)((char *)dest + 13) = 10;
          BYTE1(dest[1]) = v36;
        }
        else
        {
          LOWORD(dest[1]) = *(_WORD *)(v88 + 16);
          dest[0] = *(_OWORD *)v88;
        }
        just::color::Color::stderr((__int64)&v81, (__int64)dest);
        if ( !*(_BYTE *)(v34 + 418) )
        {
          v38 = v84;
          if ( !v84 )
            goto LABEL_66;
LABEL_64:
          v42 = 0LL;
          if ( v38 != 1 )
          {
            v43 = (__m128)xmmword_65E50;
            goto LABEL_68;
          }
          v43 = (__m128)xmmword_65E50;
          if ( v81 != 1 )
          {
LABEL_68:
            *(__m128 *)((char *)&src[1] + 8) = _mm_movelh_ps(v42, v43);
            *(_QWORD *)&src[0] = 0x8000000000000000LL;
            *((_QWORD *)&src[0] + 1) = v33;
            *(_QWORD *)&src[1] = v87;
            *(_QWORD *)&v74 = src;
            *((_QWORD *)&v74 + 1) = <ansi_term::display::ANSIGenericString<str> as core::fmt::Display>::fmt;
            *(_QWORD *)&dest[0] = &unk_42DBD8;
            *((_QWORD *)&dest[0] + 1) = 2LL;
            *(_QWORD *)&dest[2] = 0LL;
            *(_QWORD *)&dest[1] = &v74;
            *((_QWORD *)&dest[1] + 1) = 1LL;
            std::io::stdio::_eprint(dest);
            core::ptr::drop_in_place<ansi_term::display::ANSIGenericString<str>>(src);
            v34 = v70;
            goto LABEL_69;
          }
LABEL_66:
          v42 = (__m128)v82;
          v43 = (__m128)v83;
          goto LABEL_68;
        }
        chrono::offset::local::Local::now(v101);
        src[0] = *(_OWORD *)(v70 + 104);
        src[1] = 8uLL;
        LOBYTE(src[2]) = 0;
        chrono::datetime::DateTime<Tz>::format_with_items(dest, v101, src);
        <T as alloc::string::SpecToString>::spec_to_string(v95, dest);
        v38 = v84;
        if ( v84 )
        {
          v39 = 0LL;
          if ( v84 != 1 )
          {
            v40 = (__m128)xmmword_65E50;
LABEL_63:
            v76 = _mm_movelh_ps(v39, v40);
            *(_QWORD *)&v74 = 0x8000000000000000LL;
            *((_QWORD *)&v74 + 1) = v96;
            v75 = v97;
            v98[0] = &v74;
            v98[1] = <ansi_term::display::ANSIGenericString<str> as core::fmt::Display>::fmt;
            *(_QWORD *)&src[0] = &off_430BF0;
            *((_QWORD *)&src[0] + 1) = 2LL;
            *(_QWORD *)&src[1] = v98;
            *(_OWORD *)((char *)&src[1] + 8) = 1uLL;
            std::io::stdio::_eprint(src);
            core::ptr::drop_in_place<ansi_term::display::ANSIGenericString<str>>(&v74);
            core::ptr::drop_in_place<alloc::string::String>(v95);
            core::ptr::drop_in_place<chrono::format::formatting::DelayedFormat<chrono::format::strftime::StrftimeItems>>(dest);
            if ( !v38 )
              goto LABEL_66;
            goto LABEL_64;
          }
          v40 = (__m128)xmmword_65E50;
          if ( v81 != 1 )
            goto LABEL_63;
        }
        v39 = (__m128)v82;
        v40 = (__m128)v83;
        goto LABEL_63;
      }
    }
  }
LABEL_69:
  if ( *(_BYTE *)(v34 + 408) )
    goto LABEL_5;
  just::settings::Settings::shell_command(src);
  just::recipe::Recipe<D>::working_directory(v100, v77, v12, v91);
  v44 = v70;
  if ( v100[0] != 0x8000000000000000LL )
    std::process::Command::current_dir(src, v100);
  std::process::Command::arg(src, v33, v87);
  if ( *(_BYTE *)(v12 + 489) || (unsigned __int8)just::attribute_set::AttributeSet::contains(v85, 14) )
  {
    v45 = just::token::Token::lexeme(v72);
    std::process::Command::arg(src, v45, v46);
    std::process::Command::args(src, v92, v93);
  }
  if ( !*(_BYTE *)(v44 + 423) )
  {
    std::process::Command::stderr(src, 1LL);
    std::process::Command::stdout(src, 1LL);
  }
  <std::process::Command as just::command_ext::CommandExt>::export(src, v86, v90, v94, v89);
  memcpy(dest, src, sizeof(dest));
  <std::process::Command as just::command_ext::CommandExt>::status_guard(&v74, dest);
  dest[0] = v74;
  if ( (_DWORD)v74 == 1 )
  {
    v53 = *((_QWORD *)&dest[0] + 1);
    *(_QWORD *)&v74 = *((_QWORD *)&dest[0] + 1);
    v54 = just::token::Token::lexeme(v72);
    *(_BYTE *)a1 = 31;
    *(_QWORD *)(a1 + 8) = v54;
    *(_QWORD *)(a1 + 16) = v55;
    *(_QWORD *)(a1 + 24) = v53;
    goto LABEL_87;
  }
  v47 = BYTE4(dest[0]) & 0x7F;
  if ( (BYTE4(dest[0]) & 0x7F) == 0 )
  {
    v48 = BYTE5(dest[0]);
    if ( !(is_infallible | (BYTE5(dest[0]) == 0)) )
    {
      v60 = just::token::Token::lexeme(v72);
      v62 = v61;
      v63 = just::recipe::Recipe<D>::print_exit_message((__int64)v77, *(_DWORD *)(v73 + 488));
      v59 = a1;
      *(_BYTE *)a1 = 9;
      *(_BYTE *)(a1 + 1) = v63;
      *(_DWORD *)(a1 + 4) = v48;
      *(_QWORD *)(a1 + 8) = v60;
      *(_QWORD *)(a1 + 16) = v62;
      goto LABEL_94;
    }
    v49 = v75;
    if ( !(((_DWORD)v75 == 0) | is_infallible) )
    {
      *(_BYTE *)a1 = 30;
      *(_DWORD *)(a1 + 4) = v49;
      goto LABEL_87;
    }
    goto LABEL_4;
  }
  if ( is_infallible )
  {
LABEL_4:
    v12 = v73;
    goto LABEL_5;
  }
  v56 = just::token::Token::lexeme(v72);
  v58 = 50;
  if ( (char)(v47 + 1) >= 2 )
    v58 = 44;
  v59 = a1;
  *(_BYTE *)a1 = v58;
  *(_DWORD *)(a1 + 4) = v47;
  *(_QWORD *)(a1 + 8) = v56;
  *(_QWORD *)(a1 + 16) = v57;
LABEL_94:
  *(_QWORD *)(v59 + 24) = 1LL;
  *(_QWORD *)(v59 + 32) = v71;
LABEL_87:
  core::ptr::drop_in_place<alloc::string::String>(&v78);
  return core::ptr::drop_in_place<just::evaluator::Evaluator>(a7);
}