__int64 __fastcall uu_touch::parse_timestamp(__int64 a1, const void *a2, __int64 a3)
{
  signed __int64 v3; // r14
  __int64 v4; // rax
  unsigned int v5; // eax
  __int64 v6; // r12
  char *v7; // r15
  void *v8; // r13
  __int64 v9; // rbp
  unsigned int v10; // eax
  _OWORD *v11; // rax
  __int128 v12; // xmm0
  __int64 v13; // rcx
  char v14; // al
  _OWORD *v15; // rax
  __int64 (__fastcall **v16)(); // rdx
  __int64 v17; // r15
  int v18; // eax
  int v19; // ebp
  int v20; // r15d
  __int64 v21; // r12
  unsigned int v22; // ebp
  unsigned int v23; // r13d
  int v24; // eax
  int v25; // edx
  __int128 v26; // xmm0
  char **v28; // rdx
  const char *v29; // rdi
  char v30; // [rsp+7h] [rbp-341h] BYREF
  __int128 v31; // [rsp+8h] [rbp-340h] BYREF
  _BYTE v32[12]; // [rsp+18h] [rbp-330h] BYREF
  int v33; // [rsp+24h] [rbp-324h] BYREF
  __int64 v34; // [rsp+28h] [rbp-320h]
  _QWORD v35[4]; // [rsp+30h] [rbp-318h] BYREF
  __int128 v36; // [rsp+50h] [rbp-2F8h] BYREF
  __int128 v37; // [rsp+60h] [rbp-2E8h] BYREF
  void *dest[2]; // [rsp+70h] [rbp-2D8h]
  __int64 v39; // [rsp+80h] [rbp-2C8h]
  __int64 v40; // [rsp+110h] [rbp-238h] BYREF
  char *v41; // [rsp+118h] [rbp-230h]
  __int64 v42; // [rsp+120h] [rbp-228h] BYREF
  int v43; // [rsp+128h] [rbp-220h] BYREF
  int v44; // [rsp+12Ch] [rbp-21Ch] BYREF
  __int128 v45; // [rsp+130h] [rbp-218h] BYREF
  int v46; // [rsp+140h] [rbp-208h] BYREF
  __int64 v47; // [rsp+144h] [rbp-204h]
  int v48; // [rsp+14Ch] [rbp-1FCh] BYREF
  __int64 v49; // [rsp+150h] [rbp-1F8h]
  _QWORD v50[2]; // [rsp+158h] [rbp-1F0h] BYREF
  _QWORD v51[2]; // [rsp+168h] [rbp-1E0h] BYREF
  _QWORD v52[2]; // [rsp+178h] [rbp-1D0h] BYREF
  _QWORD v53[2]; // [rsp+188h] [rbp-1C0h] BYREF
  _QWORD v54[2]; // [rsp+198h] [rbp-1B0h] BYREF
  _QWORD v55[3]; // [rsp+1A8h] [rbp-1A0h] BYREF
  _QWORD v56[3]; // [rsp+1C0h] [rbp-188h] BYREF
  _QWORD v57[3]; // [rsp+1D8h] [rbp-170h] BYREF
  _QWORD v58[3]; // [rsp+1F0h] [rbp-158h] BYREF
  _QWORD v59[4]; // [rsp+208h] [rbp-140h] BYREF
  _QWORD v60[4]; // [rsp+228h] [rbp-120h] BYREF
  _QWORD v61[3]; // [rsp+248h] [rbp-100h] BYREF
  char v62; // [rsp+260h] [rbp-E8h]
  _QWORD v63[3]; // [rsp+268h] [rbp-E0h] BYREF
  char v64; // [rsp+280h] [rbp-C8h]
  int v65; // [rsp+28Ch] [rbp-BCh] BYREF
  __int128 v66; // [rsp+290h] [rbp-B8h]
  __int128 v67; // [rsp+2B0h] [rbp-98h] BYREF
  void *v68; // [rsp+2C0h] [rbp-88h]
  __int128 v69; // [rsp+2C8h] [rbp-80h] BYREF
  void *v70; // [rsp+2D8h] [rbp-70h]
  __int128 v71; // [rsp+2E0h] [rbp-68h] BYREF
  void *v72; // [rsp+2F0h] [rbp-58h]
  __int64 v73; // [rsp+2F8h] [rbp-50h] BYREF
  __int128 v74; // [rsp+300h] [rbp-48h]
  char v75; // [rsp+310h] [rbp-38h]

  *(_QWORD *)&v45 = a2;
  *((_QWORD *)&v45 + 1) = a3;
  if ( a3 < 0 )
    core::panicking::panic_nounwind(anon_3c49abdde3b3fdf25b1dcaa21df94cd5_50_llvm_2806096261713610274, 71LL);
  if ( !a2 )
    goto LABEL_48;
  v3 = a3;
  if ( (unsigned __int64)a3 >= 0x20 )
    v4 = core::str::count::do_count_chars(a2, a3);
  else
    v4 = core::str::count::char_count_general_case(a2, a3);
  switch ( v4 )
  {
    case 8LL:
      chrono::offset::utc::Utc::now(&v31);
      *(_DWORD *)&v32[8] = DWORD2(v31);
      *(_QWORD *)v32 = v31;
      LOBYTE(v33) = 0;
      std::thread::local::LocalKey<T>::try_with(
        &v37,
        &anon_3f273f3c4772dc55a54bdec9062ccb39_6_llvm_3469199380322658755,
        &v31,
        &v33);
      core::result::Result<T,E>::expect(
        v35,
        &v37,
        anon_6b18f3ca19b16514212961b62c614770_0_llvm_3964607150695535679,
        70LL,
        &anon_6b18f3ca19b16514212961b62c614770_2_llvm_3964607150695535679);
      v5 = chrono::offset::LocalResult<T>::unwrap(
             v35,
             &anon_4b66f08430e3b2971a63e8fbb00d0ebe_106_llvm_5877677624257021904);
      DWORD2(v37) = *(_DWORD *)&v32[8];
      *(_QWORD *)&v37 = *(_QWORD *)v32;
      chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(v35, &v37, v5);
      v44 = SLODWORD(v35[0]) >> 13;
      v60[0] = &v44;
      v60[1] = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
      v60[2] = &v45;
      v60[3] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v37 = "\x01";
      *((_QWORD *)&v37 + 1) = 2LL;
      dest[0] = v60;
      dest[1] = &dword_0 + 2;
      v39 = 0LL;
      alloc::fmt::format::format_inner(v58, &v37);
      v6 = v58[0];
      v7 = (char *)v58[1];
      v8 = &unk_64D45;
      v9 = 10LL;
      v3 = v58[2];
      goto LABEL_17;
    case 10LL:
      v51[0] = &v45;
      v51[1] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v37 = &off_2C9CF8;
      *((_QWORD *)&v37 + 1) = 1LL;
      dest[0] = v51;
      dest[1] = &dword_0 + 1;
      v39 = 0LL;
      alloc::fmt::format::format_inner(v56, &v37);
      v6 = v56[0];
      v7 = (char *)v56[1];
      v8 = &unk_64D45;
      v9 = 10LL;
      v3 = v56[2];
      goto LABEL_17;
    case 11LL:
      chrono::offset::utc::Utc::now(&v31);
      *(_DWORD *)&v32[8] = DWORD2(v31);
      *(_QWORD *)v32 = v31;
      LOBYTE(v33) = 0;
      std::thread::local::LocalKey<T>::try_with(
        &v37,
        &anon_3f273f3c4772dc55a54bdec9062ccb39_6_llvm_3469199380322658755,
        &v31,
        &v33);
      core::result::Result<T,E>::expect(
        v35,
        &v37,
        anon_6b18f3ca19b16514212961b62c614770_0_llvm_3964607150695535679,
        70LL,
        &anon_6b18f3ca19b16514212961b62c614770_2_llvm_3964607150695535679);
      v10 = chrono::offset::LocalResult<T>::unwrap(
              v35,
              &anon_4b66f08430e3b2971a63e8fbb00d0ebe_106_llvm_5877677624257021904);
      DWORD2(v37) = *(_DWORD *)&v32[8];
      *(_QWORD *)&v37 = *(_QWORD *)v32;
      chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(v35, &v37, v10);
      v43 = SLODWORD(v35[0]) >> 13;
      v59[0] = &v43;
      v59[1] = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
      v59[2] = &v45;
      v59[3] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v37 = "\x01";
      *((_QWORD *)&v37 + 1) = 2LL;
      dest[0] = v59;
      dest[1] = &dword_0 + 2;
      v39 = 0LL;
      alloc::fmt::format::format_inner(v57, &v37);
      v6 = v57[0];
      v7 = (char *)v57[1];
      v8 = &unk_64D38;
      v9 = 13LL;
      v3 = v57[2];
      goto LABEL_17;
    case 12LL:
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v37, v3, 0LL);
      v6 = *((_QWORD *)&v37 + 1);
      if ( (_QWORD)v37 )
        goto LABEL_50;
      v7 = (char *)dest[0];
      core::intrinsics::copy_nonoverlapping::precondition_check(a2, dest[0], 1LL, 1LL, v3);
      memcpy(v7, a2, v3);
      v8 = &unk_64D45;
      v9 = 10LL;
      goto LABEL_17;
    case 13LL:
      v50[0] = &v45;
      v50[1] = <&T as core::fmt::Display>::fmt;
      *(_QWORD *)&v37 = &off_2C9CF8;
      *((_QWORD *)&v37 + 1) = 1LL;
      dest[0] = v50;
      dest[1] = &dword_0 + 1;
      v39 = 0LL;
      alloc::fmt::format::format_inner(v55, &v37);
      v6 = v55[0];
      v7 = (char *)v55[1];
      v8 = &unk_64D38;
      v9 = 13LL;
      v3 = v55[2];
      goto LABEL_17;
    case 15LL:
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v37, v3, 0LL);
      v6 = *((_QWORD *)&v37 + 1);
      if ( (_QWORD)v37 )
LABEL_50:
        alloc::raw_vec::handle_error(v6, dest[0]);
      v7 = (char *)dest[0];
      core::intrinsics::copy_nonoverlapping::precondition_check(a2, dest[0], 1LL, 1LL, v3);
      memcpy(v7, a2, v3);
      v8 = &unk_64D38;
      v9 = 13LL;
LABEL_17:
      v40 = v6;
      v41 = v7;
      v42 = v3;
      if ( !v7 || v3 < 0 )
        goto LABEL_48;
      <chrono::format::parsed::Parsed as core::default::Default>::default(&v37);
      v35[0] = v8;
      v35[1] = v9;
      v35[2] = 8LL;
      v35[3] = 0LL;
      chrono::format::parse::parse_internal(&v31, &v37, v7, v3, v35);
      if ( (_QWORD)v31 )
        v14 = 3 * (*((_QWORD *)&v31 + 1) == 0LL) + 5;
      else
        v14 = BYTE8(v31);
      if ( v14 == 8 )
      {
        LOBYTE(v13) = *((_QWORD *)&v31 + 1) == 0LL;
        chrono::format::parsed::Parsed::to_naive_datetime_with_offset(&v46, &v37, 0LL, v13);
        if ( v46 )
        {
          v48 = v46;
          v49 = v47;
          LOBYTE(v31) = 1;
          std::thread::local::LocalKey<T>::try_with(
            &v37,
            &anon_3f273f3c4772dc55a54bdec9062ccb39_6_llvm_3469199380322658755,
            &v48,
            &v31);
          core::result::Result<T,E>::expect(
            v35,
            &v37,
            anon_6b18f3ca19b16514212961b62c614770_0_llvm_3964607150695535679,
            70LL,
            &anon_6b18f3ca19b16514212961b62c614770_2_llvm_3964607150695535679);
          chrono::offset::LocalResult<T>::and_then(&v65, v35, &v48);
          if ( !v65 )
          {
            v36 = v66;
            DWORD2(v37) = DWORD2(v66);
            *(_QWORD *)&v37 = v66;
            chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(v35, &v37, HIDWORD(v66));
            if ( __ROR4__(-286331153 * HIDWORD(v35[0]) - 286331157, 2) <= 0x4444443u )
            {
              if ( !v41 || v42 < 0 )
                goto LABEL_48;
              if ( (unsigned __int64)v42 >= 3
                && !(*(_WORD *)&v41[v42 - 3] ^ 0x362E | (unsigned __int8)v41[v42 - 1] ^ 0x30) )
              {
                <chrono::datetime::DateTime<Tz> as core::ops::arith::AddAssign<chrono::time_delta::TimeDelta>>::add_assign(
                  &v36,
                  1LL,
                  0LL);
              }
            }
            *(_QWORD *)&v31 = v36;
            DWORD2(v31) = DWORD2(v36);
            chrono::naive::time::NaiveTime::overflowing_add_signed(&v37, (char *)&v31 + 4, 3600LL, 0LL);
            if ( (unsigned __int64)(*((_QWORD *)&v37 + 1) - 0xA8C000000000LL) >= 0xFFFEAE7FFFFEAE81LL
              && (v17 = v37,
                  v18 = chrono::naive::date::NaiveDate::add_days(
                          (unsigned int)v31,
                          (unsigned int)(SDWORD2(v37) / 86400)),
                  (v19 = v18) != 0) )
            {
              *(_DWORD *)v32 = v18;
              *(_QWORD *)&v32[4] = v17;
              LOBYTE(v33) = 0;
              std::thread::local::LocalKey<T>::try_with(
                &v37,
                &anon_3f273f3c4772dc55a54bdec9062ccb39_6_llvm_3469199380322658755,
                v32,
                &v33);
              core::result::Result<T,E>::expect(
                v35,
                &v37,
                anon_6b18f3ca19b16514212961b62c614770_0_llvm_3964607150695535679,
                70LL,
                &anon_6b18f3ca19b16514212961b62c614770_2_llvm_3964607150695535679);
              chrono::offset::LocalResult<T>::unwrap(
                v35,
                &anon_4b66f08430e3b2971a63e8fbb00d0ebe_106_llvm_5877677624257021904);
              LODWORD(v31) = v19;
              *(_QWORD *)((char *)&v31 + 4) = v17;
              chrono::naive::datetime::NaiveDateTime::checked_sub_signed(v32, &v31, 3600LL, 0LL);
              v20 = *(_DWORD *)v32;
              if ( *(_DWORD *)v32 )
              {
                v21 = *(_QWORD *)&v32[4];
                v33 = *(_DWORD *)v32;
                v34 = *(_QWORD *)&v32[4];
                v30 = 0;
                std::thread::local::LocalKey<T>::try_with(
                  &v37,
                  &anon_3f273f3c4772dc55a54bdec9062ccb39_6_llvm_3469199380322658755,
                  &v33,
                  &v30);
                core::result::Result<T,E>::expect(
                  v35,
                  &v37,
                  anon_6b18f3ca19b16514212961b62c614770_0_llvm_3964607150695535679,
                  70LL,
                  &anon_6b18f3ca19b16514212961b62c614770_2_llvm_3964607150695535679);
                v22 = chrono::offset::LocalResult<T>::unwrap(
                        v35,
                        &anon_4b66f08430e3b2971a63e8fbb00d0ebe_106_llvm_5877677624257021904);
                DWORD2(v37) = DWORD2(v36);
                *(_QWORD *)&v37 = v36;
                chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(v35, &v37, HIDWORD(v36));
                v23 = HIDWORD(v35[0]);
                LODWORD(v37) = v20;
                *(_QWORD *)((char *)&v37 + 4) = v21;
                chrono::naive::datetime::NaiveDateTime::overflowing_add_offset(v35, &v37, v22);
                if ( v23 / 0xE10 == HIDWORD(v35[0]) / 0xE10 )
                {
                  LODWORD(v37) = v36;
                  v24 = chrono::naive::date::NaiveDate::num_days_from_ce(&v37);
                  v25 = DWORD2(v36);
                  *(_QWORD *)(a1 + 8) = 86400LL * v24 + DWORD1(v36) - 0xE77934880LL;
                  *(_DWORD *)(a1 + 16) = v25;
                  *(_QWORD *)a1 = 0LL;
                  goto LABEL_45;
                }
                v73 = 0LL;
                v74 = v45;
                v75 = 1;
                v54[0] = &v73;
                v54[1] = <os_display::Quoted as core::fmt::Display>::fmt;
                *(_QWORD *)&v37 = &off_2C9D20;
                *((_QWORD *)&v37 + 1) = 1LL;
                dest[0] = v54;
                dest[1] = &dword_0 + 1;
                v39 = 0LL;
                alloc::fmt::format::format_inner(&v71, &v37);
                dest[0] = v72;
                v37 = v71;
                LODWORD(dest[1]) = 1;
                v15 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
                if ( !v15 )
                  alloc::alloc::handle_alloc_error(8LL, 32LL);
                goto LABEL_43;
              }
              v28 = &off_2C9A70;
              v29 = aDatetimeTimede;
            }
            else
            {
              v28 = &off_2C9A58;
              v29 = anon_3a697c587a5181cf7f4f3636b00cd118_2_llvm_1028874120538859734;
            }
            core::option::expect_failed(v29, 33LL, v28);
          }
          if ( v41 && v42 >= 0 )
          {
            v63[0] = 0LL;
            v63[1] = v41;
            v63[2] = v42;
            v64 = 1;
            v53[0] = v63;
            v53[1] = <os_display::Quoted as core::fmt::Display>::fmt;
            *(_QWORD *)&v37 = &anon_3a697c587a5181cf7f4f3636b00cd118_144_llvm_1028874120538859734;
            *((_QWORD *)&v37 + 1) = 1LL;
            dest[0] = v53;
            dest[1] = &dword_0 + 1;
            v39 = 0LL;
            alloc::fmt::format::format_inner(&v69, &v37);
            dest[0] = v70;
            v37 = v69;
            LODWORD(dest[1]) = 1;
            v15 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
            if ( !v15 )
              alloc::alloc::handle_alloc_error(8LL, 32LL);
LABEL_43:
            v26 = v37;
            v15[1] = *(_OWORD *)dest;
            *v15 = v26;
            v16 = &anon_f907210316a4f48a9c7de5c93e2a79ff_265_llvm_5503381581801417789;
            goto LABEL_44;
          }
LABEL_48:
          core::panicking::panic_nounwind(anon_3c49abdde3b3fdf25b1dcaa21df94cd5_60_llvm_2806096261713610274, 162LL);
        }
      }
      else
      {
        LOBYTE(v47) = v14;
        v46 = 0;
      }
      v15 = (_OWORD *)uu_touch::parse_timestamp::{{closure}}(&v40);
LABEL_44:
      *(_QWORD *)(a1 + 8) = v15;
      *(_QWORD *)(a1 + 16) = v16;
      *(_QWORD *)a1 = 1LL;
LABEL_45:
      alloc::raw_vec::RawVec<T,A>::current_memory(&v37, &v40);
      if ( *((_QWORD *)&v37 + 1) )
        <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v42, v37, *((_QWORD *)&v37 + 1), dest[0]);
      return a1;
    default:
      v61[0] = 0LL;
      v61[1] = a2;
      v61[2] = v3;
      v62 = 1;
      v52[0] = v61;
      v52[1] = <os_display::Quoted as core::fmt::Display>::fmt;
      *(_QWORD *)&v37 = &off_2C9D20;
      *((_QWORD *)&v37 + 1) = 1LL;
      dest[0] = v52;
      dest[1] = &dword_0 + 1;
      v39 = 0LL;
      alloc::fmt::format::format_inner(&v67, &v37);
      dest[0] = v68;
      v37 = v67;
      LODWORD(dest[1]) = 1;
      v11 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
      if ( !v11 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v12 = v37;
      v11[1] = *(_OWORD *)dest;
      *v11 = v12;
      *(_QWORD *)(a1 + 8) = v11;
      *(_QWORD *)(a1 + 16) = &anon_f907210316a4f48a9c7de5c93e2a79ff_265_llvm_5503381581801417789;
      *(_QWORD *)a1 = 1LL;
      return a1;
  }
}
