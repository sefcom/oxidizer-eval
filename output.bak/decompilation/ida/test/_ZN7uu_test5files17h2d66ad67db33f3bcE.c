__int64 __fastcall uu_test::files(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v8; // rbp
  __int64 v9; // r13
  __int64 result; // rax
  __int64 v11; // r15
  __int64 v12; // r12
  bool v13; // cl
  __int64 v14; // r15
  __int64 v15; // r12
  __int64 v16; // r14
  unsigned int v17; // edx
  unsigned int v18; // ebp
  __int64 v19; // rax
  unsigned int v20; // edx
  bool v21; // cc
  char v22; // cl
  char v23; // si
  __int64 v24; // r14
  unsigned int v25; // edx
  unsigned int v26; // ebp
  unsigned int v27; // edx
  __int128 v28; // [rsp+0h] [rbp-258h] BYREF
  __int128 v29; // [rsp+10h] [rbp-248h]
  __int64 v30; // [rsp+20h] [rbp-238h]
  __int64 v31; // [rsp+28h] [rbp-230h]
  __int128 v32; // [rsp+30h] [rbp-228h]
  __int128 v33; // [rsp+40h] [rbp-218h]
  __int128 v34; // [rsp+50h] [rbp-208h]
  __int128 v35; // [rsp+60h] [rbp-1F8h]
  __int128 v36; // [rsp+70h] [rbp-1E8h]
  __int128 v37; // [rsp+80h] [rbp-1D8h]
  __int128 v38; // [rsp+90h] [rbp-1C8h]
  __int128 v39; // [rsp+A0h] [rbp-1B8h]
  __int64 v40; // [rsp+B0h] [rbp-1A8h]
  __int64 v41; // [rsp+B8h] [rbp-1A0h]
  _OWORD v42[2]; // [rsp+C0h] [rbp-198h] BYREF
  __int64 v43; // [rsp+E0h] [rbp-178h]
  __int64 v44; // [rsp+E8h] [rbp-170h]
  __int128 v45; // [rsp+F0h] [rbp-168h]
  __int128 v46; // [rsp+100h] [rbp-158h]
  __int128 v47; // [rsp+110h] [rbp-148h]
  __int128 v48; // [rsp+120h] [rbp-138h]
  __int128 v49; // [rsp+130h] [rbp-128h]
  __int128 v50; // [rsp+140h] [rbp-118h]
  __int128 v51; // [rsp+150h] [rbp-108h]
  __int128 v52; // [rsp+160h] [rbp-F8h]
  _OWORD v53[2]; // [rsp+170h] [rbp-E8h] BYREF
  __int64 v54; // [rsp+190h] [rbp-C8h]
  __int64 v55; // [rsp+198h] [rbp-C0h]
  __int128 v56; // [rsp+1A0h] [rbp-B8h]
  __int128 v57; // [rsp+1B0h] [rbp-A8h]
  __int128 v58; // [rsp+1C0h] [rbp-98h]
  __int128 v59; // [rsp+1D0h] [rbp-88h]
  __int128 v60; // [rsp+1E0h] [rbp-78h]
  __int128 v61; // [rsp+1F0h] [rbp-68h]
  __int128 v62; // [rsp+200h] [rbp-58h]
  __int128 v63; // [rsp+210h] [rbp-48h]

  std::fs::metadata(&v28);
  if ( (_DWORD)v28 == 2 )
    goto LABEL_3;
  v42[1] = v29;
  v42[0] = v28;
  v8 = v30;
  v9 = v31;
  v45 = v32;
  v46 = v33;
  v47 = v34;
  v48 = v35;
  v49 = v36;
  v50 = v37;
  v51 = v38;
  v52 = v39;
  v43 = v30;
  v44 = v31;
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v28);
  std::fs::metadata(&v28);
  if ( (_DWORD)v28 == 2 )
  {
LABEL_3:
    *(_BYTE *)(a1 + 8) = 0;
    *(_QWORD *)a1 = 7LL;
    return core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v28);
  }
  v53[1] = v29;
  v53[0] = v28;
  v11 = v30;
  v12 = v31;
  v56 = v32;
  v57 = v33;
  v58 = v34;
  v59 = v35;
  v60 = v36;
  v61 = v37;
  v62 = v38;
  v63 = v39;
  v54 = v30;
  v55 = v31;
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v28);
  std::sys::os_str::bytes::Slice::to_str(&v28, a6);
  if ( (_QWORD)v28 )
    goto LABEL_5;
  v41 = *((_QWORD *)&v28 + 1);
  v40 = v29;
  result = <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((_QWORD *)&v28 + 1), v29, aEf, 3LL);
  if ( (_BYTE)result )
  {
    v13 = (v12 ^ v9 | v11 ^ v8) == 0;
  }
  else
  {
    v14 = v41;
    v15 = v40;
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v41, v40, aNt, 3LL) )
    {
      std::fs::Metadata::modified(&v28, v42);
      v16 = core::result::Result<T,E>::unwrap(&v28, &off_114C98);
      v18 = v17;
      std::fs::Metadata::modified(&v28, v53);
      v19 = core::result::Result<T,E>::unwrap(&v28, &off_114CB0);
      v21 = v16 < v19;
      v22 = v16 != v19;
      result = 255LL;
      if ( v21 )
        v22 = -1;
      v23 = v18 != v20;
      if ( v18 < v20 )
        v23 = -1;
      if ( v22 )
        v23 = v22;
      v13 = v23 == 1;
    }
    else
    {
      if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v14, v15, aOt, 3LL) )
      {
LABEL_5:
        *(_QWORD *)&v28 = 1LL;
        *((_QWORD *)&v28 + 1) = a6;
        *(_QWORD *)&v29 = a7;
        BYTE8(v29) = 1;
        result = <T as alloc::string::ToString>::to_string(a1 + 8, &v28);
        *(_QWORD *)a1 = 4LL;
        return result;
      }
      std::fs::Metadata::modified(&v28, v42);
      v24 = core::result::Result<T,E>::unwrap(&v28, &off_114C68);
      v26 = v25;
      std::fs::Metadata::modified(&v28, v53);
      result = core::result::Result<T,E>::unwrap(&v28, &off_114C80);
      v13 = v24 < result;
      if ( v24 == result )
        v13 = v26 < v27;
    }
  }
  *(_BYTE *)(a1 + 8) = v13;
  *(_QWORD *)a1 = 7LL;
  return result;
}
