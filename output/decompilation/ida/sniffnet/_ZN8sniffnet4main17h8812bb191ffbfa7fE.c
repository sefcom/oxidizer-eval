__int64 __fastcall sniffnet::main(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rdx
  __int64 v3; // rbx
  _QWORD *v4; // rax
  __int64 v5; // r12
  __int64 v6; // r13
  __m256i v8; // [rsp+0h] [rbp-6E8h]
  __int128 v9; // [rsp+20h] [rbp-6C8h] BYREF
  __int128 v10; // [rsp+30h] [rbp-6B8h]
  __int128 v11; // [rsp+40h] [rbp-6A8h]
  __m256i v12; // [rsp+50h] [rbp-698h]
  __int64 v13; // [rsp+70h] [rbp-678h]
  __int128 v14; // [rsp+78h] [rbp-670h] BYREF
  __int128 v15; // [rsp+88h] [rbp-660h]
  __int128 v16; // [rsp+98h] [rbp-650h]
  __int128 v17; // [rsp+A8h] [rbp-640h]
  __int128 v18; // [rsp+B8h] [rbp-630h]
  __int128 v19; // [rsp+C8h] [rbp-620h]
  __int128 v20; // [rsp+D8h] [rbp-610h]
  __int64 v21; // [rsp+E8h] [rbp-600h]
  __int64 v22; // [rsp+F0h] [rbp-5F8h]
  __int64 v23; // [rsp+F8h] [rbp-5F0h]
  _QWORD v24[3]; // [rsp+100h] [rbp-5E8h] BYREF
  char v25; // [rsp+118h] [rbp-5D0h]
  __int128 v26; // [rsp+120h] [rbp-5C8h] BYREF
  __int64 v27; // [rsp+130h] [rbp-5B8h]
  char v28; // [rsp+138h] [rbp-5B0h]
  __m256i v29; // [rsp+140h] [rbp-5A8h]
  int v30; // [rsp+160h] [rbp-588h]
  double v31; // [rsp+164h] [rbp-584h] BYREF
  __int64 v32; // [rsp+170h] [rbp-578h] BYREF
  int v33; // [rsp+178h] [rbp-570h]
  int v34; // [rsp+184h] [rbp-564h]
  int v35; // [rsp+190h] [rbp-558h]
  __int16 v36; // [rsp+194h] [rbp-554h]
  __int128 v37; // [rsp+198h] [rbp-550h]
  __int64 v38; // [rsp+1A8h] [rbp-540h]
  __m128 v39; // [rsp+1B0h] [rbp-538h]
  __m128 v40; // [rsp+1C0h] [rbp-528h]
  _QWORD v41[3]; // [rsp+1D8h] [rbp-510h] BYREF
  char v42; // [rsp+1F0h] [rbp-4F8h]
  unsigned __int64 v43; // [rsp+1F8h] [rbp-4F0h]
  __int128 v44; // [rsp+200h] [rbp-4E8h]
  __int64 v45; // [rsp+210h] [rbp-4D8h]
  int v46; // [rsp+218h] [rbp-4D0h]
  __int64 v47; // [rsp+228h] [rbp-4C0h]
  int v48; // [rsp+230h] [rbp-4B8h]
  int v49; // [rsp+23Ch] [rbp-4ACh]
  int v50; // [rsp+248h] [rbp-4A0h]
  __int16 v51; // [rsp+24Ch] [rbp-49Ch]
  _BYTE dest[504]; // [rsp+250h] [rbp-498h] BYREF
  __int64 v53; // [rsp+448h] [rbp-2A0h]
  __int64 v54; // [rsp+450h] [rbp-298h]
  _OWORD v55[5]; // [rsp+460h] [rbp-288h] BYREF
  __int64 v56; // [rsp+4B0h] [rbp-238h]
  _QWORD src[69]; // [rsp+4C0h] [rbp-228h] BYREF

  std::sync::poison::once::Once::call_once();
  <sniffnet::gui::types::conf::Conf as core::clone::Clone>::clone(src);
  v1 = sniffnet::cli::handle_cli_args(src, &sniffnet::gui::types::conf::CONF);
  v3 = v2;
  sniffnet::utils::formatted_strings::print_cli_welcome_message();
  v39 = (__m128)src[59];
  v40 = (__m128)src[60];
  *(_QWORD *)dest = 2LL;
  *(_WORD *)&dest[24] = 768;
  dest[26] = 4;
  *(_QWORD *)&dest[32] = 0LL;
  *(_QWORD *)&dest[40] = 8LL;
  *(_QWORD *)&dest[48] = 0LL;
  *(_QWORD *)&dest[56] = 0x8000000000000000LL;
  *(_DWORD *)&dest[80] = 1098907648;
  dest[84] = 0;
  *(_QWORD *)&dest[88] = 0LL;
  *(_QWORD *)&dest[96] = 1LL;
  *(_QWORD *)&dest[104] = 0LL;
  dest[112] = 0;
  *(_QWORD *)&dest[120] = 0x8000000000000000LL;
  *(_DWORD *)&dest[152] = 0;
  *(_QWORD *)&dest[168] = 0x4440000044800000LL;
  *(_DWORD *)&dest[176] = 0;
  *(_DWORD *)&dest[188] = 0;
  *(_DWORD *)&dest[200] = 65793;
  *(_WORD *)&dest[204] = 1;
  *(_QWORD *)&dest[208] = aSniffnet;
  *(_QWORD *)&dest[216] = 8LL;
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v9, &unk_2738C8, 8LL);
  v27 = v10;
  v26 = v9;
  v4 = (_QWORD *)alloc::alloc::Global::alloc_impl(8LL, 72LL, 0LL);
  if ( !v4 )
    alloc::alloc::handle_alloc_error(8LL, 72LL);
  *v4 = 0x8000000000000000LL;
  v4[1] = &unk_184B2F6;
  v4[2] = 246720LL;
  v4[3] = 0x8000000000000000LL;
  v4[4] = &unk_18876B6;
  v4[5] = 243820LL;
  v4[6] = 0x8000000000000000LL;
  v4[7] = &unk_18C2F22;
  v4[8] = 19828LL;
  v12.m256i_i64[3] = v27;
  *(_OWORD *)&v12.m256i_u64[1] = v26;
  v5 = *(_QWORD *)&dest[208];
  v6 = *(_QWORD *)&dest[216];
  v22 = *(_QWORD *)&dest[208];
  v23 = *(_QWORD *)&dest[216];
  *(_QWORD *)&v9 = 0LL;
  *((_QWORD *)&v9 + 1) = aSarasaMonoScFo;
  *(_QWORD *)&v10 = 27LL;
  WORD4(v10) = 768;
  BYTE10(v10) = 4;
  *(_QWORD *)&v11 = 3LL;
  *((_QWORD *)&v11 + 1) = v4;
  v12.m256i_i64[0] = 3LL;
  LODWORD(v13) = 1099327078;
  BYTE4(v13) = 1;
  v21 = *(_QWORD *)&dest[200];
  v20 = *(_OWORD *)&dest[184];
  v19 = *(_OWORD *)&dest[168];
  v18 = *(_OWORD *)&dest[152];
  v17 = *(_OWORD *)&dest[136];
  v16 = *(_OWORD *)&dest[120];
  v15 = *(_OWORD *)&dest[104];
  v14 = *(_OWORD *)&dest[88];
  core::ptr::drop_in_place<iced::settings::Settings>(dest);
  iced::window::icon::from_file_data(dest, &unk_18C7C96, 56514LL, 0LL);
  if ( dest[0] == 12 )
  {
    v8 = *(__m256i *)&dest[8];
  }
  else
  {
    v8.m256i_i64[0] = 0x8000000000000000LL;
    *(_OWORD *)&v8.m256i_u64[1] = v37;
    v8.m256i_i64[3] = v38;
    core::ptr::drop_in_place<core::result::Result<iced_core::window::icon::Icon,iced::window::icon::Error>>(dest);
  }
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v26, &unk_2738C8, 8LL);
  *(_QWORD *)&dest[104] = v27;
  *(_OWORD *)&dest[88] = v26;
  v24[0] = 0LL;
  v24[1] = 1LL;
  v24[2] = 0LL;
  v25 = 0;
  v47 = 0x4440000044800000LL;
  v46 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 65793;
  v43 = 0x8000000000000000LL;
  v51 = 1;
  v44 = v37;
  v45 = v38;
  v41[0] = 0LL;
  v41[1] = 1LL;
  v41[2] = 0LL;
  v42 = 0;
  v29 = v8;
  *(_QWORD *)&dest[80] = v13;
  *(__m256i *)&dest[48] = v12;
  *(_OWORD *)&dest[32] = v11;
  *(_OWORD *)&dest[16] = v10;
  *(_OWORD *)dest = v9;
  core::ptr::drop_in_place<iced_core::window::settings::Settings>(&v14);
  v13 = *(_QWORD *)&dest[80];
  v12 = *(__m256i *)&dest[48];
  v11 = *(_OWORD *)&dest[32];
  v10 = *(_OWORD *)&dest[16];
  v9 = *(_OWORD *)dest;
  v14 = *(_OWORD *)&dest[88];
  *(_QWORD *)&v15 = *(_QWORD *)&dest[104];
  v56 = *(_QWORD *)&dest[80];
  v55[4] = *(_OWORD *)&dest[64];
  v55[3] = *(_OWORD *)&dest[48];
  v55[2] = *(_OWORD *)&dest[32];
  v55[1] = *(_OWORD *)&dest[16];
  v55[0] = *(_OWORD *)dest;
  v27 = *(_QWORD *)&dest[104];
  v26 = *(_OWORD *)&dest[88];
  memcpy(dest, src, sizeof(dest));
  v53 = v1;
  v54 = v3;
  v28 = 0;
  v30 = 2;
  _mm_storel_ps(&v31, v39);
  _mm_storel_ps((double *)&v32, v40);
  v33 = 0;
  v34 = 0;
  v35 = 65793;
  v36 = 0;
  iced::program::Program::run_with(a1, v5, v6, v55, &v26, dest);
  core::ptr::drop_in_place<iced_core::window::settings::Settings>(v41);
  core::ptr::drop_in_place<x11_dl::error::OpenError>(v24);
  return a1;
}