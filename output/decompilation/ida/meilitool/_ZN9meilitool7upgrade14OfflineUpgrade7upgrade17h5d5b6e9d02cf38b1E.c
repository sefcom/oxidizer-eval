__int64 __fastcall meilitool::upgrade::OfflineUpgrade::upgrade(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // rdx
  unsigned int v4; // ecx
  unsigned int v5; // eax
  char v6; // r15
  __int64 v7; // r14
  __int64 v8; // rdx
  unsigned int v9; // ecx
  unsigned int v10; // eax
  __int64 v11; // r12
  __int64 version_file; // rax
  unsigned __int64 v14; // rdx
  unsigned int v15; // ebp
  unsigned int v16; // r13d
  __int64 v17; // r15
  __int64 v18; // r14
  __int64 v19; // rax
  unsigned int v20; // [rsp+0h] [rbp-188h] BYREF
  unsigned int v21; // [rsp+4h] [rbp-184h] BYREF
  unsigned int v22; // [rsp+8h] [rbp-180h] BYREF
  unsigned int v23; // [rsp+Ch] [rbp-17Ch] BYREF
  unsigned int v24; // [rsp+10h] [rbp-178h] BYREF
  unsigned int v25; // [rsp+14h] [rbp-174h] BYREF
  char **v26; // [rsp+18h] [rbp-170h] BYREF
  __int64 (__fastcall *v27)(); // [rsp+20h] [rbp-168h]
  unsigned int *v28; // [rsp+28h] [rbp-160h]
  __int128 v29; // [rsp+30h] [rbp-158h]
  __int64 (__fastcall *v30)(); // [rsp+40h] [rbp-148h]
  char **v31; // [rsp+48h] [rbp-140h]
  __int64 (__fastcall *v32)(); // [rsp+50h] [rbp-138h]
  char **v33; // [rsp+58h] [rbp-130h]
  __int64 (__fastcall *v34)(); // [rsp+60h] [rbp-128h]
  unsigned int *v35; // [rsp+68h] [rbp-120h]
  __int64 (__fastcall *v36)(); // [rsp+70h] [rbp-118h]
  unsigned int v37; // [rsp+7Ch] [rbp-10Ch]
  char **v38; // [rsp+80h] [rbp-108h] BYREF
  __int64 v39; // [rsp+88h] [rbp-100h]
  char ***v40; // [rsp+90h] [rbp-F8h]
  __int64 v41; // [rsp+98h] [rbp-F0h]
  __int64 v42; // [rsp+A0h] [rbp-E8h]
  __int64 (__fastcall *v43)(__int64, __int64); // [rsp+B0h] [rbp-D8h] BYREF
  __int64 v44; // [rsp+B8h] [rbp-D0h]
  char ***v45; // [rsp+C0h] [rbp-C8h]
  __int64 (__fastcall *v46)(__int64, __int64); // [rsp+C8h] [rbp-C0h]
  __int64 v47; // [rsp+D0h] [rbp-B8h]
  int v48; // [rsp+D8h] [rbp-B0h]
  __int64 (__fastcall *v49)(__int64, __int64); // [rsp+E0h] [rbp-A8h]
  __int64 v50; // [rsp+E8h] [rbp-A0h]
  int v51; // [rsp+F0h] [rbp-98h]
  __int64 (__fastcall *v52)(__int64, __int64, int, int, int); // [rsp+F8h] [rbp-90h]
  __int64 v53; // [rsp+100h] [rbp-88h]
  int v54; // [rsp+108h] [rbp-80h]
  _BYTE v55[24]; // [rsp+110h] [rbp-78h] BYREF
  _BYTE v56[24]; // [rsp+128h] [rbp-60h] BYREF
  _BYTE v57[72]; // [rsp+140h] [rbp-48h] BYREF

  if ( !(unsigned __int8)core::tuple::<impl core::cmp::PartialEq for (V,U,T)>::eq(a1 + 24, a1 + 36) )
  {
    if ( (unsigned __int8)core::tuple::<impl core::cmp::PartialOrd for (V,U,T)>::gt(a1 + 24, a1 + 36) )
    {
      v26 = (char **)(a1 + 24);
      v27 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
      v28 = (unsigned int *)(a1 + 28);
      *(_QWORD *)&v29 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
      *((_QWORD *)&v29 + 1) = a1 + 32;
      v30 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
      v31 = (char **)(a1 + 36);
      v32 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
      v33 = (char **)(a1 + 40);
      v34 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
      v35 = (unsigned int *)(a1 + 44);
      v36 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
      v43 = (__int64 (__fastcall *)(__int64, __int64))&off_5266D8;
      v44 = 7LL;
      v47 = 0LL;
      v45 = &v26;
      v46 = (__int64 (__fastcall *)(__int64, __int64))&byte_6;
      core::option::Option<T>::map_or_else(v55, 0LL, a1 + 40, &v43);
      v2 = anyhow::error::<impl anyhow::Error>::msg(v55);
LABEL_24:
      v1 = v2;
      goto LABEL_25;
    }
    v43 = meilitool::upgrade::v1_10::v1_9_to_v1_10;
    v44 = 0xA00000001LL;
    LODWORD(v45) = 0;
    v46 = meilitool::upgrade::v1_11::v1_10_to_v1_11;
    v47 = 0xB00000001LL;
    v48 = 0;
    v49 = meilitool::upgrade::v1_12::v1_11_to_v1_12;
    v50 = 0xC00000001LL;
    v51 = 0;
    v52 = meilitool::upgrade::v1_12::v1_12_to_v1_12_3;
    v53 = 0xC00000001LL;
    v54 = 3;
    v3 = *(unsigned int *)(a1 + 24);
    v20 = v3;
    v4 = *(_DWORD *)(a1 + 28);
    v21 = v4;
    v5 = *(_DWORD *)(a1 + 32);
    v22 = v5;
    if ( (_DWORD)v3 == 1 )
    {
      switch ( v4 )
      {
        case 9u:
          v6 = 0;
          v7 = 0LL;
          goto LABEL_14;
        case 0xAu:
          v7 = 1LL;
          goto LABEL_13;
        case 0xBu:
          v7 = 2LL;
          goto LABEL_13;
        case 0xCu:
          if ( v5 <= 2 )
          {
            v7 = 3LL;
LABEL_13:
            v6 = 0;
LABEL_14:
            v8 = *(unsigned int *)(a1 + 36);
            v23 = v8;
            v9 = *(_DWORD *)(a1 + 40);
            v24 = v9;
            v10 = *(_DWORD *)(a1 + 44);
            v25 = v10;
            if ( (_DWORD)v8 == 1 )
            {
              switch ( v9 )
              {
                case 0xAu:
                  v11 = 0LL;
                  break;
                case 0xBu:
                  v11 = 1LL;
                  break;
                case 0xCu:
                  v11 = 2LL;
                  if ( v10 > 2 )
                  {
                    v11 = 3LL;
                    if ( v10 >= 8 )
                      goto LABEL_20;
                  }
                  break;
                default:
                  goto LABEL_20;
              }
              v26 = (char **)&v20;
              v27 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
              v28 = &v21;
              *(_QWORD *)&v29 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
              *((_QWORD *)&v29 + 1) = &v22;
              v30 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
              v31 = (char **)&v23;
              v32 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
              v33 = (char **)&v24;
              v34 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
              v35 = &v25;
              v36 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
              v38 = &off_526808;
              v39 = 7LL;
              v42 = 0LL;
              v40 = &v26;
              v41 = 6LL;
              std::io::stdio::_print(&v38);
              if ( v6 )
              {
                v26 = &off_526878;
                v27 = (__int64 (__fastcall *)())(&dword_0 + 1);
                v28 = (_DWORD *)&byte_8;
                v29 = 0LL;
                std::io::stdio::_print(&v26);
                version_file = meilisearch_types::versioning::create_version_file(
                                 *(_QWORD *)(a1 + 8),
                                 *(_QWORD *)(a1 + 16),
                                 v23,
                                 v24,
                                 v25);
                v1 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(version_file);
                if ( v1 )
                  goto LABEL_25;
              }
              else
              {
                v38 = (char **)v7;
                v39 = v11;
                LOBYTE(v40) = 0;
                while ( (<core::ops::range::RangeInclusive<T> as core::iter::range::RangeInclusiveIteratorImpl>::spec_next(&v38) & 1) != 0 )
                {
                  if ( v14 >= 4 )
                    core::panicking::panic_bounds_check(v14, 4LL, &off_5268B8);
                  v15 = *((_DWORD *)&v44 + 6 * v14);
                  v16 = *((_DWORD *)&v44 + 6 * v14 + 1);
                  v37 = (unsigned int)(&v45)[3 * v14];
                  v17 = *(_QWORD *)(a1 + 8);
                  v18 = *(_QWORD *)(a1 + 16);
                  v1 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, _QWORD))*(&v43 + 3 * v14))(
                         v17,
                         v18,
                         v20,
                         v21,
                         v22);
                  if ( !v1 )
                  {
                    v26 = &off_526898;
                    v27 = (__int64 (__fastcall *)())(&dword_0 + 1);
                    v28 = (_DWORD *)&byte_8;
                    v29 = 0LL;
                    std::io::stdio::_print(&v26);
                    v26 = &off_5268A8;
                    v27 = (__int64 (__fastcall *)())(&dword_0 + 1);
                    v28 = (_DWORD *)&byte_8;
                    v29 = 0LL;
                    std::io::stdio::_print(&v26);
                    v19 = meilisearch_types::versioning::create_version_file(v17, v18, v15, v16, v37);
                    v1 = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(v19);
                    if ( !v1 )
                      continue;
                  }
                  goto LABEL_25;
                }
              }
              v26 = &off_526888;
              v27 = (__int64 (__fastcall *)())(&dword_0 + 1);
              v28 = (_DWORD *)&byte_8;
              v29 = 0LL;
              std::io::stdio::_print(&v26);
              goto LABEL_3;
            }
LABEL_20:
            v26 = (char **)&v23;
            v27 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
            v28 = &v24;
            *(_QWORD *)&v29 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
            *((_QWORD *)&v29 + 1) = &v25;
            v30 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
            v31 = &off_5268D0;
            v32 = <&T as core::fmt::Display>::fmt;
            v33 = &off_5268E0;
            v34 = <&T as core::fmt::Display>::fmt;
            v38 = &off_5267A8;
            v39 = 6LL;
            v42 = 0LL;
            v40 = &v26;
            v41 = 5LL;
            core::option::Option<T>::map_or_else(v57, 0LL, v8, &v38);
            v2 = anyhow::error::<impl anyhow::Error>::msg(v57);
            goto LABEL_24;
          }
          if ( v5 < 8 )
          {
            v7 = 4LL;
            v6 = 1;
            goto LABEL_14;
          }
          break;
        default:
          break;
      }
    }
    v26 = (char **)&v20;
    v27 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
    v28 = &v21;
    *(_QWORD *)&v29 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
    *((_QWORD *)&v29 + 1) = &v22;
    v30 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
    v31 = &off_5268F0;
    v32 = <&T as core::fmt::Display>::fmt;
    v33 = &off_5268E0;
    v34 = <&T as core::fmt::Display>::fmt;
    v38 = &off_526748;
    v39 = 6LL;
    v42 = 0LL;
    v40 = &v26;
    v41 = 5LL;
    core::option::Option<T>::map_or_else(v56, 0LL, v3, &v38);
    v2 = anyhow::error::<impl anyhow::Error>::msg(v56);
    goto LABEL_24;
  }
  v26 = &off_5266C8;
  v27 = (__int64 (__fastcall *)())(&dword_0 + 1);
  v28 = (_DWORD *)&byte_8;
  v29 = 0LL;
  std::io::stdio::_print(&v26);
LABEL_3:
  v1 = 0LL;
LABEL_25:
  core::ptr::drop_in_place<meilitool::upgrade::OfflineUpgrade>(a1);
  return v1;
}