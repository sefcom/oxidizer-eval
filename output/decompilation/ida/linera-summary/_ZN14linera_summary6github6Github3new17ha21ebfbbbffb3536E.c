_QWORD *__fastcall linera_summary::github::Github::new(
        _QWORD *dest,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  char v7; // r15
  __int64 v8; // r15
  __int64 v9; // r14
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm2
  __int64 v14; // [rsp+0h] [rbp-428h]
  __int64 v15; // [rsp+8h] [rbp-420h]
  __int64 v16; // [rsp+10h] [rbp-418h]
  int v17; // [rsp+18h] [rbp-410h] BYREF
  __int64 v18; // [rsp+20h] [rbp-408h]
  __int64 v19; // [rsp+28h] [rbp-400h]
  __int64 v20; // [rsp+30h] [rbp-3F8h]
  _OWORD v21[9]; // [rsp+38h] [rbp-3F0h] BYREF
  _OWORD src[10]; // [rsp+C8h] [rbp-360h] BYREF
  __int64 v23; // [rsp+168h] [rbp-2C0h]
  __int64 v24; // [rsp+170h] [rbp-2B8h]
  int v25; // [rsp+180h] [rbp-2A8h]
  int v26; // [rsp+190h] [rbp-298h]
  int v27; // [rsp+1A0h] [rbp-288h]
  char v28; // [rsp+1A8h] [rbp-280h]
  char v29; // [rsp+200h] [rbp-228h]
  __int64 v30; // [rsp+258h] [rbp-1D0h]
  __int64 desta; // [rsp+268h] [rbp-1C0h] BYREF
  __int64 v32; // [rsp+270h] [rbp-1B8h]
  __int128 v33; // [rsp+278h] [rbp-1B0h]
  __int128 v34; // [rsp+288h] [rbp-1A0h]
  __int128 v35; // [rsp+298h] [rbp-190h]
  __int128 v36; // [rsp+2A8h] [rbp-180h]
  __int128 v37; // [rsp+2B8h] [rbp-170h]
  __int128 v38; // [rsp+2C8h] [rbp-160h]
  __int128 v39; // [rsp+2D8h] [rbp-150h]
  __int64 v40; // [rsp+2E8h] [rbp-140h]
  __int64 v41; // [rsp+2F0h] [rbp-138h]
  __int128 v42; // [rsp+2F8h] [rbp-130h]
  __int64 v43; // [rsp+308h] [rbp-120h]
  __int64 v44; // [rsp+310h] [rbp-118h]
  int v45; // [rsp+320h] [rbp-108h]
  int v46; // [rsp+330h] [rbp-F8h]
  int v47; // [rsp+340h] [rbp-E8h]
  char v48; // [rsp+348h] [rbp-E0h]
  char v49; // [rsp+3A0h] [rbp-88h]
  __int64 v50; // [rsp+3F8h] [rbp-30h]

  v7 = a3;
  if ( a2 )
  {
    desta = 1LL;
    v32 = 3LL;
    *(_QWORD *)&v33 = 2LL;
    v40 = 0LL;
    v41 = 8LL;
    v42 = 0LL;
    v43 = 8LL;
    v44 = 0LL;
    v45 = 1000000000;
    v46 = 1000000000;
    v47 = 1000000000;
    v48 = 3;
    v49 = 3;
    v50 = 0LL;
  }
  else
  {
    *(_QWORD *)&src[0] = 1LL;
    *((_QWORD *)&src[0] + 1) = 3LL;
    *(_QWORD *)&src[1] = 2LL;
    *(_QWORD *)&src[8] = 0LL;
    *((_QWORD *)&src[8] + 1) = 8LL;
    src[9] = 0LL;
    v23 = 8LL;
    v24 = 0LL;
    v25 = 1000000000;
    v26 = 1000000000;
    v27 = 1000000000;
    v28 = 3;
    v29 = 3;
    v30 = 0LL;
    std::env::var(&v17, aGithubToken, 12LL);
    if ( v17 == 1 )
    {
      dest[1] = linera_summary::github::Github::new::{{closure}}(v18, v19);
      *dest = 4LL;
      core::ptr::drop_in_place<octocrab::OctocrabBuilder<octocrab::NoSvc,octocrab::DefaultOctocrabBuilderConfig,octocrab::NoAuth,octocrab::NotLayerReady>>(src);
      return dest;
    }
    v14 = v18;
    v15 = v19;
    v16 = v20;
    octocrab::OctocrabBuilder<octocrab::NoSvc,octocrab::DefaultOctocrabBuilderConfig,octocrab::NoAuth,octocrab::NotLayerReady>::personal_token(
      &desta,
      src);
  }
  octocrab::OctocrabBuilder<octocrab::NoSvc,octocrab::DefaultOctocrabBuilderConfig,octocrab::NoAuth,octocrab::NotLayerReady>::build(
    v21,
    &desta,
    a3,
    a4,
    a5,
    a6,
    v14,
    v15,
    v16);
  if ( *(_QWORD *)&v21[0] == 4LL )
  {
    dest[1] = linera_summary::github::Github::new::{{closure}}((char *)v21 + 8);
    *dest = 4LL;
  }
  else
  {
    src[8] = v21[8];
    src[7] = v21[7];
    src[6] = v21[6];
    src[5] = v21[5];
    src[4] = v21[4];
    src[3] = v21[3];
    src[2] = v21[2];
    src[1] = v21[1];
    src[0] = v21[0];
    linera_summary::github::GithubContext::from_env((__int64)&desta, a2, v7, a4);
    v8 = desta;
    v9 = v32;
    if ( __OFSUB__(-desta, 1LL) )
    {
      dest[1] = v32;
      *dest = 4LL;
      core::ptr::drop_in_place<octocrab::Octocrab>(src);
    }
    else
    {
      *((_OWORD *)dest + 16) = v39;
      *((_OWORD *)dest + 15) = v38;
      *((_OWORD *)dest + 14) = v37;
      v10 = v33;
      v11 = v34;
      v12 = v35;
      *((_OWORD *)dest + 13) = v36;
      *((_OWORD *)dest + 12) = v12;
      *((_OWORD *)dest + 11) = v11;
      *((_OWORD *)dest + 10) = v10;
      memcpy(dest, src, 0x90uLL);
      dest[18] = v8;
      dest[19] = v9;
      *((_BYTE *)dest + 272) = a2;
    }
  }
  return dest;
}