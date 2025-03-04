__int64 __fastcall uu_test::eval(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int128 v6; // xmm1
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rcx
  __int8 v10; // al
  __int64 v11; // rdi
  __int128 v12; // xmm1
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int128 v15; // xmm1
  __int64 v16; // rcx
  __int8 v17; // al
  char v18; // cl
  char v19; // al
  __int64 v20; // rax
  __int128 v21; // kr00_16
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int128 v25; // xmm1
  char v26; // cl
  __m256i *v27; // rdi
  __int64 v28; // rax
  __int8 v29; // bp
  __int64 v30; // rax
  __int8 v31; // r14
  char v32; // al
  __int8 v33; // cl
  char v34; // si
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int64 v40; // rcx
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int64 v43; // rdi
  __int128 v44; // xmm1
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int128 v47; // xmm1
  char v48; // dl
  char v49; // al
  char v50; // al
  char v51; // al
  char v52; // al
  char v53; // al
  char v54; // al
  char v55; // al
  char v56; // al
  char v57; // al
  char v58; // al
  char v59; // al
  char v60; // al
  char v61; // al
  char v62; // al
  char v63; // al
  char v64; // al
  __m256i *v65; // rsi
  char v66; // al
  __int64 v67; // rdx
  __int64 v68; // rcx
  char v69; // al
  __int64 v70; // rdx
  __int64 v71; // rcx
  char v72; // al
  bool v73; // dl
  __int64 v75; // rcx
  __int8 v76; // al
  char v77; // al
  char v78; // al
  char v79; // al
  __m256i v80; // [rsp+10h] [rbp-118h] BYREF
  __int64 v81; // [rsp+30h] [rbp-F8h]
  __int128 v82; // [rsp+40h] [rbp-E8h] BYREF
  __m256i *v83; // [rsp+50h] [rbp-D8h]
  __m256i v84; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v85; // [rsp+80h] [rbp-A8h]
  __int128 v86; // [rsp+90h] [rbp-98h] BYREF
  __int64 v87; // [rsp+A0h] [rbp-88h]
  __m256i v88; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v89; // [rsp+D0h] [rbp-58h]
  _BYTE v90[72]; // [rsp+E0h] [rbp-48h] BYREF

  v3 = *(_QWORD *)(a2 + 16);
  if ( !v3 )
  {
LABEL_3:
    *(_BYTE *)(a1 + 8) = 0;
    *(_QWORD *)a1 = 7LL;
    return a1;
  }
  *(_QWORD *)(a2 + 16) = v3 - 1;
  v4 = *(_QWORD *)(a2 + 8);
  v5 = *(_QWORD *)(v4 + 40 * (v3 - 1) + 32);
  v6 = *(_OWORD *)(v4 + 40 * (v3 - 1) + 16);
  *(_OWORD *)v88.m256i_i8 = *(_OWORD *)(v4 + 40 * (v3 - 1));
  v89 = v5;
  *(_OWORD *)&v88.m256i_u64[2] = v6;
  switch ( v88.m256i_i64[0] )
  {
    case 1LL:
      uu_test::eval((__int64)&v80, a2);
      v9 = v80.m256i_i64[0];
      v10 = v80.m256i_i8[8];
      if ( v80.m256i_i64[0] == 7 )
      {
        *(_BYTE *)(a1 + 8) = v80.m256i_i8[8] ^ 1;
        *(_QWORD *)a1 = 7LL;
      }
      else
      {
        *(_QWORD *)(a1 + 24) = v80.m256i_i64[3];
        *(_OWORD *)(a1 + 9) = *(_OWORD *)((char *)&v80.m256i_u64[1] + 1);
        *(_QWORD *)a1 = v9;
        *(_BYTE *)(a1 + 8) = v10;
      }
      return a1;
    case 2LL:
      v82 = *(_OWORD *)&v88.m256i_u64[1];
      v7 = v88.m256i_i64[3];
      v83 = (__m256i *)v88.m256i_i64[3];
      v8 = v88.m256i_i64[2];
      if ( (unsigned __int8)<std::ffi::os_str::OsString as core::cmp::PartialEq<&str>>::eq(
                              v88.m256i_i64[2],
                              v88.m256i_i64[3],
                              &unk_1D0D2) )
      {
        if ( *(_QWORD *)(a2 + 16) > 1uLL )
        {
LABEL_29:
          uu_test::eval((__int64)&v80, a2);
          v28 = v80.m256i_i64[0];
          v29 = v80.m256i_i8[8];
          if ( v80.m256i_i64[0] == 7 )
          {
            uu_test::eval((__int64)&v80, a2);
            v30 = v80.m256i_i64[0];
            v31 = v80.m256i_i8[8];
            if ( v80.m256i_i64[0] == 7 )
            {
              v32 = <std::ffi::os_str::OsString as core::cmp::PartialEq<&str>>::eq(
                      *((_QWORD *)&v82 + 1),
                      v83,
                      &unk_1D0D2);
              v33 = 0;
              v34 = 1;
              if ( v31 )
                v33 = v29;
              else
                v34 = v29;
              if ( !v32 )
                v33 = v34;
              *(_BYTE *)(a1 + 8) = v33;
              *(_QWORD *)a1 = 7LL;
            }
            else
            {
              *(_QWORD *)(a1 + 24) = v80.m256i_i64[3];
              *(_OWORD *)(a1 + 9) = *(_OWORD *)((char *)&v80.m256i_u64[1] + 1);
              *(_QWORD *)a1 = v30;
              *(_BYTE *)(a1 + 8) = v31;
            }
          }
          else
          {
            *(_QWORD *)(a1 + 24) = v80.m256i_i64[3];
            *(_OWORD *)(a1 + 9) = *(_OWORD *)((char *)&v80.m256i_u64[1] + 1);
            *(_QWORD *)a1 = v28;
            *(_BYTE *)(a1 + 8) = v29;
          }
          goto LABEL_80;
        }
      }
      else
      {
        if ( ((*(_QWORD *)(a2 + 16) < 2uLL) & (unsigned __int8)<std::ffi::os_str::OsString as core::cmp::PartialEq<&str>>::eq(
                                                                 v88.m256i_i64[2],
                                                                 v88.m256i_i64[3],
                                                                 &unk_1D0D4)) != 1 )
          goto LABEL_29;
        v8 = *((_QWORD *)&v82 + 1);
        v7 = (__int64)v83;
      }
      v80.m256i_i64[0] = 1LL;
      v80.m256i_i64[1] = v8;
      v80.m256i_i64[2] = v7;
      v80.m256i_i8[24] = 1;
      <T as alloc::string::ToString>::to_string(&v84, &v80);
      *(_QWORD *)(a1 + 24) = v84.m256i_i64[2];
      *(_OWORD *)(a1 + 8) = *(_OWORD *)v84.m256i_i8;
      *(_QWORD *)a1 = 6LL;
      goto LABEL_80;
    case 3LL:
      v80.m256i_i64[2] = v88.m256i_i64[3];
      *(_OWORD *)v80.m256i_i8 = *(_OWORD *)&v88.m256i_u64[1];
      *(_BYTE *)(a1 + 8) = v88.m256i_i64[3] != 0;
      *(_QWORD *)a1 = 7LL;
      v27 = &v80;
      goto LABEL_99;
    case 4LL:
      if ( !v88.m256i_i64[1] )
      {
        v83 = (__m256i *)v89;
        v82 = *(_OWORD *)&v88.m256i_u64[2];
        if ( v3 == 1 )
        {
          v84.m256i_i64[0] = 7LL;
        }
        else
        {
          *(_QWORD *)(a2 + 16) = v3 - 2;
          v38 = *(_OWORD *)(v4 + 40 * (v3 - 2));
          v39 = *(_OWORD *)(v4 + 40 * (v3 - 2) + 16);
          v85 = *(_QWORD *)(v4 + 40 * (v3 - 2) + 32);
          *(_OWORD *)&v84.m256i_u64[2] = v39;
          *(_OWORD *)v84.m256i_i8 = v38;
          if ( v3 != 2 )
          {
            v40 = v3 - 3;
            *(_QWORD *)(a2 + 16) = v40;
            v40 *= 5LL;
            v41 = *(_OWORD *)(v4 + 8 * v40);
            v42 = *(_OWORD *)(v4 + 8 * v40 + 16);
            v81 = *(_QWORD *)(v4 + 8 * v40 + 32);
            *(_OWORD *)&v80.m256i_u64[2] = v42;
            *(_OWORD *)v80.m256i_i8 = v41;
LABEL_73:
            v65 = v83;
            v66 = <std::ffi::os_str::OsString as core::cmp::PartialEq<&str>>::eq(*((_QWORD *)&v82 + 1), v83, &unk_1D0D6);
            v67 = v80.m256i_i64[0];
            v68 = v84.m256i_i64[0];
            if ( v66 )
            {
              if ( v80.m256i_i32[0] == 7 )
              {
                v69 = v84.m256i_i32[0] != 7;
              }
              else
              {
                v69 = 1;
                if ( v84.m256i_i32[0] != 7 )
                {
                  v65 = &v84;
                  v69 = <uu_test::parser::Symbol as core::cmp::PartialEq>::eq(
                          &v80,
                          &v84,
                          v80.m256i_i64[0],
                          v84.m256i_i64[0]) ^ 1;
                }
              }
            }
            else
            {
              LOBYTE(v65) = v80.m256i_i64[0] == 7;
              v69 = v80.m256i_i64[0] == 7 && v84.m256i_i32[0] == 7;
              if ( v80.m256i_i32[0] != 7 && v84.m256i_i32[0] != 7 )
              {
                v65 = &v84;
                v69 = <uu_test::parser::Symbol as core::cmp::PartialEq>::eq(
                        &v80,
                        &v84,
                        v80.m256i_i64[0],
                        v84.m256i_i64[0]);
              }
            }
            *(_BYTE *)(a1 + 8) = v69;
            *(_QWORD *)a1 = 7LL;
            core::ptr::drop_in_place<core::option::Option<uu_test::parser::Symbol>>(&v80, v65, v67, v68);
            core::ptr::drop_in_place<core::option::Option<uu_test::parser::Symbol>>(&v84, v65, v70, v71);
            core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v82);
            v19 = 1;
            v18 = 0;
            goto LABEL_84;
          }
        }
        v80.m256i_i64[0] = 7LL;
        goto LABEL_73;
      }
      if ( v88.m256i_i32[2] == 1 )
      {
        v87 = v89;
        v86 = *(_OWORD *)&v88.m256i_u64[2];
        if ( v3 == 1 )
        {
          v80.m256i_i64[0] = 7LL;
        }
        else
        {
          *(_QWORD *)(a2 + 16) = v3 - 2;
          v11 = *(_QWORD *)(v4 + 40 * (v3 - 2) + 32);
          v12 = *(_OWORD *)(v4 + 40 * (v3 - 2) + 16);
          *(_OWORD *)v80.m256i_i8 = *(_OWORD *)(v4 + 40 * (v3 - 2));
          v81 = v11;
          *(_OWORD *)&v80.m256i_u64[2] = v12;
          if ( v80.m256i_i64[0] == 3 )
          {
            v83 = (__m256i *)v80.m256i_i64[3];
            v82 = *(_OWORD *)&v80.m256i_u64[1];
            if ( v3 == 2 )
            {
              v80.m256i_i64[0] = 7LL;
            }
            else
            {
              v13 = v3 - 3;
              *(_QWORD *)(a2 + 16) = v13;
              v13 *= 5LL;
              v14 = *(_QWORD *)(v4 + 8 * v13 + 32);
              v15 = *(_OWORD *)(v4 + 8 * v13 + 16);
              *(_OWORD *)v80.m256i_i8 = *(_OWORD *)(v4 + 8 * v13);
              v81 = v14;
              *(_OWORD *)&v80.m256i_u64[2] = v15;
              if ( v80.m256i_i64[0] == 3 )
              {
                v84.m256i_i64[2] = v80.m256i_i64[3];
                *(_OWORD *)v84.m256i_i8 = *(_OWORD *)&v80.m256i_u64[1];
                uu_test::integers(
                  (__int64)&v80,
                  v80.m256i_i64[2],
                  v80.m256i_i64[3],
                  *((__int64 *)&v82 + 1),
                  (__int64)v83,
                  *((__int64 *)&v86 + 1),
                  v87);
                v16 = v80.m256i_i64[0];
                v17 = v80.m256i_i8[8];
                if ( v80.m256i_i64[0] == 7 )
                {
                  *(_BYTE *)(a1 + 8) = v80.m256i_i8[8];
                  *(_QWORD *)a1 = 7LL;
                  core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v84);
                  core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v82);
                  core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v86);
                  v18 = 1;
                  v19 = 0;
LABEL_84:
                  v48 = 1;
                  goto LABEL_85;
                }
                goto LABEL_70;
              }
            }
            uu_test::eval::panic_cold_explicit();
          }
        }
        uu_test::eval::panic_cold_explicit();
      }
      v87 = v89;
      v86 = *(_OWORD *)&v88.m256i_u64[2];
      if ( v3 == 1 )
      {
        v80.m256i_i64[0] = 7LL;
LABEL_120:
        uu_test::eval::panic_cold_explicit();
      }
      *(_QWORD *)(a2 + 16) = v3 - 2;
      v43 = *(_QWORD *)(v4 + 40 * (v3 - 2) + 32);
      v44 = *(_OWORD *)(v4 + 40 * (v3 - 2) + 16);
      *(_OWORD *)v80.m256i_i8 = *(_OWORD *)(v4 + 40 * (v3 - 2));
      v81 = v43;
      *(_OWORD *)&v80.m256i_u64[2] = v44;
      if ( v80.m256i_i64[0] != 3 )
        goto LABEL_120;
      v83 = (__m256i *)v80.m256i_i64[3];
      v82 = *(_OWORD *)&v80.m256i_u64[1];
      if ( v3 == 2 )
      {
        v80.m256i_i64[0] = 7LL;
LABEL_124:
        uu_test::eval::panic_cold_explicit();
      }
      v45 = v3 - 3;
      *(_QWORD *)(a2 + 16) = v45;
      v45 *= 5LL;
      v46 = *(_QWORD *)(v4 + 8 * v45 + 32);
      v47 = *(_OWORD *)(v4 + 8 * v45 + 16);
      *(_OWORD *)v80.m256i_i8 = *(_OWORD *)(v4 + 8 * v45);
      v81 = v46;
      *(_OWORD *)&v80.m256i_u64[2] = v47;
      if ( v80.m256i_i64[0] != 3 )
        goto LABEL_124;
      v84.m256i_i64[2] = v80.m256i_i64[3];
      *(_OWORD *)v84.m256i_i8 = *(_OWORD *)&v80.m256i_u64[1];
      uu_test::files(
        (__int64)&v80,
        v80.m256i_i64[2],
        v80.m256i_i64[3],
        *((__int64 *)&v82 + 1),
        (__int64)v83,
        *((__int64 *)&v86 + 1),
        v87);
      v16 = v80.m256i_i64[0];
      v17 = v80.m256i_i8[8];
      if ( v80.m256i_i64[0] != 7 )
      {
LABEL_70:
        *(_QWORD *)(a1 + 24) = v80.m256i_i64[3];
        *(_OWORD *)(a1 + 9) = *(_OWORD *)((char *)&v80.m256i_u64[1] + 1);
        *(_QWORD *)a1 = v16;
        *(_BYTE *)(a1 + 8) = v17;
        core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v84);
        core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v82);
        v27 = (__m256i *)&v86;
        goto LABEL_99;
      }
      *(_BYTE *)(a1 + 8) = v80.m256i_i8[8];
      *(_QWORD *)a1 = 7LL;
      core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v84);
      core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v82);
      core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v86);
      v18 = 1;
      v48 = 0;
      v19 = 1;
LABEL_85:
      if ( !v88.m256i_i64[1] )
      {
        if ( !v18 )
          return a1;
        goto LABEL_92;
      }
      if ( v88.m256i_i32[2] == 1 )
      {
        if ( !v19 )
          return a1;
        goto LABEL_92;
      }
      if ( v48 )
      {
LABEL_92:
        v27 = (__m256i *)&v88.m256i_u64[2];
        goto LABEL_99;
      }
      return a1;
    case 5LL:
      if ( v88.m256i_i64[1] )
      {
        v82 = *(_OWORD *)&v88.m256i_u64[2];
        v83 = (__m256i *)v89;
        std::sys::os_str::bytes::Slice::to_str(&v80, v88.m256i_i64[3]);
        if ( v80.m256i_i64[0] )
          core::option::unwrap_failed(&off_114C20);
        v20 = *(_QWORD *)(a2 + 16);
        if ( v20 )
        {
          v21 = *(_OWORD *)&v80.m256i_u64[1];
          v22 = v20 - 1;
          *(_QWORD *)(a2 + 16) = v22;
          v23 = *(_QWORD *)(a2 + 8);
          v22 *= 5LL;
          v24 = *(_QWORD *)(v23 + 8 * v22 + 32);
          v25 = *(_OWORD *)(v23 + 8 * v22 + 16);
          *(_OWORD *)v80.m256i_i8 = *(_OWORD *)(v23 + 8 * v22);
          v81 = v24;
          *(_OWORD *)&v80.m256i_u64[2] = v25;
          if ( v80.m256i_i64[0] == 3 )
          {
            v84.m256i_i64[2] = v80.m256i_i64[3];
            *(_OWORD *)v84.m256i_i8 = *(_OWORD *)&v80.m256i_u64[1];
            if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                    v21,
                                    *((_QWORD *)&v21 + 1),
                                    aB,
                                    2LL) )
            {
              v26 = 0;
            }
            else
            {
              v49 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v21, *((_QWORD *)&v21 + 1), aC, 2LL);
              v26 = 1;
              if ( !v49 )
              {
                v50 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v21, *((_QWORD *)&v21 + 1), aD_0, 2LL);
                v26 = 2;
                if ( !v50 )
                {
                  v51 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v21, *((_QWORD *)&v21 + 1), aE, 2LL);
                  v26 = 3;
                  if ( !v51 )
                  {
                    v52 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                            v21,
                            *((_QWORD *)&v21 + 1),
                            asc_1D0B0,
                            2LL);
                    v26 = 5;
                    if ( !v52 )
                    {
                      v53 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v21, *((_QWORD *)&v21 + 1), aG, 2LL);
                      v26 = 6;
                      if ( !v53 )
                      {
                        v54 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v21, *((_QWORD *)&v21 + 1), aG_0, 2LL);
                        v26 = 7;
                        if ( !v54 )
                        {
                          v55 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                  v21,
                                  *((_QWORD *)&v21 + 1),
                                  asc_1D0B6,
                                  2LL);
                          v26 = 8;
                          if ( !v55 )
                          {
                            v56 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                    v21,
                                    *((_QWORD *)&v21 + 1),
                                    aK,
                                    2LL);
                            v26 = 9;
                            if ( !v56 )
                            {
                              v57 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                      v21,
                                      *((_QWORD *)&v21 + 1),
                                      asc_1D0BA,
                                      2LL);
                              v26 = 8;
                              if ( !v57 )
                              {
                                v58 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                        v21,
                                        *((_QWORD *)&v21 + 1),
                                        aN,
                                        2LL);
                                v26 = 4;
                                if ( !v58 )
                                {
                                  v59 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                          v21,
                                          *((_QWORD *)&v21 + 1),
                                          aO,
                                          2LL);
                                  v26 = 10;
                                  if ( !v59 )
                                  {
                                    v60 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                            v21,
                                            *((_QWORD *)&v21 + 1),
                                            aP,
                                            2LL);
                                    v26 = 11;
                                    if ( !v60 )
                                    {
                                      v61 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                              v21,
                                              *((_QWORD *)&v21 + 1),
                                              aR,
                                              2LL);
                                      v26 = 12;
                                      if ( !v61 )
                                      {
                                        v62 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                                v21,
                                                *((_QWORD *)&v21 + 1),
                                                aS,
                                                2LL);
                                        v26 = 13;
                                        if ( !v62 )
                                        {
                                          v63 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                                  v21,
                                                  *((_QWORD *)&v21 + 1),
                                                  aS_0,
                                                  2LL);
                                          v26 = 14;
                                          if ( !v63 )
                                          {
                                            if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                                                    v21,
                                                                    *((_QWORD *)&v21 + 1),
                                                                    aT,
                                                                    2LL) )
                                            {
                                              uu_test::isatty((__int64)&v80, v84.m256i_i64[1], v84.m256i_i64[2]);
                                              v75 = v80.m256i_i64[0];
                                              v76 = v80.m256i_i8[8];
                                              if ( v80.m256i_i64[0] != 7 )
                                              {
                                                *(_QWORD *)(a1 + 24) = v80.m256i_i64[3];
                                                *(_OWORD *)(a1 + 9) = *(_OWORD *)((char *)&v80.m256i_u64[1] + 1);
                                                *(_QWORD *)a1 = v75;
                                                *(_BYTE *)(a1 + 8) = v76;
                                                core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v84);
LABEL_80:
                                                v27 = (__m256i *)&v82;
                                                goto LABEL_99;
                                              }
                                              v64 = v80.m256i_i8[8] != 0;
LABEL_67:
                                              *(_BYTE *)(a1 + 8) = v64;
                                              *(_QWORD *)a1 = 7LL;
                                              core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v84);
                                              core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v82);
                                              if ( v88.m256i_i64[1] )
                                                return a1;
                                              goto LABEL_98;
                                            }
                                            v77 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                                    v21,
                                                    *((_QWORD *)&v21 + 1),
                                                    aU,
                                                    2LL);
                                            v26 = 15;
                                            if ( !v77 )
                                            {
                                              v78 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                                      v21,
                                                      *((_QWORD *)&v21 + 1),
                                                      aW,
                                                      2LL);
                                              v26 = 16;
                                              if ( !v78 )
                                              {
                                                v79 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                                        v21,
                                                        *((_QWORD *)&v21 + 1),
                                                        asc_1D0CE,
                                                        2LL);
                                                v26 = 17;
                                                if ( !v79 )
                                                  uu_test::eval::panic_cold_explicit();
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            v64 = uu_test::path(v84.m256i_i64[1], v84.m256i_i64[2], v26);
            goto LABEL_67;
          }
        }
        else
        {
          v80.m256i_i64[0] = 7LL;
        }
        uu_test::eval::panic_cold_explicit();
      }
      *(_QWORD *)&v90[16] = v89;
      *(_OWORD *)v90 = *(_OWORD *)&v88.m256i_u64[2];
      if ( v3 == 1 )
        goto LABEL_41;
      v35 = v3 - 2;
      *(_QWORD *)(a2 + 16) = v35;
      v35 *= 5LL;
      v36 = *(_QWORD *)(v4 + 8 * v35 + 32);
      v37 = *(_OWORD *)(v4 + 8 * v35 + 16);
      *(_OWORD *)v80.m256i_i8 = *(_OWORD *)(v4 + 8 * v35);
      v81 = v36;
      *(_OWORD *)&v80.m256i_u64[2] = v37;
      switch ( v80.m256i_i64[0] )
      {
        case 3LL:
          v87 = v80.m256i_i64[3];
          v86 = *(_OWORD *)&v80.m256i_u64[1];
          break;
        case 6LL:
          std::sys::os_str::bytes::Slice::to_owned(&v84, 1LL, 0LL);
          v87 = v84.m256i_i64[2];
          v86 = *(_OWORD *)v84.m256i_i8;
          core::ptr::drop_in_place<uu_test::parser::Symbol>(&v80);
          break;
        case 7LL:
LABEL_41:
          *(_BYTE *)(a1 + 8) = 1;
          *(_QWORD *)a1 = 7LL;
          v27 = (__m256i *)v90;
LABEL_99:
          core::ptr::drop_in_place<std::ffi::os_str::OsString>(v27);
          return a1;
        default:
          v84.m256i_i64[0] = 1LL;
          *(_OWORD *)&v84.m256i_u64[1] = *(_OWORD *)&v90[8];
          v84.m256i_i8[24] = 1;
          <T as alloc::string::ToString>::to_string(&v82, &v84);
          *(_QWORD *)(a1 + 24) = v83;
          *(_OWORD *)(a1 + 8) = v82;
          *(_QWORD *)a1 = 3LL;
          if ( v80.m256i_i64[0] == 3 )
          {
            core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v80.m256i_u64[1]);
          }
          else if ( v80.m256i_i64[0] != 7 )
          {
            core::ptr::drop_in_place<uu_test::parser::Symbol>(&v80);
          }
          v27 = (__m256i *)v90;
          goto LABEL_99;
      }
      v72 = <std::ffi::os_str::OsString as core::cmp::PartialEq<&str>>::eq(
              *(_QWORD *)&v90[8],
              *(_QWORD *)&v90[16],
              &unk_1D0EF);
      v73 = v87 != 0;
      if ( v72 )
        v73 = v87 == 0;
      *(_BYTE *)(a1 + 8) = v73;
      *(_QWORD *)a1 = 7LL;
      core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v86);
      core::ptr::drop_in_place<std::ffi::os_str::OsString>(v90);
      if ( !v88.m256i_i64[1] )
        return a1;
LABEL_98:
      v27 = (__m256i *)&v88.m256i_u64[2];
      goto LABEL_99;
    case 6LL:
    case 7LL:
      goto LABEL_3;
    default:
      *(_QWORD *)a1 = 0LL;
      return a1;
  }
}
