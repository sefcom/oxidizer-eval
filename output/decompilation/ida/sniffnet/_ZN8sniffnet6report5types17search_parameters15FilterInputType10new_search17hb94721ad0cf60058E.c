__int64 __fastcall sniffnet::report::types::search_parameters::FilterInputType::new_search(
        __int64 a1,
        char a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int128 *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 result; // rax
  __int128 v24; // [rsp+0h] [rbp-118h]
  __int128 v25; // [rsp+0h] [rbp-118h]
  __int128 v26; // [rsp+0h] [rbp-118h]
  __int128 v27; // [rsp+0h] [rbp-118h]
  __int128 v28; // [rsp+0h] [rbp-118h]
  __int128 v29; // [rsp+0h] [rbp-118h]
  __int128 v30; // [rsp+0h] [rbp-118h]
  __int128 v31; // [rsp+0h] [rbp-118h]
  __int64 v32; // [rsp+10h] [rbp-108h]
  __int64 v33; // [rsp+10h] [rbp-108h]
  __int64 v34; // [rsp+10h] [rbp-108h]
  __int64 v35; // [rsp+10h] [rbp-108h]
  __int64 v36; // [rsp+10h] [rbp-108h]
  __int64 v37; // [rsp+10h] [rbp-108h]
  __int64 v38; // [rsp+10h] [rbp-108h]
  __int64 v39; // [rsp+10h] [rbp-108h]
  __int128 v40; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v41; // [rsp+30h] [rbp-E8h]
  __int128 v42; // [rsp+38h] [rbp-E0h] BYREF
  __int64 v43; // [rsp+48h] [rbp-D0h]
  __int128 v44; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v45; // [rsp+60h] [rbp-B8h]
  __int128 v46; // [rsp+68h] [rbp-B0h] BYREF
  __int64 v47; // [rsp+78h] [rbp-A0h]
  __int128 v48; // [rsp+80h] [rbp-98h] BYREF
  __int64 v49; // [rsp+90h] [rbp-88h]
  __int128 v50; // [rsp+98h] [rbp-80h] BYREF
  __int64 v51; // [rsp+A8h] [rbp-70h]
  __int128 v52; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v53; // [rsp+C0h] [rbp-58h]
  __int128 v54; // [rsp+C8h] [rbp-50h] BYREF
  __int64 v55; // [rsp+D8h] [rbp-40h]
  __int128 v56; // [rsp+E0h] [rbp-38h] BYREF
  __int64 v57; // [rsp+F0h] [rbp-28h]
  char v58; // [rsp+F8h] [rbp-20h]

  switch ( a2 )
  {
    case 0:
      v6 = core::str::<impl str>::trim_matches(*(_QWORD *)(a4 + 8), *(_QWORD *)(a4 + 16));
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v40, v6, v7);
      v32 = v41;
      v24 = v40;
      <sniffnet::report::types::search_parameters::SearchParameters as core::clone::Clone>::clone(&v40, a3);
      *(_QWORD *)(a1 + 16) = v32;
      *(_OWORD *)a1 = v24;
      *(_QWORD *)(a1 + 40) = v43;
      *(_OWORD *)(a1 + 24) = v42;
      *(_QWORD *)(a1 + 64) = v45;
      *(_OWORD *)(a1 + 48) = v44;
      *(_QWORD *)(a1 + 88) = v47;
      *(_OWORD *)(a1 + 72) = v46;
      *(_QWORD *)(a1 + 112) = v49;
      *(_OWORD *)(a1 + 96) = v48;
      *(_OWORD *)(a1 + 120) = v50;
      *(_QWORD *)(a1 + 136) = v51;
      *(_OWORD *)(a1 + 144) = v52;
      *(_QWORD *)(a1 + 160) = v53;
      *(_QWORD *)(a1 + 184) = v55;
      *(_OWORD *)(a1 + 168) = v54;
      *(_OWORD *)(a1 + 192) = v56;
      *(_QWORD *)(a1 + 208) = v57;
      *(_BYTE *)(a1 + 216) = v58;
      v8 = &v40;
      goto LABEL_10;
    case 1:
      v17 = core::str::<impl str>::trim_matches(*(_QWORD *)(a4 + 8), *(_QWORD *)(a4 + 16));
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v40, v17, v18);
      v37 = v41;
      v29 = v40;
      <sniffnet::report::types::search_parameters::SearchParameters as core::clone::Clone>::clone(&v40, a3);
      *(_QWORD *)(a1 + 16) = v41;
      *(_OWORD *)a1 = v40;
      *(_QWORD *)(a1 + 40) = v37;
      *(_OWORD *)(a1 + 24) = v29;
      *(_QWORD *)(a1 + 64) = v45;
      *(_OWORD *)(a1 + 48) = v44;
      *(_QWORD *)(a1 + 88) = v47;
      *(_OWORD *)(a1 + 72) = v46;
      *(_QWORD *)(a1 + 112) = v49;
      *(_OWORD *)(a1 + 96) = v48;
      *(_OWORD *)(a1 + 120) = v50;
      *(_QWORD *)(a1 + 136) = v51;
      *(_OWORD *)(a1 + 144) = v52;
      *(_QWORD *)(a1 + 160) = v53;
      *(_QWORD *)(a1 + 184) = v55;
      *(_OWORD *)(a1 + 168) = v54;
      *(_OWORD *)(a1 + 192) = v56;
      *(_QWORD *)(a1 + 208) = v57;
      *(_BYTE *)(a1 + 216) = v58;
      v8 = &v42;
      goto LABEL_10;
    case 2:
      v11 = core::str::<impl str>::trim_matches(*(_QWORD *)(a4 + 8), *(_QWORD *)(a4 + 16));
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v40, v11, v12);
      v34 = v41;
      v26 = v40;
      <sniffnet::report::types::search_parameters::SearchParameters as core::clone::Clone>::clone(&v40, a3);
      *(_QWORD *)(a1 + 16) = v41;
      *(_OWORD *)a1 = v40;
      *(_QWORD *)(a1 + 40) = v43;
      *(_OWORD *)(a1 + 24) = v42;
      *(_QWORD *)(a1 + 64) = v34;
      *(_OWORD *)(a1 + 48) = v26;
      *(_QWORD *)(a1 + 88) = v47;
      *(_OWORD *)(a1 + 72) = v46;
      *(_QWORD *)(a1 + 112) = v49;
      *(_OWORD *)(a1 + 96) = v48;
      *(_OWORD *)(a1 + 120) = v50;
      *(_QWORD *)(a1 + 136) = v51;
      *(_OWORD *)(a1 + 144) = v52;
      *(_QWORD *)(a1 + 160) = v53;
      *(_QWORD *)(a1 + 184) = v55;
      *(_OWORD *)(a1 + 168) = v54;
      *(_OWORD *)(a1 + 192) = v56;
      *(_QWORD *)(a1 + 208) = v57;
      *(_BYTE *)(a1 + 216) = v58;
      v8 = &v44;
      goto LABEL_10;
    case 3:
      v13 = core::str::<impl str>::trim_matches(*(_QWORD *)(a4 + 8), *(_QWORD *)(a4 + 16));
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v40, v13, v14);
      v35 = v41;
      v27 = v40;
      <sniffnet::report::types::search_parameters::SearchParameters as core::clone::Clone>::clone(&v40, a3);
      *(_QWORD *)(a1 + 16) = v41;
      *(_OWORD *)a1 = v40;
      *(_QWORD *)(a1 + 40) = v43;
      *(_OWORD *)(a1 + 24) = v42;
      *(_QWORD *)(a1 + 64) = v45;
      *(_OWORD *)(a1 + 48) = v44;
      *(_QWORD *)(a1 + 88) = v35;
      *(_OWORD *)(a1 + 72) = v27;
      *(_QWORD *)(a1 + 112) = v49;
      *(_OWORD *)(a1 + 96) = v48;
      *(_OWORD *)(a1 + 120) = v50;
      *(_QWORD *)(a1 + 136) = v51;
      *(_OWORD *)(a1 + 144) = v52;
      *(_QWORD *)(a1 + 160) = v53;
      *(_QWORD *)(a1 + 184) = v55;
      *(_OWORD *)(a1 + 168) = v54;
      *(_OWORD *)(a1 + 192) = v56;
      *(_QWORD *)(a1 + 208) = v57;
      *(_BYTE *)(a1 + 216) = v58;
      v8 = &v46;
      goto LABEL_10;
    case 4:
      v9 = core::str::<impl str>::trim_matches(*(_QWORD *)(a4 + 8), *(_QWORD *)(a4 + 16));
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v40, v9, v10);
      v33 = v41;
      v25 = v40;
      <sniffnet::report::types::search_parameters::SearchParameters as core::clone::Clone>::clone(&v40, a3);
      *(_QWORD *)(a1 + 16) = v41;
      *(_OWORD *)a1 = v40;
      *(_QWORD *)(a1 + 40) = v43;
      *(_OWORD *)(a1 + 24) = v42;
      *(_QWORD *)(a1 + 64) = v45;
      *(_OWORD *)(a1 + 48) = v44;
      *(_QWORD *)(a1 + 88) = v47;
      *(_OWORD *)(a1 + 72) = v46;
      *(_QWORD *)(a1 + 112) = v33;
      *(_OWORD *)(a1 + 96) = v25;
      *(_OWORD *)(a1 + 120) = v50;
      *(_QWORD *)(a1 + 136) = v51;
      *(_OWORD *)(a1 + 144) = v52;
      *(_QWORD *)(a1 + 160) = v53;
      *(_QWORD *)(a1 + 184) = v55;
      *(_OWORD *)(a1 + 168) = v54;
      *(_OWORD *)(a1 + 192) = v56;
      *(_QWORD *)(a1 + 208) = v57;
      *(_BYTE *)(a1 + 216) = v58;
      v8 = &v48;
      goto LABEL_10;
    case 5:
      v19 = core::str::<impl str>::trim_matches(*(_QWORD *)(a4 + 8), *(_QWORD *)(a4 + 16));
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v40, v19, v20);
      v38 = v41;
      v30 = v40;
      <sniffnet::report::types::search_parameters::SearchParameters as core::clone::Clone>::clone(&v40, a3);
      *(_QWORD *)(a1 + 16) = v41;
      *(_OWORD *)a1 = v40;
      *(_QWORD *)(a1 + 40) = v43;
      *(_OWORD *)(a1 + 24) = v42;
      *(_QWORD *)(a1 + 64) = v45;
      *(_OWORD *)(a1 + 48) = v44;
      *(_QWORD *)(a1 + 88) = v47;
      *(_OWORD *)(a1 + 72) = v46;
      *(_QWORD *)(a1 + 112) = v49;
      *(_OWORD *)(a1 + 96) = v48;
      *(_OWORD *)(a1 + 120) = v30;
      *(_QWORD *)(a1 + 136) = v38;
      *(_OWORD *)(a1 + 144) = v52;
      *(_QWORD *)(a1 + 160) = v53;
      *(_QWORD *)(a1 + 184) = v55;
      *(_OWORD *)(a1 + 168) = v54;
      *(_OWORD *)(a1 + 192) = v56;
      *(_QWORD *)(a1 + 208) = v57;
      *(_BYTE *)(a1 + 216) = v58;
      v8 = &v50;
      goto LABEL_10;
    case 6:
      v21 = core::str::<impl str>::trim_matches(*(_QWORD *)(a4 + 8), *(_QWORD *)(a4 + 16));
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v40, v21, v22);
      v39 = v41;
      v31 = v40;
      <sniffnet::report::types::search_parameters::SearchParameters as core::clone::Clone>::clone(&v40, a3);
      *(_QWORD *)(a1 + 16) = v41;
      *(_OWORD *)a1 = v40;
      *(_QWORD *)(a1 + 40) = v43;
      *(_OWORD *)(a1 + 24) = v42;
      *(_QWORD *)(a1 + 64) = v45;
      *(_OWORD *)(a1 + 48) = v44;
      *(_QWORD *)(a1 + 88) = v47;
      *(_OWORD *)(a1 + 72) = v46;
      *(_QWORD *)(a1 + 112) = v49;
      *(_OWORD *)(a1 + 96) = v48;
      *(_OWORD *)(a1 + 120) = v50;
      *(_QWORD *)(a1 + 136) = v51;
      *(_OWORD *)(a1 + 144) = v31;
      *(_QWORD *)(a1 + 160) = v39;
      *(_QWORD *)(a1 + 184) = v55;
      *(_OWORD *)(a1 + 168) = v54;
      *(_OWORD *)(a1 + 192) = v56;
      *(_QWORD *)(a1 + 208) = v57;
      *(_BYTE *)(a1 + 216) = v58;
      v8 = &v52;
      goto LABEL_10;
    case 7:
      v15 = core::str::<impl str>::trim_matches(*(_QWORD *)(a4 + 8), *(_QWORD *)(a4 + 16));
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v40, v15, v16);
      v36 = v41;
      v28 = v40;
      <sniffnet::report::types::search_parameters::SearchParameters as core::clone::Clone>::clone(&v40, a3);
      *(_QWORD *)(a1 + 16) = v41;
      *(_OWORD *)a1 = v40;
      *(_QWORD *)(a1 + 40) = v43;
      *(_OWORD *)(a1 + 24) = v42;
      *(_QWORD *)(a1 + 64) = v45;
      *(_OWORD *)(a1 + 48) = v44;
      *(_QWORD *)(a1 + 88) = v47;
      *(_OWORD *)(a1 + 72) = v46;
      *(_QWORD *)(a1 + 112) = v49;
      *(_OWORD *)(a1 + 96) = v48;
      *(_OWORD *)(a1 + 120) = v50;
      *(_QWORD *)(a1 + 136) = v51;
      *(_OWORD *)(a1 + 144) = v52;
      *(_QWORD *)(a1 + 160) = v53;
      *(_QWORD *)(a1 + 184) = v36;
      *(_OWORD *)(a1 + 168) = v28;
      *(_OWORD *)(a1 + 192) = v56;
      *(_QWORD *)(a1 + 208) = v57;
      *(_BYTE *)(a1 + 216) = v58;
      v8 = &v54;
LABEL_10:
      core::ptr::drop_in_place<alloc::string::String>(v8);
      result = core::ptr::drop_in_place<alloc::string::String>(a4);
      break;
    case 8:
      <sniffnet::report::types::search_parameters::SearchParameters as core::clone::Clone>::clone(&v40, a3);
      *(_QWORD *)(a1 + 16) = v41;
      *(_OWORD *)a1 = v40;
      *(_QWORD *)(a1 + 40) = v43;
      *(_OWORD *)(a1 + 24) = v42;
      *(_QWORD *)(a1 + 64) = v45;
      *(_OWORD *)(a1 + 48) = v44;
      *(_QWORD *)(a1 + 88) = v47;
      *(_OWORD *)(a1 + 72) = v46;
      *(_QWORD *)(a1 + 112) = v49;
      *(_OWORD *)(a1 + 96) = v48;
      *(_OWORD *)(a1 + 120) = v50;
      *(_QWORD *)(a1 + 136) = v51;
      *(_OWORD *)(a1 + 144) = v52;
      *(_QWORD *)(a1 + 160) = v53;
      *(_QWORD *)(a1 + 184) = v55;
      *(_OWORD *)(a1 + 168) = v54;
      *(_OWORD *)(a1 + 192) = *(_OWORD *)a4;
      *(_QWORD *)(a1 + 208) = *(_QWORD *)(a4 + 16);
      *(_BYTE *)(a1 + 216) = v58;
      result = core::ptr::drop_in_place<alloc::string::String>(&v56);
      break;
  }
  return result;
}