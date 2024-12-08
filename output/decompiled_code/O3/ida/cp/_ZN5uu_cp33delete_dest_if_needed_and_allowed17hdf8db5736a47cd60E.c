        __int64 a8)
{
  int v8; // eax
  __int64 v9; // r14
  __int64 v10; // r15
  char is_symlink_loop; // al
  __int64 v12; // rax
  bool v13; // al
  __int64 v14; // r12
  __int64 v15; // r13
  __int64 v17; // rax
  __int64 v18; // r15
  __int64 inner; // rax
  __int128 v20; // [rsp+8h] [rbp-270h] BYREF
  _QWORD *v21; // [rsp+18h] [rbp-260h]
  __int128 v22; // [rsp+20h] [rbp-258h] BYREF
  _QWORD *v23; // [rsp+30h] [rbp-248h]
  __int64 v24; // [rsp+38h] [rbp-240h]
  __int64 v25; // [rsp+40h] [rbp-238h]
  _QWORD v26[2]; // [rsp+50h] [rbp-228h] BYREF
  __int128 v27; // [rsp+60h] [rbp-218h]
  __int64 v28; // [rsp+70h] [rbp-208h]
  _QWORD v29[3]; // [rsp+80h] [rbp-1F8h] BYREF
  char v30; // [rsp+98h] [rbp-1E0h]
  __int128 v31; // [rsp+A0h] [rbp-1D8h]
  __int128 v32; // [rsp+B0h] [rbp-1C8h]
  __int128 v33; // [rsp+C0h] [rbp-1B8h]
  __int128 v34; // [rsp+D0h] [rbp-1A8h]
  __int128 v35; // [rsp+E0h] [rbp-198h]
  __int128 v36; // [rsp+F0h] [rbp-188h]
  __int128 v37; // [rsp+100h] [rbp-178h]
  __int64 v38; // [rsp+110h] [rbp-168h] BYREF
  __int128 v39; // [rsp+118h] [rbp-160h]
  __int64 v40; // [rsp+128h] [rbp-150h]
  __int64 v41; // [rsp+130h] [rbp-148h]
  __int128 v42; // [rsp+138h] [rbp-140h]
  __int128 v43; // [rsp+148h] [rbp-130h]
  __int128 v44; // [rsp+158h] [rbp-120h]
  __int128 v45; // [rsp+168h] [rbp-110h]
  __int128 v46; // [rsp+178h] [rbp-100h]
  __int128 v47; // [rsp+188h] [rbp-F0h]
  __int128 v48; // [rsp+198h] [rbp-E0h]
  __int128 v49; // [rsp+1C0h] [rbp-B8h] BYREF
  __int64 v50; // [rsp+1D0h] [rbp-A8h]
  __int64 v51; // [rsp+1D8h] [rbp-A0h]
  __int128 v52; // [rsp+1E0h] [rbp-98h]
  __int128 v53; // [rsp+1F0h] [rbp-88h]
  __int128 v54; // [rsp+200h] [rbp-78h]
  __int128 v55; // [rsp+210h] [rbp-68h]
  __int128 v56; // [rsp+220h] [rbp-58h]
  __int128 v57; // [rsp+230h] [rbp-48h]
  __int128 v58; // [rsp+240h] [rbp-38h]

  if ( a6[60] >= 2u )
    goto LABEL_18;
  v8 = (unsigned __int8)a6[61];
  if ( v8 == 2 )
  {
    if ( !a6[56] )
      goto LABEL_18;
    v13 = a6[65] != 0;
    v14 = a4;
    v15 = a5;
    if ( !a6[65] && a7 )
      v13 = a6[64] != 0;
    uucore::features::fs::FileInformation::from_path(&v38, a2, a3, v13);
    v29[0] = 1LL;
    v29[1] = a2;
    v29[2] = a3;
    v30 = 1;
    v26[0] = v29;
    v26[1] = <os_display::Quoted as core::fmt::Display>::fmt;
    *(_QWORD *)&v22 = &off_1B5838;
    *((_QWORD *)&v22 + 1) = 1LL;
    v25 = 0LL;
    v23 = v26;
    v24 = 1LL;
    core::option::Option<T>::map_or_else(&v20, &v22);
    v23 = v21;
    v22 = v20;
    if ( v38 )
    {
      v17 = v39;
      *(_QWORD *)(a1 + 24) = v21;
      *(_OWORD *)(a1 + 8) = v20;
      *(_QWORD *)a1 = 3LL;
      *(_QWORD *)(a1 + 32) = v17;
      return;
    }
    v28 = v40;
    v27 = v39;
    v18 = v41;
    v31 = v42;
    v32 = v43;
    v33 = v44;
    v34 = v45;
    v35 = v46;
    v36 = v47;
    v37 = v48;
    core::ptr::drop_in_place<<core::result::Result<uucore::features::fs::FileInformation,std::io::error::Error> as quick_error::ResultExt<uucore::features::fs::FileInformation,std::io::error::Error>>::context<alloc::string::String>::{{closure}}>(&v22);
    v49 = v27;
    v50 = v28;
    v51 = v18;
    v52 = v31;
    v53 = v32;
    v54 = v33;
    v55 = v34;
    v56 = v35;
    v57 = v36;
    v58 = v37;
    inner = hashbrown::map::HashMap<K,V,S,A>::get_inner(a8, &v49);
    a5 = v15;
    a4 = v14;
    if ( !inner )
      goto LABEL_18;
    goto LABEL_16;
  }
  if ( v8 == 1 )
    goto LABEL_16;
  v9 = a5;
  v10 = a4;
  is_symlink_loop = uucore::features::fs::is_symlink_loop(a4, a5);
  a4 = v10;
  a5 = v9;
  if ( is_symlink_loop )
    goto LABEL_16;
  std::fs::metadata(&v38);
  if ( (_DWORD)v38 == 2 )
  {
    v12 = v39;
LABEL_17:
    *(_QWORD *)a1 = 2LL;
    *(_QWORD *)(a1 + 8) = v12;
    return;
  }
  a5 = v9;
  a4 = v10;
  if ( (v43 & 0x92) == 0 )
  {
LABEL_16:
    v12 = std::fs::remove_file(a4, a5);
    if ( v12 )
      goto LABEL_17;
  }
LABEL_18:
  *(_QWORD *)a1 = 13LL;
}
