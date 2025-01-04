__int64 __fastcall uu_test::path(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // ebx
  int v7; // r15d
  int v8; // r14d
  bool v9; // zf
  unsigned int v10; // eax
  __int64 v11; // r14
  unsigned int v12; // edx
  unsigned int v13; // ebp
  __int64 v14; // rax
  unsigned int v15; // edx
  __int128 v17; // [rsp+0h] [rbp-248h] BYREF
  __int128 v18; // [rsp+10h] [rbp-238h]
  __int128 v19; // [rsp+20h] [rbp-228h]
  __int64 v20; // [rsp+30h] [rbp-218h]
  unsigned int v21; // [rsp+38h] [rbp-210h]
  int v22; // [rsp+3Ch] [rbp-20Ch]
  int v23; // [rsp+40h] [rbp-208h]
  __int64 v24; // [rsp+44h] [rbp-204h]
  unsigned int v25; // [rsp+4Ch] [rbp-1FCh]
  __int64 v26; // [rsp+50h] [rbp-1F8h]
  __int128 v27; // [rsp+58h] [rbp-1F0h]
  __int128 v28; // [rsp+68h] [rbp-1E0h]
  __int128 v29; // [rsp+78h] [rbp-1D0h]
  __int128 v30; // [rsp+88h] [rbp-1C0h]
  __int128 v31; // [rsp+98h] [rbp-1B0h]
  __int64 v32; // [rsp+A8h] [rbp-1A0h]
  char v33; // [rsp+B0h] [rbp-198h]
  __int128 v34; // [rsp+C0h] [rbp-188h] BYREF
  __int128 v35; // [rsp+D0h] [rbp-178h]
  __int128 v36; // [rsp+E0h] [rbp-168h]
  __int64 v37; // [rsp+F0h] [rbp-158h]
  unsigned int v38; // [rsp+F8h] [rbp-150h]
  int v39; // [rsp+FCh] [rbp-14Ch]
  int v40; // [rsp+100h] [rbp-148h]
  __int64 v41; // [rsp+104h] [rbp-144h]
  unsigned int v42; // [rsp+10Ch] [rbp-13Ch]
  __int64 v43; // [rsp+110h] [rbp-138h]
  __int128 v44; // [rsp+118h] [rbp-130h]
  __int128 v45; // [rsp+128h] [rbp-120h]
  __int128 v46; // [rsp+138h] [rbp-110h]
  __int128 v47; // [rsp+148h] [rbp-100h]
  __int128 v48; // [rsp+158h] [rbp-F0h]
  __int64 v49; // [rsp+168h] [rbp-E0h]
  _OWORD v50[3]; // [rsp+170h] [rbp-D8h] BYREF
  __int64 v51; // [rsp+1A0h] [rbp-A8h]
  unsigned int v52; // [rsp+1A8h] [rbp-A0h]
  int v53; // [rsp+1ACh] [rbp-9Ch]
  int v54; // [rsp+1B0h] [rbp-98h]
  __int64 v55; // [rsp+1B4h] [rbp-94h]
  unsigned int v56; // [rsp+1BCh] [rbp-8Ch]
  __int64 v57; // [rsp+1C0h] [rbp-88h]
  __int128 v58; // [rsp+1C8h] [rbp-80h]
  __int128 v59; // [rsp+1D8h] [rbp-70h]
  __int128 v60; // [rsp+1E8h] [rbp-60h]
  __int128 v61; // [rsp+1F8h] [rbp-50h]
  __int128 v62; // [rsp+208h] [rbp-40h]
  __int64 v63; // [rsp+218h] [rbp-30h]

  if ( a3 == 8 )
  {
    std::fs::symlink_metadata(&v34, a1, a2);
    if ( (_DWORD)v34 != 2 )
      goto LABEL_3;
LABEL_6:
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v34);
    return 0;
  }
  std::fs::metadata(&v34);
  if ( (_DWORD)v34 == 2 )
    goto LABEL_6;
LABEL_3:
  v6 = v38;
  v7 = v39;
  v8 = v40;
  v50[0] = v34;
  v50[1] = v35;
  v50[2] = v36;
  v51 = v37;
  v52 = v38;
  v53 = v39;
  v54 = v40;
  v55 = v41;
  v56 = v42;
  v57 = v43;
  v63 = v49;
  v62 = v48;
  v61 = v47;
  v60 = v46;
  v59 = v45;
  v58 = v44;
  switch ( a3 )
  {
    case 0:
      v6 = v38 & 0xF000;
      v9 = v6 == 24576;
      goto LABEL_27;
    case 1:
      v6 = v38 & 0xF000;
      v9 = v6 == 0x2000;
      goto LABEL_27;
    case 2:
      v6 = v38 & 0xF000;
      v9 = v6 == 0x4000;
      goto LABEL_27;
    case 3:
      LOBYTE(v6) = 1;
      goto LABEL_28;
    case 4:
      std::fs::Metadata::accessed(&v17, v50);
      v11 = core::result::Result<T,E>::unwrap(&v17, &off_114CC8);
      v13 = v12;
      std::fs::Metadata::modified(&v17, v50);
      v14 = core::result::Result<T,E>::unwrap(&v17, &off_114CE0);
      v6 = v13 < v15;
      if ( v11 != v14 )
        v6 = v11 < v14;
      goto LABEL_28;
    case 5:
      v6 = v38 & 0xF000;
      v9 = v6 == 0x8000;
      goto LABEL_27;
    case 6:
      v6 = (v38 >> 10) & 1;
      goto LABEL_28;
    case 7:
      v9 = v8 == uucore::features::process::getegid();
      goto LABEL_27;
    case 8:
      v6 = v38 & 0xF000;
      v9 = v6 == 40960;
      goto LABEL_27;
    case 9:
      v6 = (v38 >> 9) & 1;
      goto LABEL_28;
    case 10:
      v9 = v7 == uucore::features::process::geteuid();
      goto LABEL_27;
    case 11:
      v6 = v38 & 0xF000;
      v9 = v6 == 4096;
      goto LABEL_27;
    case 12:
      v20 = v37;
      v19 = v36;
      v18 = v35;
      v17 = v34;
      v21 = v38;
      v22 = v39;
      v23 = v40;
      v24 = v41;
      v25 = v42;
      v26 = v43;
      v27 = v44;
      v28 = v45;
      v29 = v46;
      v30 = v47;
      v31 = v48;
      v32 = v49;
      v33 = 4;
      v10 = ((__int64 (__fastcall *)(__int128 *, __int64, _QWORD, __int64, __int64, __int64))uu_test::path::{{closure}})(
              &v17,
              4LL,
              v42,
              v43,
              v4,
              v5);
      goto LABEL_21;
    case 13:
      v6 = v38 & 0xF000;
      v9 = v6 == 49152;
LABEL_27:
      LOBYTE(v6) = v9;
      goto LABEL_28;
    case 14:
      LOBYTE(v6) = v43 != 0;
      goto LABEL_28;
    case 15:
      v6 = (v38 >> 11) & 1;
      goto LABEL_28;
    case 16:
      v20 = v37;
      v19 = v36;
      v18 = v35;
      v17 = v34;
      v21 = v38;
      v22 = v39;
      v23 = v40;
      v24 = v41;
      v25 = v42;
      v26 = v43;
      v27 = v44;
      v28 = v45;
      v29 = v46;
      v30 = v47;
      v31 = v48;
      v32 = v49;
      v33 = 2;
      v10 = ((__int64 (__fastcall *)(__int128 *, __int64, _QWORD, __int64, __int64, __int64))uu_test::path::{{closure}})(
              &v17,
              2LL,
              v42,
              v43,
              v4,
              v5);
      goto LABEL_21;
    case 17:
      v20 = v37;
      v19 = v36;
      v18 = v35;
      v17 = v34;
      v21 = v38;
      v22 = v39;
      v23 = v40;
      v24 = v41;
      v25 = v42;
      v26 = v43;
      v27 = v44;
      v28 = v45;
      v29 = v46;
      v30 = v47;
      v31 = v48;
      v32 = v49;
      v33 = 1;
      v10 = ((__int64 (__fastcall *)(__int128 *, __int64))uu_test::path::{{closure}})(&v17, 1LL);
LABEL_21:
      v6 = v10;
LABEL_28:
      core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v34);
      break;
  }
  return v6;
}
