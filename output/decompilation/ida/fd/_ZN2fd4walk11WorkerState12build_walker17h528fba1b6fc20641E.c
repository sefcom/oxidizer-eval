__int64 __fastcall fd::walk::WorkerState::build_walker(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  char v6; // bl
  char v7; // al
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // rbp
  __int64 v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rbp
  __int64 v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // r14
  __int64 v22; // r15
  _OWORD *v23; // rax
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm2
  __int128 v27; // [rsp+0h] [rbp-358h] BYREF
  __int64 v28; // [rsp+10h] [rbp-348h]
  __int64 v29; // [rsp+20h] [rbp-338h]
  __int128 v30; // [rsp+28h] [rbp-330h] BYREF
  __int128 v31; // [rsp+38h] [rbp-320h]
  __int128 v32; // [rsp+48h] [rbp-310h]
  __int64 v33; // [rsp+58h] [rbp-300h]
  __int128 v34; // [rsp+60h] [rbp-2F8h] BYREF
  __int128 v35; // [rsp+70h] [rbp-2E8h]
  __int128 v36; // [rsp+80h] [rbp-2D8h]
  __int128 v37; // [rsp+90h] [rbp-2C8h]
  __int128 v38; // [rsp+A0h] [rbp-2B8h]
  __int128 v39; // [rsp+B0h] [rbp-2A8h]
  __int64 v40; // [rsp+C0h] [rbp-298h]
  _OWORD *v41; // [rsp+C8h] [rbp-290h]
  __int64 v42; // [rsp+D0h] [rbp-288h]
  __int64 v43; // [rsp+D8h] [rbp-280h] BYREF
  __int64 v44; // [rsp+E0h] [rbp-278h]
  __int64 v45; // [rsp+E8h] [rbp-270h]
  char **v46; // [rsp+F0h] [rbp-268h] BYREF
  __int64 v47; // [rsp+F8h] [rbp-260h]
  __int128 *v48; // [rsp+100h] [rbp-258h]
  __int64 v49; // [rsp+108h] [rbp-250h]
  __int64 v50; // [rsp+110h] [rbp-248h]
  _QWORD v51[2]; // [rsp+120h] [rbp-238h] BYREF
  __int128 v52; // [rsp+130h] [rbp-228h] BYREF
  __int64 v53; // [rsp+140h] [rbp-218h]
  __int128 v54; // [rsp+148h] [rbp-210h]
  __int128 v55; // [rsp+158h] [rbp-200h]
  __int128 v56; // [rsp+168h] [rbp-1F0h]
  __int128 v57; // [rsp+178h] [rbp-1E0h]
  __int128 v58; // [rsp+188h] [rbp-1D0h]
  __int128 v59; // [rsp+198h] [rbp-1C0h]
  __int64 v60; // [rsp+1A8h] [rbp-1B0h]
  _OWORD v61[5]; // [rsp+1B0h] [rbp-1A8h] BYREF
  __int128 v62; // [rsp+200h] [rbp-158h] BYREF
  __int64 v63; // [rsp+210h] [rbp-148h]
  char v64; // [rsp+248h] [rbp-110h]
  char v65; // [rsp+249h] [rbp-10Fh]
  char v66; // [rsp+24Ah] [rbp-10Eh]
  char v67; // [rsp+24Bh] [rbp-10Dh]
  char v68; // [rsp+24Ch] [rbp-10Ch]
  char v69; // [rsp+24Dh] [rbp-10Bh]
  char v70; // [rsp+24Fh] [rbp-109h]
  __int64 v71; // [rsp+260h] [rbp-F8h]
  _BYTE v72[24]; // [rsp+288h] [rbp-D0h] BYREF
  _OWORD v73[7]; // [rsp+2A0h] [rbp-B8h] BYREF
  _BYTE v74[72]; // [rsp+310h] [rbp-48h] BYREF

  v42 = a4;
  if ( !a4 )
    core::panicking::panic_bounds_check(0LL, 0LL, &off_402688);
  fd::walk::WorkerState::build_overrides((__int64)v61, *(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 96), a3);
  result = *((_QWORD *)&v61[0] + 1);
  if ( __OFSUB__(-*(_QWORD *)&v61[0], 1LL) )
  {
    a1[1] = *((_QWORD *)&v61[0] + 1);
    *a1 = 2LL;
  }
  else
  {
    v41 = a1;
    v60 = v63;
    v59 = v62;
    v58 = v61[4];
    v57 = v61[3];
    v56 = v61[2];
    v55 = v61[1];
    v54 = v61[0];
    ignore::walk::WalkBuilder::new(v61, a3);
    v64 = *(_BYTE *)(a2 + 474);
    v6 = *(_BYTE *)(a2 + 475);
    v65 = v6;
    if ( *(_BYTE *)(a2 + 476) == 1 )
    {
      v7 = 1;
      if ( !v6 )
        v7 = *(_BYTE *)(a2 + 477);
    }
    else
    {
      v7 = 0;
    }
    v66 = v7;
    v68 = *(_BYTE *)(a2 + 477);
    v67 = v68;
    v69 = v68;
    v70 = *(_BYTE *)(a2 + 478);
    v40 = v60;
    v39 = v59;
    v38 = v58;
    v37 = v57;
    v36 = v56;
    v35 = v55;
    v34 = v54;
    v8 = ignore::walk::WalkBuilder::overrides(v61, &v34);
    *(_BYTE *)(v8 + 208) = *(_BYTE *)(a2 + 480);
    *(_BYTE *)(v8 + 209) = *(_BYTE *)(a2 + 481);
    *(_OWORD *)v8 = *(_OWORD *)a2;
    if ( v6 )
      ignore::dir::IgnoreBuilder::add_custom_ignore_filename(&v62);
    if ( *(_BYTE *)(a2 + 479) )
    {
      etcetera::base_strategy::choose_native_strategy(&v52);
      if ( (_QWORD)v52 != 0x8000000000000000LL )
      {
        v28 = v53;
        v27 = v52;
        <etcetera::base_strategy::xdg::Xdg as etcetera::base_strategy::BaseStrategy>::config_dir(&v34, &v27);
        v9 = *((_QWORD *)&v34 + 1);
        std::path::Path::join(&v30, *((_QWORD *)&v34 + 1), v35, aFd, 2LL);
        v10 = *((_QWORD *)&v30 + 1);
        std::path::Path::join(&v43, *((_QWORD *)&v30 + 1), v31, aIgnore, 6LL);
        core::mem::drop(v30, v10);
        core::mem::drop(v34, v9);
        v11 = v44;
        if ( (unsigned __int8)std::path::Path::is_file(v44, v45) )
        {
          ignore::walk::WalkBuilder::add_ignore(&v30, v61, &v43);
          v13 = v30;
          v14 = v30;
          if ( (_QWORD)v30 != 9LL )
          {
            v14 = v30;
            if ( (_QWORD)v30 )
            {
              *(_QWORD *)&v37 = v33;
              v36 = v32;
              v35 = v31;
              v34 = v30;
              v51[0] = &v34;
              v51[1] = <ignore::Error as core::fmt::Display>::fmt;
              v46 = &off_402648;
              v47 = 2LL;
              v50 = 0LL;
              v48 = (__int128 *)v51;
              v49 = 1LL;
              core::option::Option<T>::map_or_else(v72, 0LL, v12, &v46);
              fd::error::print_error((__int64)v72);
              core::ptr::drop_in_place<ignore::Error>(&v34);
              v14 = v30;
            }
          }
          if ( v14 != 9 && (!v13 || (_DWORD)v13 == 9) )
            core::ptr::drop_in_place<ignore::Error>(&v30);
        }
        else
        {
          core::mem::drop(v43, v11);
        }
        core::ptr::drop_in_place<fd::hyperlink::PathUrl>(v27, *((_QWORD *)&v27 + 1));
      }
    }
    v29 = a2;
    v15 = *(_QWORD *)(a2 + 120);
    if ( v15 )
    {
      v16 = *(_QWORD *)(v29 + 112);
      v17 = 24 * v15;
      do
      {
        ignore::walk::WalkBuilder::add_ignore(&v30, v61, v16);
        v19 = v30;
        v20 = v30;
        if ( (_QWORD)v30 != 9LL )
        {
          v20 = v30;
          if ( (_QWORD)v30 )
          {
            *(_QWORD *)&v37 = v33;
            v36 = v32;
            v35 = v31;
            v34 = v30;
            *(_QWORD *)&v27 = &v34;
            *((_QWORD *)&v27 + 1) = <ignore::Error as core::fmt::Display>::fmt;
            v46 = &off_402668;
            v47 = 2LL;
            v50 = 0LL;
            v48 = &v27;
            v49 = 1LL;
            core::option::Option<T>::map_or_else(v74, 0LL, v18, &v46);
            fd::error::print_error((__int64)v74);
            core::ptr::drop_in_place<ignore::Error>(&v34);
            v20 = v30;
          }
        }
        if ( v20 != 9 && (!v19 || (_DWORD)v19 == 9) )
          core::ptr::drop_in_place<ignore::Error>(&v30);
        v16 += 24LL;
        v17 -= 24LL;
      }
      while ( v17 );
    }
    v21 = 24 * v42 - 24;
    v22 = a3 + 24;
    while ( v21 )
    {
      v21 -= 24LL;
      ignore::walk::WalkBuilder::add(v61, v22);
      v22 += 24LL;
    }
    v71 = *(_QWORD *)(v29 + 416);
    ignore::walk::WalkBuilder::build_parallel(v73, v61);
    v23 = v41;
    v41[6] = v73[6];
    v23[5] = v73[5];
    v23[4] = v73[4];
    v24 = v73[0];
    v25 = v73[1];
    v26 = v73[2];
    v23[3] = v73[3];
    v23[2] = v26;
    v23[1] = v25;
    *v23 = v24;
    return core::ptr::drop_in_place<ignore::walk::WalkBuilder>(v61);
  }
  return result;
}