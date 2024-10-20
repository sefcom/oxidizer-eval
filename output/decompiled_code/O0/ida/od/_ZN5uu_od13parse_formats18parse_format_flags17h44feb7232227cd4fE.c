_QWORD *__fastcall uu_od::parse_formats::parse_format_flags(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // rbx
  char v5; // r13
  unsigned __int64 v6; // r15
  char *v7; // r14
  __int64 v8; // r12
  bool v9; // al
  const void *v10; // rax
  size_t v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned int v16; // edx
  __int128 v17; // xmm0
  __int128 v18; // xmm0
  __int64 v19; // r14
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  _QWORD *v27; // rbx
  __int64 v28; // rax
  __int64 v29; // r14
  void *v30; // r15
  __int64 v31; // rax
  __int64 v32; // rcx
  __int128 v34; // [rsp+0h] [rbp-178h]
  char *v35; // [rsp+10h] [rbp-168h]
  __int64 v36; // [rsp+20h] [rbp-158h] BYREF
  __int128 v37; // [rsp+28h] [rbp-150h] BYREF
  __int64 v38; // [rsp+38h] [rbp-140h] BYREF
  __int128 v39; // [rsp+40h] [rbp-138h] BYREF
  __int64 v40; // [rsp+50h] [rbp-128h]
  _QWORD *v41; // [rsp+58h] [rbp-120h]
  __int64 v42; // [rsp+60h] [rbp-118h] BYREF
  __int64 v43; // [rsp+68h] [rbp-110h]
  __int64 v44; // [rsp+70h] [rbp-108h] BYREF
  unsigned __int64 v45; // [rsp+78h] [rbp-100h]
  __int128 v46; // [rsp+80h] [rbp-F8h] BYREF
  _QWORD v47[2]; // [rsp+90h] [rbp-E8h] BYREF
  _QWORD v48[2]; // [rsp+A0h] [rbp-D8h] BYREF
  __int64 v49; // [rsp+B0h] [rbp-C8h]
  __int128 v50; // [rsp+B8h] [rbp-C0h] BYREF
  __int64 v51; // [rsp+C8h] [rbp-B0h]
  __int64 v52; // [rsp+D0h] [rbp-A8h] BYREF
  __int64 v53; // [rsp+D8h] [rbp-A0h]
  __int64 v54; // [rsp+E0h] [rbp-98h]
  __int64 v55; // [rsp+E8h] [rbp-90h]
  __int64 v56; // [rsp+F0h] [rbp-88h] BYREF
  __int64 v57; // [rsp+F8h] [rbp-80h]
  __int64 v58; // [rsp+100h] [rbp-78h]
  __int64 v59; // [rsp+108h] [rbp-70h]
  __int64 v60; // [rsp+110h] [rbp-68h] BYREF
  __int64 v61; // [rsp+118h] [rbp-60h]
  __int64 v62; // [rsp+120h] [rbp-58h]
  __int64 v63; // [rsp+128h] [rbp-50h]
  __int128 v64; // [rsp+130h] [rbp-48h] BYREF
  __int64 v65; // [rsp+140h] [rbp-38h]

  v3 = a2;
  v41 = a1;
  *(_QWORD *)&v39 = 0LL;
  *((_QWORD *)&v39 + 1) = 8LL;
  v40 = 0LL;
  v45 = a2 + 24 * a3;
  v4 = 1LL;
LABEL_2:
  v5 = 0;
  while ( !v4 )
  {
    v6 = v3;
    if ( v3 == v45 )
      goto LABEL_74;
LABEL_8:
    if ( !v6 )
      goto LABEL_74;
    v3 = v6 + 24;
    v7 = *(char **)(v6 + 8);
    v8 = *(_QWORD *)(v6 + 16);
    v9 = v7 == 0LL || v8 < 0;
    if ( (v5 & 1) != 0 )
    {
      if ( v9 )
LABEL_96:
        core::panicking::panic_nounwind(anon_73050de727ff50a019884682d8624ba5_15_llvm_6296603921265638786, 162LL);
      uu_od::parse_formats::parse_type_string(&v52, *(_QWORD *)(v6 + 8), *(_QWORD *)(v6 + 16));
      v25 = v54;
      v26 = v55;
      if ( !v52 )
      {
        v36 = v54;
        *(_QWORD *)&v37 = v54;
        *((_QWORD *)&v37 + 1) = v53;
        v38 = v54 + 40 * v55;
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,alloc::vec::into_iter::IntoIter<T>>>::spec_extend(
          &v39,
          &v36);
        goto LABEL_2;
      }
      v27 = v41;
      v41[1] = v53;
      v27[2] = v25;
      v27[3] = v26;
      goto LABEL_82;
    }
    if ( v9 )
      goto LABEL_96;
    if ( (unsigned __int64)v8 >= 2 && *(_WORD *)v7 == 11565 )
    {
      if ( v8 == 2 )
        goto LABEL_75;
      if ( (unsigned __int64)v8 >= 9 && !(*(_QWORD *)v7 ^ 0x74616D726F662D2DLL | (unsigned __int8)v7[8] ^ 0x3DLL) )
      {
        *(_QWORD *)&v50 = 0LL;
        *((_QWORD *)&v50 + 1) = 1LL;
        v51 = 0LL;
        v36 = 1LL;
        *(_QWORD *)&v37 = v7;
        *((_QWORD *)&v37 + 1) = &v7[v8];
        v38 = 0LL;
        if ( !core::iter::traits::iterator::Iterator::advance_by(&v37, 0LL)
          && (unsigned int)core::iter::traits::iterator::Iterator::try_fold(&v37, &v38, (char *)&v38 + 1) != 1114112 )
        {
          v65 = v38;
          v64 = v37;
          <core::iter::adapters::skip_while::SkipWhile<I,P> as core::iter::traits::iterator::Iterator>::fold(&v64, &v50);
        }
        v46 = v50;
        v47[0] = v51;
        if ( !*((_QWORD *)&v50 + 1) || v51 < 0 )
          goto LABEL_96;
        uu_od::parse_formats::parse_type_string(&v56, *((_QWORD *)&v50 + 1), v51);
        v14 = v58;
        v15 = v59;
        if ( v56 )
        {
          v27 = v41;
          v41[1] = v57;
          v27[2] = v14;
          v27[3] = v15;
          *v27 = 1LL;
          alloc::raw_vec::RawVec<T,A>::current_memory(&v36, &v46);
          if ( (_QWORD)v37 )
            <alloc::alloc::Global as core::alloc::Allocator>::deallocate(v47, v36, v37, *((_QWORD *)&v37 + 1));
          goto LABEL_83;
        }
        v36 = v58;
        *(_QWORD *)&v37 = v58;
        *((_QWORD *)&v37 + 1) = v57;
        v38 = v58 + 40 * v59;
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,alloc::vec::into_iter::IntoIter<T>>>::spec_extend(
          &v39,
          &v36);
        alloc::raw_vec::RawVec<T,A>::current_memory(&v36, &v46);
        if ( (_QWORD)v37 )
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(v47, v36, v37, *((_QWORD *)&v37 + 1));
        v7 = *(char **)(v6 + 8);
        v8 = *(_QWORD *)(v6 + 16);
      }
      if ( !v7 || v8 < 0 )
        goto LABEL_96;
      if ( v8 == 8 && *(_QWORD *)v7 == 0x74616D726F662D2DLL )
        v5 = 1;
    }
    else
    {
      LODWORD(v36) = 0;
      v10 = (const void *)core::char::methods::encode_utf8_raw(45LL, &v36, 4LL);
      if ( v11 <= v8 && !bcmp(v10, v7, v11) )
      {
        v12 = *(_QWORD *)(v6 + 8);
        if ( !v12 )
          goto LABEL_96;
        v13 = *(_QWORD *)(v6 + 16);
        if ( v13 < 0 )
          goto LABEL_96;
        v42 = 0LL;
        v43 = 1LL;
        v44 = 0LL;
        v48[0] = v12;
        v48[1] = v12 + v13;
        v49 = 1LL;
        while ( 1 )
        {
          if ( v49 )
          {
            v49 = 0LL;
            if ( <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::advance_by(v48) )
              break;
          }
          if ( !(unsigned int)core::str::validations::next_code_point(v48) )
            break;
          if ( (v16 ^ 0xD800) - 2048 >= 0x10F800 )
            core::panicking::panic_nounwind(anon_6c54eb1e7b215b8ed1966ba3419445bf_11_llvm_11417008648433573330, 57LL);
          if ( v16 == 1114112 )
            break;
          if ( (v5 & 1) != 0 )
          {
            alloc::string::String::push(&v42, v16);
          }
          else
          {
            switch ( v16 )
            {
              case 'A':
              case 'N':
              case 'S':
              case 'j':
              case 'w':
                goto LABEL_64;
              case 'B':
              case 'o':
                v35 = &byte_7;
                v17 = *(_OWORD *)&off_12CB28;
                goto LABEL_58;
              case 'D':
                v35 = &byte_9[2];
                v17 = *(_OWORD *)&off_12CB68;
                goto LABEL_58;
              case 'F':
              case 'e':
                v35 = (char *)&off_18 + 1;
                v18 = *(_OWORD *)&off_12E390;
                goto LABEL_54;
              case 'H':
              case 'X':
                v35 = byte_9;
                v17 = *(_OWORD *)&off_12CBA8;
                goto LABEL_58;
              case 'I':
              case 'L':
              case 'l':
                v35 = (char *)&dword_14 + 1;
                v17 = *(_OWORD *)&off_12CC08;
                goto LABEL_58;
              case 'O':
                v35 = &byte_9[3];
                v17 = *(_OWORD *)&off_12CC28;
                goto LABEL_58;
              case 'a':
                v35 = &byte_4;
                v17 = *(_OWORD *)&off_12D2E8;
                goto LABEL_58;
              case 'b':
                v35 = &byte_4;
                v17 = *(_OWORD *)&off_12CB48;
                goto LABEL_58;
              case 'c':
                v35 = &byte_4;
                v34 = *(_OWORD *)&off_12D308;
                v19 = 2LL;
                goto LABEL_59;
              case 'd':
                v35 = &byte_6;
                v17 = *(_OWORD *)&off_12CB88;
                goto LABEL_58;
              case 'f':
                v35 = &byte_9[6];
                v18 = *(_OWORD *)&off_12E370;
LABEL_54:
                v34 = v18;
                v19 = 1LL;
                goto LABEL_59;
              case 'h':
              case 'x':
                v35 = &byte_5;
                v17 = *(_OWORD *)&off_12CBC8;
                goto LABEL_58;
              case 'i':
                v35 = &byte_9[3];
                v17 = *(_OWORD *)&off_12CBE8;
                goto LABEL_58;
              case 's':
                v35 = &byte_7;
                v17 = *(_OWORD *)&off_12CC48;
LABEL_58:
                v34 = v17;
                v19 = 0LL;
LABEL_59:
                v20 = v40;
                if ( v40 == (_QWORD)v39 )
                  alloc::raw_vec::RawVec<T,A>::grow_one(&v39);
                v21 = *((_QWORD *)&v39 + 1);
                v22 = 5 * v20;
                *(_QWORD *)(*((_QWORD *)&v39 + 1) + 8 * v22) = v19;
                *(_OWORD *)(v21 + 8 * v22 + 8) = v34;
                *(_QWORD *)(v21 + 8 * v22 + 24) = v35;
                *(_BYTE *)(v21 + 8 * v22 + 32) = 0;
                v40 = v20 + 1;
                break;
              case 't':
                v5 = 1;
                break;
              default:
                continue;
            }
          }
        }
LABEL_64:
        if ( v44 )
        {
          if ( v44 < 0 || !v43 )
            goto LABEL_96;
          uu_od::parse_formats::parse_type_string(&v60, v43, v44);
          v23 = v62;
          v24 = v63;
          if ( v60 )
          {
            v27 = v41;
            v41[1] = v61;
            v27[2] = v23;
            v27[3] = v24;
            *v27 = 1LL;
            alloc::raw_vec::RawVec<T,A>::current_memory(&v36, &v42);
            if ( (_QWORD)v37 )
              <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v44, v36, v37, *((_QWORD *)&v37 + 1));
            goto LABEL_83;
          }
          v36 = v62;
          *(_QWORD *)&v37 = v62;
          *((_QWORD *)&v37 + 1) = v61;
          v38 = v62 + 40 * v63;
          <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<T,alloc::vec::into_iter::IntoIter<T>>>::spec_extend(
            &v39,
            &v36);
          v5 = 0;
        }
        alloc::raw_vec::RawVec<T,A>::current_memory(&v36, &v42);
        if ( (_QWORD)v37 )
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v44, v36, v37, *((_QWORD *)&v37 + 1));
      }
    }
  }
  if ( v45 < v3 )
    core::panicking::panic_nounwind(anon_73050de727ff50a019884682d8624ba5_11_llvm_6296603921265638786, 71LL);
  if ( (v45 - v3) / 0x18 > v4 )
  {
    v6 = v3 + 24 * v4;
    v4 = 0LL;
    goto LABEL_8;
  }
LABEL_74:
  if ( (v5 & 1) != 0 )
  {
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v36, 52LL, 0LL);
    v27 = v41;
    v29 = v37;
    if ( v36 )
      alloc::raw_vec::handle_error(v37, *((_QWORD *)&v37 + 1));
    v30 = (void *)*((_QWORD *)&v37 + 1);
    core::intrinsics::copy_nonoverlapping::precondition_check(&xmmword_2497E, *((_QWORD *)&v37 + 1), 1LL, 1LL, 52LL);
    qmemcpy(v30, "missing format specification after '--format' / '-t'", 52);
    v27[1] = v29;
    v27[2] = v30;
    v27[3] = 52LL;
LABEL_82:
    *v27 = 1LL;
LABEL_83:
    if ( (_QWORD)v39 )
    {
      if ( (unsigned __int64)v39 >= 0x666666666666667LL )
        core::panicking::panic_nounwind(anon_8269adb5962d5e09057255cc669604eb_10_llvm_1060656746639540340, 69LL);
      v31 = 40 * v39;
      v36 = *((_QWORD *)&v39 + 1);
      *(_QWORD *)&v37 = 8LL;
      v32 = 16LL;
    }
    else
    {
      v32 = 8LL;
      v31 = 0LL;
    }
    *(__int64 *)((char *)&v36 + v32) = v31;
    if ( (_QWORD)v37 && *((_QWORD *)&v37 + 1) )
      _rust_dealloc(v36, *((_QWORD *)&v37 + 1), v37);
    return v27;
  }
LABEL_75:
  v27 = v41;
  if ( !v40 )
  {
    if ( !(_QWORD)v39 )
      alloc::raw_vec::RawVec<T,A>::grow_one(&v39);
    v28 = *((_QWORD *)&v39 + 1);
    *(_OWORD *)(*((_QWORD *)&v39 + 1) + 16LL) = unk_12CB30;
    *(_OWORD *)v28 = uu_od::prn_int::FORMAT_ITEM_OCT16;
    *(_BYTE *)(v28 + 32) = 0;
    v40 = 1LL;
  }
  v27[3] = v40;
  *(_OWORD *)(v27 + 1) = v39;
  *v27 = 0LL;
  return v27;
}
