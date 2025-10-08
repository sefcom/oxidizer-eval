__int64 __fastcall fuel_core_e2e_client::main_body(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // r15
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm2
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  __int128 v12; // xmm3
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  __int128 v15; // xmm3
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  __int128 v18; // xmm3
  __int128 v19; // xmm1
  __int128 v20; // xmm2
  __int128 v21; // xmm3
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm2
  __int128 v25; // xmm1
  __int128 v26; // xmm2
  __int128 v27; // xmm3
  __int128 v28; // xmm1
  __int128 v29; // xmm2
  __int128 v30; // xmm3
  _QWORD v32[3]; // [rsp+8h] [rbp-380h] BYREF
  _BYTE v33[192]; // [rsp+20h] [rbp-368h] BYREF
  _OWORD v34[4]; // [rsp+E0h] [rbp-2A8h] BYREF
  __int64 v35; // [rsp+120h] [rbp-268h]
  _OWORD v36[4]; // [rsp+128h] [rbp-260h] BYREF
  __int64 v37; // [rsp+168h] [rbp-220h]
  _OWORD v38[4]; // [rsp+170h] [rbp-218h] BYREF
  __int64 v39; // [rsp+1B0h] [rbp-1D8h]
  _OWORD v40[4]; // [rsp+1B8h] [rbp-1D0h] BYREF
  __int64 v41; // [rsp+1F8h] [rbp-190h]
  _OWORD v42[4]; // [rsp+200h] [rbp-188h] BYREF
  __int64 v43; // [rsp+240h] [rbp-148h]
  _OWORD v44[4]; // [rsp+248h] [rbp-140h] BYREF
  __int64 v45; // [rsp+288h] [rbp-100h]
  _OWORD v46[4]; // [rsp+290h] [rbp-F8h] BYREF
  __int64 v47; // [rsp+2D0h] [rbp-B8h]
  _OWORD v48[4]; // [rsp+2D8h] [rbp-B0h] BYREF
  __int64 v49; // [rsp+318h] [rbp-70h]
  _OWORD v50[4]; // [rsp+320h] [rbp-68h] BYREF
  __int64 v51; // [rsp+360h] [rbp-28h]

  *a2 = 1LL;
  a2[1] = 1LL;
  v2 = alloc::alloc::Global::alloc_impl(8LL, 648LL, 0LL);
  if ( !v2 )
    alloc::alloc::handle_alloc_error(8LL, 648LL);
  v3 = v2;
  fuel_core_e2e_client::main_body::with_cloned(v33, a1);
  libtest_mimic::Trial::test(v34, v33);
  fuel_core_e2e_client::main_body::with_cloned(v33, a1);
  libtest_mimic::Trial::test(v36, v33);
  fuel_core_e2e_client::main_body::with_cloned(v33, a1);
  libtest_mimic::Trial::test(v38, v33);
  fuel_core_e2e_client::main_body::with_cloned(v33, a1);
  libtest_mimic::Trial::test(v40, v33);
  fuel_core_e2e_client::main_body::with_cloned(v33, a1);
  libtest_mimic::Trial::test(v42, v33);
  fuel_core_e2e_client::main_body::with_cloned(v33, a1);
  libtest_mimic::Trial::test(v44, v33);
  fuel_core_e2e_client::main_body::with_cloned(v33, a1);
  libtest_mimic::Trial::test(v46, v33);
  fuel_core_e2e_client::main_body::with_cloned(v33, a1);
  libtest_mimic::Trial::test(v48, v33);
  fuel_core_e2e_client::main_body::with_cloned(v33, a1);
  libtest_mimic::Trial::test(v50, v33);
  *(_QWORD *)(v3 + 64) = v35;
  v4 = v34[0];
  v5 = v34[1];
  v6 = v34[2];
  *(_OWORD *)(v3 + 48) = v34[3];
  *(_OWORD *)(v3 + 32) = v6;
  *(_OWORD *)(v3 + 16) = v5;
  *(_OWORD *)v3 = v4;
  *(_QWORD *)(v3 + 136) = v37;
  v7 = v36[0];
  v8 = v36[1];
  v9 = v36[2];
  *(_OWORD *)(v3 + 120) = v36[3];
  *(_OWORD *)(v3 + 104) = v9;
  *(_OWORD *)(v3 + 88) = v8;
  *(_OWORD *)(v3 + 72) = v7;
  v10 = v38[1];
  v11 = v38[2];
  v12 = v38[3];
  *(_OWORD *)(v3 + 144) = v38[0];
  *(_OWORD *)(v3 + 160) = v10;
  *(_OWORD *)(v3 + 176) = v11;
  *(_OWORD *)(v3 + 192) = v12;
  *(_QWORD *)(v3 + 208) = v39;
  v13 = v40[1];
  v14 = v40[2];
  v15 = v40[3];
  *(_OWORD *)(v3 + 216) = v40[0];
  *(_OWORD *)(v3 + 232) = v13;
  *(_OWORD *)(v3 + 248) = v14;
  *(_OWORD *)(v3 + 264) = v15;
  *(_QWORD *)(v3 + 280) = v41;
  v16 = v42[1];
  v17 = v42[2];
  v18 = v42[3];
  *(_OWORD *)(v3 + 288) = v42[0];
  *(_OWORD *)(v3 + 304) = v16;
  *(_OWORD *)(v3 + 320) = v17;
  *(_OWORD *)(v3 + 336) = v18;
  *(_QWORD *)(v3 + 352) = v43;
  v19 = v44[1];
  v20 = v44[2];
  v21 = v44[3];
  *(_OWORD *)(v3 + 360) = v44[0];
  *(_OWORD *)(v3 + 376) = v19;
  *(_OWORD *)(v3 + 392) = v20;
  *(_QWORD *)(v3 + 424) = v45;
  *(_OWORD *)(v3 + 408) = v21;
  *(_QWORD *)(v3 + 496) = v47;
  v22 = v46[0];
  v23 = v46[1];
  v24 = v46[2];
  *(_OWORD *)(v3 + 480) = v46[3];
  *(_OWORD *)(v3 + 464) = v24;
  *(_OWORD *)(v3 + 448) = v23;
  *(_OWORD *)(v3 + 432) = v22;
  v25 = v48[1];
  v26 = v48[2];
  v27 = v48[3];
  *(_OWORD *)(v3 + 504) = v48[0];
  *(_OWORD *)(v3 + 520) = v25;
  *(_OWORD *)(v3 + 536) = v26;
  *(_OWORD *)(v3 + 552) = v27;
  *(_QWORD *)(v3 + 568) = v49;
  v28 = v50[1];
  v29 = v50[2];
  v30 = v50[3];
  *(_OWORD *)(v3 + 576) = v50[0];
  *(_OWORD *)(v3 + 592) = v28;
  *(_OWORD *)(v3 + 608) = v29;
  *(_OWORD *)(v3 + 624) = v30;
  *(_QWORD *)(v3 + 640) = v51;
  v32[0] = 9LL;
  v32[1] = v3;
  v32[2] = 9LL;
  libtest_mimic::run(v33, a2, v32);
  libtest_mimic::Conclusion::exit_if_failed(v33);
  core::ptr::drop_in_place<libtest_mimic::args::Arguments>(a2);
  return core::ptr::drop_in_place<fuel_core_e2e_client::config::SuiteConfig>(a1);
}