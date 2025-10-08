__int64 __fastcall uu_test::eval(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v6; // rbx
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // r12
  __int64 v12; // r14
  __int64 v13; // rdi
  __int64 v14; // rax
  __int8 v15; // bl
  __int64 v16; // rax
  __int8 v17; // r12
  __int64 v18; // rsi
  __int64 v19; // r14
  char v20; // al
  __int8 v21; // dl
  char v22; // si
  __int64 v23; // rdi
  __int64 v24; // rcx
  __int8 v25; // al
  __int64 v26; // rax
  __int128 v27; // kr00_16
  __int64 v28; // rax
  __int64 v29; // rcx
  __int128 v30; // xmm1
  __int128 v31; // kr10_16
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int128 v34; // xmm1
  __int64 v35; // rdx
  __int64 v36; // r14
  unsigned __int64 v37; // rbx
  __int128 v38; // xmm1
  __int64 v39; // rbp
  __int64 v40; // r13
  unsigned __int64 v41; // rbx
  __int128 v42; // xmm1
  __int64 v43; // rbx
  __int64 v44; // rsi
  __int64 v45; // rsi
  __int128 v46; // xmm1
  __int64 v47; // rdx
  __int64 v48; // r14
  unsigned __int64 v49; // rbx
  __int128 v50; // xmm1
  __int64 v51; // r13
  __int64 v52; // rbx
  __int128 v53; // kr50_16
  char v54; // al
  char v55; // al
  __int64 v56; // rcx
  __int128 v57; // xmm1
  __int64 v58; // rdx
  unsigned __int64 v59; // rbx
  __int128 v60; // xmm1
  __int64 v61; // rcx
  __int8 v62; // al
  __int64 v63; // rdi
  __int64 v64; // rsi
  char v65; // al
  char v66; // al
  char v67; // al
  char v68; // al
  char v69; // al
  char v70; // al
  char v71; // al
  char v72; // al
  char v73; // al
  char v74; // al
  char v75; // al
  char v76; // al
  char v77; // al
  char v78; // al
  char v79; // al
  __int8 v80; // al
  __int64 v81; // rbp
  __int64 v82; // r13
  __int64 v83; // rbx
  __int64 v84; // r12
  __int64 v85; // rbp
  __int64 v87; // rcx
  char v88; // al
  char v89; // al
  char v90; // al
  __int64 v91; // rdx
  __int64 v92; // [rsp+8h] [rbp-C0h]
  __int64 v93; // [rsp+8h] [rbp-C0h]
  __m256i v94; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v95; // [rsp+30h] [rbp-98h]
  __int64 v96; // [rsp+38h] [rbp-90h]
  __int64 v97; // [rsp+40h] [rbp-88h]
  __int64 v98; // [rsp+48h] [rbp-80h]
  __int64 v99; // [rsp+50h] [rbp-78h]
  __int128 v100; // [rsp+58h] [rbp-70h] BYREF
  __int64 v101; // [rsp+68h] [rbp-60h]
  char v102; // [rsp+70h] [rbp-58h]
  __int64 v103; // [rsp+78h] [rbp-50h]
  __int128 v104; // [rsp+80h] [rbp-48h] BYREF
  __int64 v105; // [rsp+90h] [rbp-38h]

  v6 = *(_QWORD *)(a2 + 16);
  if ( v6 )
  {
    *(_QWORD *)(a2 + 16) = v6 - 1;
    v8 = *(_QWORD *)(a2 + 8);
    v9 = *(_QWORD *)(v8 + 40 * (v6 - 1));
    v10 = *(_QWORD *)(v8 + 40 * (v6 - 1) + 8);
    v11 = *(_QWORD *)(v8 + 40 * (v6 - 1) + 16);
    v12 = *(_QWORD *)(v8 + 40 * (v6 - 1) + 24);
    v13 = *(_QWORD *)(v8 + 40 * (v6 - 1) + 32);
    switch ( v9 )
    {
      case 0LL:
        *(_QWORD *)a1 = 0LL;
        return a1;
      case 1LL:
        uu_test::eval(&v94, a2);
        v24 = v94.m256i_i64[0];
        v25 = v94.m256i_i8[8];
        if ( v94.m256i_i64[0] == 7 )
        {
          *(_BYTE *)(a1 + 8) = v94.m256i_i8[8] ^ 1;
          *(_QWORD *)a1 = 7LL;
        }
        else
        {
          *(_QWORD *)(a1 + 24) = v94.m256i_i64[3];
          *(_OWORD *)(a1 + 9) = *(_OWORD *)((char *)&v94.m256i_u64[1] + 1);
          *(_QWORD *)a1 = v24;
          *(_BYTE *)(a1 + 8) = v25;
        }
        return a1;
      case 2LL:
        v92 = *(_QWORD *)(v8 + 40 * (v6 - 1) + 16);
        if ( (unsigned __int8)<std::ffi::os_str::OsString as core::cmp::PartialEq>::eq(
                                v92,
                                *(_QWORD *)(v8 + 40 * (v6 - 1) + 24),
                                aA,
                                2LL) )
        {
          if ( v6 > 2 )
            goto LABEL_6;
        }
        else if ( ((v6 < 3) & (unsigned __int8)<std::ffi::os_str::OsString as core::cmp::PartialEq>::eq(
                                                 v11,
                                                 v12,
                                                 aO,
                                                 2LL)) == 0 )
        {
LABEL_6:
          uu_test::eval(&v94, a2);
          v14 = v94.m256i_i64[0];
          v15 = v94.m256i_i8[8];
          if ( v94.m256i_i64[0] == 7 )
          {
            uu_test::eval(&v94, a2);
            v16 = v94.m256i_i64[0];
            v17 = v94.m256i_i8[8];
            if ( v94.m256i_i64[0] == 7 )
            {
              v18 = v12;
              v19 = v92;
              v20 = <std::ffi::os_str::OsString as core::cmp::PartialEq>::eq(v92, v18, aA, 2LL);
              v21 = 0;
              v22 = 1;
              if ( (v17 & 1) != 0 )
                v21 = v15;
              else
                v22 = v15;
              if ( !v20 )
                v21 = v22;
              *(_BYTE *)(a1 + 8) = v21;
              *(_QWORD *)a1 = 7LL;
              v23 = v10;
              goto LABEL_89;
            }
            *(_QWORD *)(a1 + 24) = v94.m256i_i64[3];
            *(_OWORD *)(a1 + 9) = *(_OWORD *)((char *)&v94.m256i_u64[1] + 1);
            *(_QWORD *)a1 = v16;
            *(_BYTE *)(a1 + 8) = v17;
          }
          else
          {
            *(_QWORD *)(a1 + 24) = v94.m256i_i64[3];
            *(_OWORD *)(a1 + 9) = *(_OWORD *)((char *)&v94.m256i_u64[1] + 1);
            *(_QWORD *)a1 = v14;
            *(_BYTE *)(a1 + 8) = v15;
          }
LABEL_78:
          v23 = v10;
          v44 = v92;
          goto LABEL_90;
        }
        v94.m256i_i64[0] = 1LL;
        v94.m256i_i64[1] = v11;
        v94.m256i_i64[2] = v12;
        v94.m256i_i8[24] = 1;
        <T as alloc::string::SpecToString>::spec_to_string(&v100, &v94);
        *(_QWORD *)(a1 + 24) = v101;
        *(_OWORD *)(a1 + 8) = v100;
        *(_QWORD *)a1 = 6LL;
        goto LABEL_78;
      case 3LL:
        *(_BYTE *)(a1 + 8) = v12 != 0;
        *(_QWORD *)a1 = 7LL;
        v23 = v10;
        goto LABEL_56;
      case 4LL:
        v97 = *(_QWORD *)(v8 + 40 * (v6 - 1) + 24);
        v93 = v11;
        if ( !v10 )
        {
          v45 = v97;
          if ( v6 == 1 )
          {
            v94.m256i_i64[0] = 7LL;
          }
          else
          {
            *(_QWORD *)(a2 + 16) = v6 - 2;
            v46 = *(_OWORD *)(v8 + 40 * (v6 - 2) + 16);
            *(_OWORD *)v94.m256i_i8 = *(_OWORD *)(v8 + 40 * (v6 - 2));
            v47 = *(_QWORD *)(v8 + 40 * (v6 - 2) + 32);
            v95 = v47;
            *(_OWORD *)&v94.m256i_u64[2] = v46;
            if ( v94.m256i_i64[0] == 3 )
            {
              v48 = v94.m256i_i64[2];
              v96 = v94.m256i_i64[1];
              if ( v6 == 2 )
              {
                v94.m256i_i64[0] = 7LL;
              }
              else
              {
                v47 = v13;
                v13 = v94.m256i_i64[3];
                v49 = v6 - 3;
                *(_QWORD *)(a2 + 16) = v49;
                v50 = *(_OWORD *)(v8 + 40 * v49 + 16);
                *(_OWORD *)v94.m256i_i8 = *(_OWORD *)(v8 + 40 * v49);
                v95 = *(_QWORD *)(v8 + 40 * v49 + 32);
                *(_OWORD *)&v94.m256i_u64[2] = v50;
                if ( v94.m256i_i64[0] == 3 )
                {
                  v99 = v13;
                  v51 = v94.m256i_i64[1];
                  v98 = v94.m256i_i64[3];
                  v52 = v94.m256i_i64[2];
                  alloc::string::String::from_utf8_lossy(&v94, v45, v47);
                  v53 = *(_OWORD *)&v94.m256i_u64[1];
                  v54 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                          v94.m256i_i64[1],
                          v94.m256i_i64[2],
                          asc_182CE,
                          2LL);
                  v103 = v51;
                  if ( v54 )
                  {
                    v55 = <std::ffi::os_str::OsString as core::cmp::PartialEq>::eq(v52, v98, v48, v99) ^ 1;
                  }
                  else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                               v53,
                                               *((_QWORD *)&v53 + 1),
                                               asc_182D0,
                                               1LL) )
                  {
                    v55 = <std::ffi::os_str::OsString as core::cmp::PartialOrd>::lt(v52, v98, v48, v99);
                  }
                  else if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                               v53,
                                               *((_QWORD *)&v53 + 1),
                                               asc_182D1,
                                               1LL) )
                  {
                    v55 = <std::ffi::os_str::OsString as core::cmp::PartialOrd>::gt(v52, v98, v48, v99);
                  }
                  else
                  {
                    v55 = <std::ffi::os_str::OsString as core::cmp::PartialEq>::eq(v52, v98, v48, v99);
                  }
                  *(_BYTE *)(a1 + 8) = v55;
                  v84 = v48;
                  v19 = v97;
                  v85 = v96;
                  *(_QWORD *)a1 = 7LL;
                  core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v94);
                  core::ptr::drop_in_place<std::ffi::os_str::OsString>(v103, v52);
                  core::ptr::drop_in_place<std::ffi::os_str::OsString>(v85, v84);
                  v23 = v93;
                  goto LABEL_89;
                }
              }
              uu_test::eval::panic_cold_explicit(v13, v45, v47);
            }
          }
          uu_test::eval::panic_cold_explicit(v13, v45);
        }
        v11 = v97;
        if ( v10 == 1 )
        {
          if ( v6 == 1 )
          {
            v94.m256i_i64[0] = 7LL;
          }
          else
          {
            v33 = v6 - 2;
            *(_QWORD *)(a2 + 16) = v6 - 2;
            v34 = *(_OWORD *)(v8 + 40 * (v6 - 2) + 16);
            *(_OWORD *)v94.m256i_i8 = *(_OWORD *)(v8 + 40 * (v6 - 2));
            v95 = *(_QWORD *)(v8 + 40 * (v6 - 2) + 32);
            *(_OWORD *)&v94.m256i_u64[2] = v34;
            if ( v94.m256i_i64[0] == 3 )
            {
              v36 = v94.m256i_i64[2];
              v35 = v94.m256i_i64[1];
              v96 = v94.m256i_i64[1];
              if ( v6 == 2 )
              {
                v94.m256i_i64[0] = 7LL;
              }
              else
              {
                a5 = v94.m256i_i64[3];
                v37 = v6 - 3;
                *(_QWORD *)(a2 + 16) = v37;
                v33 = 5 * v37;
                v38 = *(_OWORD *)(v8 + 40 * v37 + 16);
                *(_OWORD *)v94.m256i_i8 = *(_OWORD *)(v8 + 40 * v37);
                v95 = *(_QWORD *)(v8 + 40 * v37 + 32);
                *(_OWORD *)&v94.m256i_u64[2] = v38;
                if ( v94.m256i_i64[0] == 3 )
                {
                  v40 = v94.m256i_i64[2];
                  v39 = v94.m256i_i64[1];
                  uu_test::integers((unsigned int)&v94, v94.m256i_i32[4], v94.m256i_i32[6], v36, a5, v11, v13);
LABEL_51:
                  v61 = v94.m256i_i64[0];
                  v62 = v94.m256i_i8[8];
                  if ( v94.m256i_i64[0] == 7 )
                  {
                    *(_BYTE *)(a1 + 8) = v94.m256i_i8[8];
                    *(_QWORD *)a1 = 7LL;
                  }
                  else
                  {
                    *(_QWORD *)(a1 + 24) = v94.m256i_i64[3];
                    *(_OWORD *)(a1 + 9) = *(_OWORD *)((char *)&v94.m256i_u64[1] + 1);
                    *(_QWORD *)a1 = v61;
                    *(_BYTE *)(a1 + 8) = v62;
                  }
                  core::ptr::drop_in_place<std::ffi::os_str::OsString>(v39, v40);
                  v63 = v96;
                  v64 = v36;
LABEL_55:
                  core::ptr::drop_in_place<std::ffi::os_str::OsString>(v63, v64);
                  v23 = v93;
LABEL_56:
                  v44 = v11;
                  goto LABEL_90;
                }
              }
              uu_test::eval::panic_cold_explicit(v13, v9, v35, v33, a5);
            }
          }
          uu_test::eval::panic_cold_explicit(v13);
        }
        if ( v6 == 1 )
        {
          v94.m256i_i64[0] = 7LL;
        }
        else
        {
          v56 = v6 - 2;
          *(_QWORD *)(a2 + 16) = v6 - 2;
          v57 = *(_OWORD *)(v8 + 40 * (v6 - 2) + 16);
          *(_OWORD *)v94.m256i_i8 = *(_OWORD *)(v8 + 40 * (v6 - 2));
          v95 = *(_QWORD *)(v8 + 40 * (v6 - 2) + 32);
          *(_OWORD *)&v94.m256i_u64[2] = v57;
          if ( v94.m256i_i64[0] == 3 )
          {
            v36 = v94.m256i_i64[2];
            v58 = v94.m256i_i64[1];
            v96 = v94.m256i_i64[1];
            if ( v6 == 2 )
            {
              v94.m256i_i64[0] = 7LL;
            }
            else
            {
              a5 = v94.m256i_i64[3];
              v59 = v6 - 3;
              *(_QWORD *)(a2 + 16) = v59;
              v56 = 5 * v59;
              v60 = *(_OWORD *)(v8 + 40 * v59 + 16);
              *(_OWORD *)v94.m256i_i8 = *(_OWORD *)(v8 + 40 * v59);
              v95 = *(_QWORD *)(v8 + 40 * v59 + 32);
              *(_OWORD *)&v94.m256i_u64[2] = v60;
              if ( v94.m256i_i64[0] == 3 )
              {
                v40 = v94.m256i_i64[2];
                v39 = v94.m256i_i64[1];
                uu_test::files((unsigned int)&v94, v94.m256i_i32[4], v94.m256i_i32[6], v36, a5, v11, v13);
                goto LABEL_51;
              }
            }
            uu_test::eval::panic_cold_explicit(v13, v9, v58, v56, a5);
          }
        }
        uu_test::eval::panic_cold_explicit(v13);
      case 5LL:
        v96 = *(_QWORD *)(v8 + 40 * (v6 - 1) + 32);
        v97 = v12;
        v93 = v11;
        if ( (v10 & 1) != 0 )
        {
          core::str::converts::from_utf8(&v94, v97, v96);
          if ( (v94.m256i_i8[0] & 1) != 0 )
            core::option::unwrap_failed(&off_E0398);
          v26 = *(_QWORD *)(a2 + 16);
          if ( v26 )
          {
            v27 = *(_OWORD *)&v94.m256i_u64[1];
            v28 = v26 - 1;
            *(_QWORD *)(a2 + 16) = v28;
            v29 = *(_QWORD *)(a2 + 8);
            v28 *= 5LL;
            v30 = *(_OWORD *)(v29 + 8 * v28 + 16);
            *(_OWORD *)v94.m256i_i8 = *(_OWORD *)(v29 + 8 * v28);
            v95 = *(_QWORD *)(v29 + 8 * v28 + 32);
            *(_OWORD *)&v94.m256i_u64[2] = v30;
            if ( v94.m256i_i64[0] == 3 )
            {
              v96 = v94.m256i_i64[1];
              v31 = *(_OWORD *)&v94.m256i_u64[2];
              if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                      v27,
                                      *((_QWORD *)&v27 + 1),
                                      aB,
                                      2LL) )
              {
                LOBYTE(v32) = 0;
              }
              else
              {
                v65 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v27, *((_QWORD *)&v27 + 1), aC, 2LL);
                LOBYTE(v32) = 1;
                if ( !v65 )
                {
                  v66 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v27, *((_QWORD *)&v27 + 1), aD, 2LL);
                  LOBYTE(v32) = 2;
                  if ( !v66 )
                  {
                    v67 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v27, *((_QWORD *)&v27 + 1), aE, 2LL);
                    LOBYTE(v32) = 3;
                    if ( !v67 )
                    {
                      v68 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                              v27,
                              *((_QWORD *)&v27 + 1),
                              asc_182F9,
                              2LL);
                      LOBYTE(v32) = 5;
                      if ( !v68 )
                      {
                        v69 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v27, *((_QWORD *)&v27 + 1), aG, 2LL);
                        LOBYTE(v32) = 6;
                        if ( !v69 )
                        {
                          v70 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                  v27,
                                  *((_QWORD *)&v27 + 1),
                                  aG_0,
                                  2LL);
                          LOBYTE(v32) = 7;
                          if ( !v70 )
                          {
                            v71 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                    v27,
                                    *((_QWORD *)&v27 + 1),
                                    asc_182FF,
                                    2LL);
                            LOBYTE(v32) = 8;
                            if ( !v71 )
                            {
                              v72 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                      v27,
                                      *((_QWORD *)&v27 + 1),
                                      aK,
                                      2LL);
                              LOBYTE(v32) = 9;
                              if ( !v72 )
                              {
                                v73 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                        v27,
                                        *((_QWORD *)&v27 + 1),
                                        asc_18303,
                                        2LL);
                                LOBYTE(v32) = 8;
                                if ( !v73 )
                                {
                                  v74 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                          v27,
                                          *((_QWORD *)&v27 + 1),
                                          aN_0,
                                          2LL);
                                  LOBYTE(v32) = 4;
                                  if ( !v74 )
                                  {
                                    v75 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                            v27,
                                            *((_QWORD *)&v27 + 1),
                                            aO_0,
                                            2LL);
                                    LOBYTE(v32) = 10;
                                    if ( !v75 )
                                    {
                                      v76 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                              v27,
                                              *((_QWORD *)&v27 + 1),
                                              aP,
                                              2LL);
                                      LOBYTE(v32) = 11;
                                      if ( !v76 )
                                      {
                                        v77 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                                v27,
                                                *((_QWORD *)&v27 + 1),
                                                aR,
                                                2LL);
                                        LOBYTE(v32) = 12;
                                        if ( !v77 )
                                        {
                                          v78 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                                  v27,
                                                  *((_QWORD *)&v27 + 1),
                                                  aS_0,
                                                  2LL);
                                          LOBYTE(v32) = 13;
                                          if ( !v78 )
                                          {
                                            v79 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                                    v27,
                                                    *((_QWORD *)&v27 + 1),
                                                    aS,
                                                    2LL);
                                            LOBYTE(v32) = 14;
                                            if ( !v79 )
                                            {
                                              if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                                                      v27,
                                                                      *((_QWORD *)&v27 + 1),
                                                                      aT,
                                                                      2LL) )
                                              {
                                                uu_test::isatty(&v94, v31, *((_QWORD *)&v31 + 1));
                                                v87 = v94.m256i_i64[0];
                                                v80 = v94.m256i_i8[8];
                                                if ( v94.m256i_i64[0] != 7 )
                                                {
                                                  *(_QWORD *)(a1 + 24) = v94.m256i_i64[3];
                                                  *(_OWORD *)(a1 + 9) = *(_OWORD *)((char *)&v94.m256i_u64[1] + 1);
                                                  *(_QWORD *)a1 = v87;
                                                  *(_BYTE *)(a1 + 8) = v80;
                                                  core::ptr::drop_in_place<std::ffi::os_str::OsString>(v96, v31);
                                                  v23 = v11;
                                                  v44 = v97;
                                                  goto LABEL_90;
                                                }
                                                v19 = v97;
                                                goto LABEL_74;
                                              }
                                              v88 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                                      v27,
                                                      *((_QWORD *)&v27 + 1),
                                                      aU,
                                                      2LL);
                                              LOBYTE(v32) = 15;
                                              if ( !v88 )
                                              {
                                                v89 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                                        v27,
                                                        *((_QWORD *)&v27 + 1),
                                                        aW,
                                                        2LL);
                                                LOBYTE(v32) = 16;
                                                if ( !v89 )
                                                {
                                                  v90 = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                                                          v27,
                                                          *((_QWORD *)&v27 + 1),
                                                          asc_18317,
                                                          2LL);
                                                  LOBYTE(v32) = 17;
                                                  if ( !v90 )
                                                    uu_test::eval::panic_cold_explicit(
                                                      v27,
                                                      *((_QWORD *)&v27 + 1),
                                                      v91,
                                                      v32);
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
              v19 = v97;
              v80 = uu_test::path(v31, *((_QWORD *)&v31 + 1), (unsigned __int8)v32);
LABEL_74:
              *(_BYTE *)(a1 + 8) = v80 & 1;
              *(_QWORD *)a1 = 7LL;
              core::ptr::drop_in_place<std::ffi::os_str::OsString>(v96, v31);
              v23 = *((_QWORD *)&v31 + 1);
LABEL_89:
              v44 = v19;
              goto LABEL_90;
            }
          }
          else
          {
            v94.m256i_i64[0] = 7LL;
          }
          uu_test::eval::panic_cold_explicit();
        }
        v23 = v11;
        if ( v6 == 1 )
          goto LABEL_38;
        v41 = v6 - 2;
        *(_QWORD *)(a2 + 16) = v41;
        v42 = *(_OWORD *)(v8 + 40 * v41 + 16);
        *(_OWORD *)v94.m256i_i8 = *(_OWORD *)(v8 + 40 * v41);
        v95 = *(_QWORD *)(v8 + 40 * v41 + 32);
        *(_OWORD *)&v94.m256i_u64[2] = v42;
        v43 = v94.m256i_i64[0];
        if ( v94.m256i_i64[0] == 3 )
        {
          v82 = v94.m256i_i64[1];
          v83 = v94.m256i_i64[3];
          v81 = v94.m256i_i64[2];
          v11 = v97;
        }
        else
        {
          if ( v94.m256i_i64[0] != 6 )
          {
            if ( v94.m256i_i64[0] == 7 )
            {
LABEL_38:
              *(_BYTE *)(a1 + 8) = 1;
              *(_QWORD *)a1 = 7LL;
            }
            else
            {
              *(_QWORD *)&v100 = 1LL;
              *((_QWORD *)&v100 + 1) = v97;
              v101 = v96;
              v102 = 1;
              <T as alloc::string::SpecToString>::spec_to_string(&v104, &v100);
              *(_QWORD *)(a1 + 24) = v105;
              *(_OWORD *)(a1 + 8) = v104;
              *(_QWORD *)a1 = 3LL;
              if ( v43 == 3 )
              {
                core::ptr::drop_in_place<std::ffi::os_str::OsString>(v94.m256i_i64[1], v94.m256i_i64[2]);
              }
              else if ( v43 != 7 )
              {
                core::ptr::drop_in_place<uu_test::parser::Symbol>(&v94);
                v23 = v11;
              }
            }
            v44 = v97;
LABEL_90:
            core::ptr::drop_in_place<std::ffi::os_str::OsString>(v23, v44);
            return a1;
          }
          v11 = v97;
          <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v100, 1LL, 0LL);
          v81 = *((_QWORD *)&v100 + 1);
          v82 = v100;
          v83 = v101;
          core::ptr::drop_in_place<uu_test::parser::Symbol>(&v94);
        }
        *(_BYTE *)(a1 + 8) = <std::ffi::os_str::OsString as core::cmp::PartialEq>::eq(v11, v96, aZ, 2LL) ^ (v83 != 0);
        *(_QWORD *)a1 = 7LL;
        v63 = v82;
        v64 = v81;
        goto LABEL_55;
      case 6LL:
      case 7LL:
        break;
    }
  }
  *(_BYTE *)(a1 + 8) = 0;
  *(_QWORD *)a1 = 7LL;
  return a1;
}