__int64 __fastcall uu_od::parse_formats::parse_type_string(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edx
  unsigned int v4; // ebp
  __int64 v5; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  char v9; // r15
  int v10; // eax
  unsigned __int8 v11; // r12
  unsigned __int64 v12; // r14
  unsigned int v13; // edx
  char v14; // r14
  unsigned int v15; // edx
  char v16; // dl
  unsigned int v17; // edx
  unsigned int v18; // edx
  char v19; // r12
  __int128 v20; // xmm0
  __int64 v21; // r14
  __int128 v22; // xmm0
  __int64 v23; // r15
  __int128 v24; // xmm0
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  char v29; // [rsp+Fh] [rbp-199h] BYREF
  __int128 v30; // [rsp+10h] [rbp-198h]
  char *v31; // [rsp+20h] [rbp-188h]
  char **v32; // [rsp+30h] [rbp-178h] BYREF
  __int64 v33; // [rsp+38h] [rbp-170h]
  _BYTE *v34; // [rsp+40h] [rbp-168h]
  __int64 v35; // [rsp+48h] [rbp-160h]
  __int64 v36; // [rsp+50h] [rbp-158h]
  __int64 v37; // [rsp+60h] [rbp-148h]
  __int128 v38; // [rsp+68h] [rbp-140h] BYREF
  __int64 v39; // [rsp+78h] [rbp-130h]
  __int64 v40; // [rsp+80h] [rbp-128h] BYREF
  __int64 v41; // [rsp+88h] [rbp-120h]
  __int64 v42; // [rsp+90h] [rbp-118h] BYREF
  __int64 v43; // [rsp+98h] [rbp-110h]
  __int64 v44; // [rsp+A0h] [rbp-108h]
  unsigned int v45; // [rsp+ACh] [rbp-FCh] BYREF
  _BYTE *v46; // [rsp+B0h] [rbp-F8h] BYREF
  __int64 (__fastcall *v47)(); // [rsp+B8h] [rbp-F0h]
  __int64 *v48; // [rsp+C0h] [rbp-E8h]
  __int64 (__fastcall *v49)(); // [rsp+C8h] [rbp-E0h]
  __int64 v50; // [rsp+D0h] [rbp-D8h] BYREF
  __int64 v51; // [rsp+D8h] [rbp-D0h]
  __int64 v52; // [rsp+E0h] [rbp-C8h]
  char v53; // [rsp+E8h] [rbp-C0h]
  _BYTE v54[24]; // [rsp+F0h] [rbp-B8h] BYREF
  __int64 (__fastcall *v55)(); // [rsp+108h] [rbp-A0h]
  _QWORD v56[2]; // [rsp+110h] [rbp-98h]
  _QWORD v57[2]; // [rsp+120h] [rbp-88h]
  _QWORD v58[2]; // [rsp+130h] [rbp-78h] BYREF
  __int128 v59; // [rsp+140h] [rbp-68h]
  char *v60; // [rsp+150h] [rbp-58h]
  __int64 v61; // [rsp+160h] [rbp-48h] BYREF
  char v62; // [rsp+168h] [rbp-40h]
  _QWORD v63[7]; // [rsp+169h] [rbp-3Fh]

  *(_QWORD *)&v38 = 0LL;
  *((_QWORD *)&v38 + 1) = 8LL;
  v39 = 0LL;
  v44 = a3;
  v43 = a2;
  v58[0] = a2;
  v58[1] = a2 + a3;
  v37 = a1;
  if ( !(unsigned int)core::str::validations::next_code_point(v58) )
    goto LABEL_4;
  v4 = v3;
  if ( (v3 ^ 0xD800) - 2048 >= 0x10F800 )
LABEL_102:
    core::panicking::panic_nounwind(anon_73050de727ff50a019884682d8624ba5_12_llvm_6296603921265638786, 57LL);
  if ( v3 == 1114112 )
  {
LABEL_4:
    v5 = v37;
    *(_QWORD *)(v37 + 24) = v39;
    *(_OWORD *)(v5 + 8) = v38;
    *(_QWORD *)v5 = 0LL;
    return v5;
  }
  while ( 2 )
  {
    v45 = v4;
    switch ( v4 )
    {
      case 'a':
        v9 = 0;
        goto LABEL_14;
      case 'c':
        v9 = 1;
LABEL_14:
        v11 = 0;
        LOBYTE(v12) = 0;
        goto LABEL_20;
      case 'd':
        v11 = 1;
        v9 = 2;
        goto LABEL_19;
      case 'f':
        LOBYTE(v12) = 2;
        v11 = 1;
        v9 = 6;
        goto LABEL_20;
      case 'o':
        v11 = 1;
        v9 = 3;
        goto LABEL_19;
      case 'u':
        v11 = 1;
        v9 = 4;
        goto LABEL_19;
      case 'x':
        v11 = 1;
        v9 = 5;
LABEL_19:
        LOBYTE(v12) = 1;
        goto LABEL_20;
      default:
        v50 = 0LL;
        v51 = v43;
        v52 = v44;
        v53 = 1;
        v46 = &v45;
        v47 = <char as core::fmt::Display>::fmt;
        v48 = &v50;
        v49 = <os_display::Quoted as core::fmt::Display>::fmt;
        v32 = &off_12D190;
        v33 = 2LL;
        v34 = &v46;
        v35 = 2LL;
        v36 = 0LL;
        alloc::fmt::format::format_inner(v54, &v32);
        v9 = v54[8];
        v56[0] = *(_QWORD *)&v54[9];
        *(_QWORD *)((char *)v56 + 7) = *(_QWORD *)&v54[16];
        if ( *(_QWORD *)v54 != 0x8000000000000000LL )
        {
          v5 = v37;
          *(_QWORD *)(v37 + 8) = *(_QWORD *)v54;
          *(_BYTE *)(v5 + 16) = v9;
          v25 = *(_QWORD *)((char *)v56 + 7);
          *(_QWORD *)(v5 + 17) = v56[0];
          *(_QWORD *)(v5 + 24) = v25;
          *(_QWORD *)v5 = 1LL;
          goto LABEL_95;
        }
        v10 = 124;
        v11 = _bittest(&v10, v54[8]);
        v12 = 0x2010101010000uLL >> (8 * v54[8]);
LABEL_20:
        if ( (unsigned int)core::str::validations::next_code_point(v58) )
        {
          v4 = v13;
          if ( (v13 ^ 0xD800) - 2048 >= 0x10F800 )
            goto LABEL_102;
        }
        else
        {
          v4 = 1114112;
        }
        v29 = 0;
        if ( !(_BYTE)v12 )
          goto LABEL_30;
        if ( (unsigned __int8)v12 == 1 )
        {
          switch ( v4 )
          {
            case 'C':
              v14 = 1;
              goto LABEL_51;
            case 'I':
              v14 = 4;
              goto LABEL_51;
            case 'L':
              goto LABEL_35;
            case 'S':
              v14 = 2;
              goto LABEL_51;
            default:
              goto LABEL_30;
          }
        }
        if ( v4 == 68 )
        {
LABEL_35:
          v14 = 8;
          goto LABEL_51;
        }
        v14 = 4;
        if ( v4 == 70 )
        {
LABEL_51:
          v29 = v14;
          if ( !(unsigned int)core::str::validations::next_code_point(v58) )
          {
            v4 = 1114112;
            goto LABEL_58;
          }
          v4 = v17;
          if ( (v17 ^ 0xD800) - 2048 >= 0x10F800 )
            goto LABEL_102;
LABEL_53:
          if ( v4 == 122 )
          {
            v19 = 1;
            if ( (unsigned int)core::str::validations::next_code_point(v58) )
            {
              v4 = v18;
              if ( (v18 ^ 0xD800) - 2048 >= 0x10F800 )
                goto LABEL_102;
            }
            else
            {
              v4 = 1114112;
            }
            goto LABEL_60;
          }
LABEL_58:
          v19 = 0;
LABEL_60:
          switch ( v9 )
          {
            case 0:
              v31 = &byte_4;
              v20 = *(_OWORD *)&off_12D2E8;
LABEL_88:
              v30 = v20;
              v21 = 0LL;
              break;
            case 1:
              v31 = &byte_4;
              v30 = *(_OWORD *)&off_12D308;
              v21 = 2LL;
              break;
            case 2:
              switch ( v14 )
              {
                case 0:
                case 4:
                  v31 = &byte_9[3];
                  v20 = *(_OWORD *)&off_12CBE8;
                  goto LABEL_88;
                case 1:
                  v31 = &byte_5;
                  v20 = *(_OWORD *)&off_12CC68;
                  goto LABEL_88;
                case 2:
                  v31 = &byte_7;
                  v20 = *(_OWORD *)&off_12CC48;
                  goto LABEL_88;
                case 8:
                  v31 = (char *)&dword_14 + 1;
                  v20 = *(_OWORD *)&off_12CC08;
                  goto LABEL_88;
                default:
                  goto LABEL_91;
              }
            case 3:
              switch ( v14 )
              {
                case 0:
                case 4:
                  v31 = &byte_9[3];
                  v20 = *(_OWORD *)&off_12CC28;
                  goto LABEL_88;
                case 1:
                  v31 = &byte_4;
                  v20 = *(_OWORD *)&off_12CB48;
                  goto LABEL_88;
                case 2:
                  v31 = &byte_7;
                  v20 = *(_OWORD *)&off_12CB28;
                  goto LABEL_88;
                case 8:
                  v31 = (char *)&dword_14 + 3;
                  v20 = *(_OWORD *)&off_12CC88;
                  goto LABEL_88;
                default:
                  goto LABEL_91;
              }
            case 4:
              switch ( v14 )
              {
                case 0:
                case 4:
                  v31 = &byte_9[2];
                  v20 = *(_OWORD *)&off_12CB68;
                  goto LABEL_88;
                case 1:
                  v31 = &byte_4;
                  v20 = *(_OWORD *)&off_12CCA8;
                  goto LABEL_88;
                case 2:
                  v31 = &byte_6;
                  v20 = *(_OWORD *)&off_12CB88;
                  goto LABEL_88;
                case 8:
                  v31 = (char *)&dword_14 + 1;
                  v20 = *(_OWORD *)&off_12CCC8;
                  goto LABEL_88;
                default:
                  goto LABEL_91;
              }
            case 5:
              switch ( v14 )
              {
                case 0:
                case 4:
                  v31 = byte_9;
                  v20 = *(_OWORD *)&off_12CBA8;
                  goto LABEL_88;
                case 1:
                  v31 = (char *)&dword_0 + 3;
                  v20 = *(_OWORD *)&off_12CCE8;
                  goto LABEL_88;
                case 2:
                  v31 = &byte_5;
                  v20 = *(_OWORD *)&off_12CBC8;
                  goto LABEL_88;
                case 8:
                  v31 = (char *)&word_10 + 1;
                  v20 = *(_OWORD *)&off_12CD08;
                  goto LABEL_88;
                default:
                  goto LABEL_91;
              }
            case 6:
              switch ( v14 )
              {
                case 0:
                case 4:
                  v31 = &byte_9[6];
                  v22 = *(_OWORD *)&off_12E370;
                  goto LABEL_75;
                case 2:
                  v31 = &byte_9[1];
                  v22 = *(_OWORD *)&off_12E350;
                  goto LABEL_75;
                case 8:
                  v31 = (char *)&off_18 + 1;
                  v22 = *(_OWORD *)&off_12E390;
LABEL_75:
                  v30 = v22;
                  v21 = 1LL;
                  goto LABEL_89;
                default:
LABEL_91:
                  v50 = 0LL;
                  v51 = v43;
                  v52 = v44;
                  v53 = 1;
                  v46 = &v29;
                  v47 = core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt;
                  v48 = &v50;
                  v49 = <os_display::Quoted as core::fmt::Display>::fmt;
                  v32 = &off_12D1D0;
                  v33 = 2LL;
                  v34 = &v46;
                  v35 = 2LL;
                  v36 = 0LL;
                  alloc::fmt::format::format_inner(v54, &v32);
                  v5 = v37;
                  v24 = *(_OWORD *)v54;
                  v59 = *(_OWORD *)v54;
                  v60 = *(char **)&v54[16];
                  *(_QWORD *)(v37 + 24) = *(_QWORD *)&v54[16];
                  *(_OWORD *)(v5 + 8) = v24;
                  *(_QWORD *)v5 = 1LL;
                  goto LABEL_95;
              }
          }
LABEL_89:
          v59 = v30;
          v60 = v31;
          v23 = v39;
          if ( v39 == (_QWORD)v38 )
            alloc::raw_vec::RawVec<T,A>::grow_one(&v38);
          v7 = *((_QWORD *)&v38 + 1);
          v8 = 5 * v23;
          *(_QWORD *)(*((_QWORD *)&v38 + 1) + 8 * v8) = v21;
          *(_OWORD *)(v7 + 8 * v8 + 8) = v30;
          *(_QWORD *)(v7 + 8 * v8 + 24) = v31;
          *(_BYTE *)(v7 + 8 * v8 + 32) = v19;
          v39 = v23 + 1;
          if ( v4 == 1114112 )
            goto LABEL_4;
          continue;
        }
LABEL_30:
        v40 = 0LL;
        v41 = 1LL;
        v42 = 0LL;
        if ( (v4 - 48 >= 0xA) | v11 ^ 1 )
          goto LABEL_45;
        while ( 1 )
        {
          alloc::string::String::push(&v40, v4);
          if ( !(unsigned int)core::str::validations::next_code_point(v58) )
            break;
          v4 = v15;
          if ( (v15 ^ 0xD800) - 2048 >= 0x10F800 )
            goto LABEL_102;
          if ( v15 - 48 >= 0xA )
            goto LABEL_37;
        }
        v4 = 1114112;
LABEL_37:
        if ( !v42 )
        {
LABEL_45:
          v14 = 0;
          goto LABEL_46;
        }
        if ( v42 < 0 || !v41 )
LABEL_103:
          core::panicking::panic_nounwind(anon_73050de727ff50a019884682d8624ba5_15_llvm_6296603921265638786, 162LL);
        if ( (core::num::<impl core::str::traits::FromStr for u8>::from_str() & 1) == 0 )
        {
          v14 = v16;
          v29 = v16;
LABEL_46:
          alloc::raw_vec::RawVec<T,A>::current_memory(&v32, &v40);
          if ( v33 )
            <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v42, v32, v33, v34);
          goto LABEL_53;
        }
        if ( !v41 || v42 < 0 )
          goto LABEL_103;
        v46 = 0LL;
        v47 = (__int64 (__fastcall *)())v41;
        v48 = (__int64 *)v42;
        LOBYTE(v49) = 1;
        v50 = 0LL;
        v51 = v43;
        v52 = v44;
        v53 = 1;
        *(_QWORD *)v54 = &v46;
        *(_QWORD *)&v54[8] = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&v54[16] = &v50;
        v55 = <os_display::Quoted as core::fmt::Display>::fmt;
        v32 = &anon_73050de727ff50a019884682d8624ba5_126_llvm_6296603921265638786;
        v33 = 2LL;
        v34 = v54;
        v35 = 2LL;
        v36 = 0LL;
        alloc::fmt::format::format_inner(&v61, &v32);
        v14 = v62;
        v57[0] = v63[0];
        *(_QWORD *)((char *)v57 + 7) = *(_QWORD *)((char *)v63 + 7);
        if ( v61 == 0x8000000000000000LL )
        {
          v29 = v62;
          goto LABEL_46;
        }
        v5 = v37;
        *(_QWORD *)(v37 + 8) = v61;
        *(_BYTE *)(v5 + 16) = v14;
        v26 = *(_QWORD *)((char *)v57 + 7);
        *(_QWORD *)(v5 + 17) = v57[0];
        *(_QWORD *)(v5 + 24) = v26;
        *(_QWORD *)v5 = 1LL;
        alloc::raw_vec::RawVec<T,A>::current_memory(&v32, &v40);
        if ( v33 )
          <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v42, v32, v33, v34);
LABEL_95:
        if ( (_QWORD)v38 )
        {
          if ( (unsigned __int64)v38 >= 0x666666666666667LL )
            core::panicking::panic_nounwind(anon_8269adb5962d5e09057255cc669604eb_10_llvm_1060656746639540340, 69LL);
          v27 = 40 * v38;
          v32 = (char **)*((_QWORD *)&v38 + 1);
          v33 = 8LL;
          v28 = 2LL;
        }
        else
        {
          v28 = 1LL;
          v27 = 0LL;
        }
        (&v32)[v28] = (char **)v27;
        if ( v33 && v34 )
          _rust_dealloc(v32, v34, v33);
        return v5;
    }
  }
}
