__int64 __fastcall uu_od::prn_char::format_item_c(__int64 a1, unsigned __int8 *a2, unsigned __int64 a3)
{
  int v3; // eax
  __int128 v4; // xmm0
  __int64 v6; // r14
  _DWORD *v7; // r15
  char v8; // [rsp+Fh] [rbp-459h] BYREF
  void *v9; // [rsp+10h] [rbp-458h] BYREF
  __int64 v10; // [rsp+18h] [rbp-450h]
  _QWORD *v11; // [rsp+20h] [rbp-448h]
  __int64 v12; // [rsp+28h] [rbp-440h]
  _QWORD *v13; // [rsp+30h] [rbp-438h]
  __int64 v14; // [rsp+38h] [rbp-430h]
  char *v15; // [rsp+40h] [rbp-428h] BYREF
  _QWORD v16[2]; // [rsp+48h] [rbp-420h] BYREF
  _QWORD v17[2]; // [rsp+58h] [rbp-410h] BYREF
  _QWORD v18[2]; // [rsp+68h] [rbp-400h] BYREF
  _QWORD v19[2]; // [rsp+78h] [rbp-3F0h] BYREF
  _QWORD v20[2]; // [rsp+88h] [rbp-3E0h] BYREF
  _QWORD v21[2]; // [rsp+98h] [rbp-3D0h] BYREF
  _QWORD v22[2]; // [rsp+A8h] [rbp-3C0h] BYREF
  _QWORD v23[2]; // [rsp+B8h] [rbp-3B0h] BYREF
  _QWORD v24[6]; // [rsp+C8h] [rbp-3A0h] BYREF
  _QWORD v25[6]; // [rsp+F8h] [rbp-370h] BYREF
  _QWORD v26[6]; // [rsp+128h] [rbp-340h] BYREF
  __int128 v27; // [rsp+158h] [rbp-310h] BYREF
  __int64 v28; // [rsp+168h] [rbp-300h]
  _QWORD v29[6]; // [rsp+170h] [rbp-2F8h] BYREF
  char v30; // [rsp+1A0h] [rbp-2C8h]
  __int64 v31; // [rsp+1A8h] [rbp-2C0h] BYREF
  __int128 v32; // [rsp+1B0h] [rbp-2B8h]
  __int128 v33; // [rsp+1C0h] [rbp-2A8h] BYREF
  __int128 v34; // [rsp+1D0h] [rbp-298h] BYREF
  __int64 v35; // [rsp+1E0h] [rbp-288h]
  _QWORD v36[6]; // [rsp+1E8h] [rbp-280h] BYREF
  char v37; // [rsp+218h] [rbp-250h]
  __int128 v38; // [rsp+220h] [rbp-248h] BYREF
  __int64 v39; // [rsp+230h] [rbp-238h]
  _QWORD v40[6]; // [rsp+238h] [rbp-230h] BYREF
  char v41; // [rsp+268h] [rbp-200h]
  __int64 v42; // [rsp+270h] [rbp-1F8h] BYREF
  __int128 v43; // [rsp+278h] [rbp-1F0h]
  __int128 v44; // [rsp+288h] [rbp-1E0h] BYREF
  __int128 v45; // [rsp+298h] [rbp-1D0h] BYREF
  __int64 v46; // [rsp+2A8h] [rbp-1C0h]
  _QWORD v47[6]; // [rsp+2B0h] [rbp-1B8h] BYREF
  char v48; // [rsp+2E0h] [rbp-188h]
  __int128 v49; // [rsp+2E8h] [rbp-180h] BYREF
  __int64 v50; // [rsp+2F8h] [rbp-170h]
  _QWORD v51[6]; // [rsp+300h] [rbp-168h] BYREF
  char v52; // [rsp+330h] [rbp-138h]
  __int64 v53; // [rsp+338h] [rbp-130h] BYREF
  __int128 v54; // [rsp+340h] [rbp-128h]
  __int128 v55; // [rsp+350h] [rbp-118h] BYREF
  __int128 v56; // [rsp+360h] [rbp-108h] BYREF
  __int64 v57; // [rsp+370h] [rbp-F8h]
  _QWORD v58[6]; // [rsp+378h] [rbp-F0h] BYREF
  char v59; // [rsp+3A8h] [rbp-C0h]
  __int128 v60; // [rsp+3B0h] [rbp-B8h] BYREF
  __int64 v61; // [rsp+3C0h] [rbp-A8h]
  _QWORD v62[6]; // [rsp+3C8h] [rbp-A0h] BYREF
  char v63; // [rsp+3F8h] [rbp-70h]
  __int128 v64; // [rsp+400h] [rbp-68h] BYREF
  __int64 v65; // [rsp+410h] [rbp-58h]
  _QWORD v66[6]; // [rsp+418h] [rbp-50h] BYREF
  char v67; // [rsp+448h] [rbp-20h]

  if ( !a3 )
    core::panicking::panic_bounds_check(0LL, 0LL, &off_12E320);
  v3 = *a2;
  v8 = v3;
  if ( (v3 & 0x80u) == 0 )
  {
    v15 = (char *)&uu_od::prn_char::C_CHARS + (unsigned int)(16 * v3);
    v16[0] = &v15;
    v16[1] = <&T as core::fmt::Display>::fmt;
    v29[0] = 2LL;
    v29[2] = 0LL;
    v29[3] = 4LL;
    v29[4] = 0LL;
    v29[5] = 32LL;
    v30 = 1;
    v9 = &anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168;
    v10 = 1LL;
    v11 = v16;
    v12 = 1LL;
    v13 = v29;
    v14 = 1LL;
    alloc::fmt::format::format_inner(&v27, &v9);
    *(_QWORD *)(a1 + 16) = v28;
    v4 = v27;
LABEL_4:
    *(_OWORD *)a1 = v4;
    return a1;
  }
  if ( (v3 & 0xC0) != 0x80 )
  {
    if ( (v3 & 0xE0) != 0xC0 || a3 == 1 )
    {
      if ( (v3 & 0xF0) == 0xE0 && a3 > 2 )
      {
        core::str::converts::from_utf8(&v42, a2, 3LL);
        if ( v42 )
        {
          v20[0] = &v8;
          v20[1] = core::fmt::num::<impl core::fmt::Octal for u8>::fmt;
          v51[0] = 2LL;
          v51[2] = 0LL;
          v51[3] = 3LL;
          v51[4] = 0LL;
          v51[5] = 0x800000020LL;
          v52 = 3;
          v9 = &off_12E338;
          v10 = 1LL;
          v11 = v20;
          v12 = 1LL;
          v13 = v51;
          v14 = 1LL;
          alloc::fmt::format::format_inner(&v49, &v9);
          *(_QWORD *)(a1 + 16) = v50;
          v4 = v49;
        }
        else
        {
          v44 = v43;
          v19[0] = &v44;
          v19[1] = <&T as core::fmt::Display>::fmt;
          v47[0] = 2LL;
          v47[2] = 0LL;
          v47[3] = 4LL;
          v47[4] = 0LL;
          v47[5] = 32LL;
          v48 = 1;
          v24[0] = &anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168;
          v24[1] = 1LL;
          v24[4] = v47;
          v24[5] = 1LL;
          v24[2] = v19;
          v24[3] = 1LL;
          alloc::fmt::format(&v45, v24);
          *(_QWORD *)(a1 + 16) = v46;
          v4 = v45;
        }
      }
      else if ( (v3 & 0xF8) == 0xF0 && a3 > 3 )
      {
        core::str::converts::from_utf8(&v53, a2, 4LL);
        if ( v53 )
        {
          v22[0] = &v8;
          v22[1] = core::fmt::num::<impl core::fmt::Octal for u8>::fmt;
          v62[0] = 2LL;
          v62[2] = 0LL;
          v62[3] = 3LL;
          v62[4] = 0LL;
          v62[5] = 0x800000020LL;
          v63 = 3;
          v26[0] = &off_12E338;
          v26[1] = 1LL;
          v26[4] = v62;
          v26[5] = 1LL;
          v26[2] = v22;
          v26[3] = 1LL;
          alloc::fmt::format(&v60, v26);
          *(_QWORD *)(a1 + 16) = v61;
          v4 = v60;
        }
        else
        {
          v55 = v54;
          v21[0] = &v55;
          v21[1] = <&T as core::fmt::Display>::fmt;
          v58[0] = 2LL;
          v58[2] = 0LL;
          v58[3] = 4LL;
          v58[4] = 0LL;
          v58[5] = 32LL;
          v59 = 1;
          v25[0] = &anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168;
          v25[1] = 1LL;
          v25[4] = v58;
          v25[5] = 1LL;
          v25[2] = v21;
          v25[3] = 1LL;
          alloc::fmt::format(&v56, v25);
          *(_QWORD *)(a1 + 16) = v57;
          v4 = v56;
        }
      }
      else
      {
        v23[0] = &v8;
        v23[1] = core::fmt::num::<impl core::fmt::Octal for u8>::fmt;
        v66[0] = 2LL;
        v66[2] = 0LL;
        v66[3] = 3LL;
        v66[4] = 0LL;
        v66[5] = 0x800000020LL;
        v67 = 3;
        v9 = &off_12E338;
        v10 = 1LL;
        v11 = v23;
        v12 = 1LL;
        v13 = v66;
        v14 = 1LL;
        alloc::fmt::format::format_inner(&v64, &v9);
        *(_QWORD *)(a1 + 16) = v65;
        v4 = v64;
      }
    }
    else
    {
      core::str::converts::from_utf8(&v31, a2, 2LL);
      if ( v31 )
      {
        v18[0] = &v8;
        v18[1] = core::fmt::num::<impl core::fmt::Octal for u8>::fmt;
        v40[0] = 2LL;
        v40[2] = 0LL;
        v40[3] = 3LL;
        v40[4] = 0LL;
        v40[5] = 0x800000020LL;
        v41 = 3;
        v9 = &off_12E338;
        v10 = 1LL;
        v11 = v18;
        v12 = 1LL;
        v13 = v40;
        v14 = 1LL;
        alloc::fmt::format::format_inner(&v38, &v9);
        *(_QWORD *)(a1 + 16) = v39;
        v4 = v38;
      }
      else
      {
        v33 = v32;
        v17[0] = &v33;
        v17[1] = <&T as core::fmt::Display>::fmt;
        v36[0] = 2LL;
        v36[2] = 0LL;
        v36[3] = 4LL;
        v36[4] = 0LL;
        v36[5] = 32LL;
        v37 = 1;
        v9 = &anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168;
        v10 = 1LL;
        v11 = v17;
        v12 = 1LL;
        v13 = v36;
        v14 = 1LL;
        alloc::fmt::format::format_inner(&v34, &v9);
        *(_QWORD *)(a1 + 16) = v35;
        v4 = v34;
      }
    }
    goto LABEL_4;
  }
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v9, 4LL, 0LL);
  v6 = v10;
  if ( v9 )
    alloc::raw_vec::handle_error(v10, v11);
  v7 = v11;
  core::intrinsics::copy_nonoverlapping::precondition_check(&unk_1C8E0, v11, 1LL, 1LL, 4LL);
  *v7 = 707403808;
  *(_QWORD *)a1 = v6;
  *(_QWORD *)(a1 + 8) = v7;
  *(_QWORD *)(a1 + 16) = 4LL;
  return a1;
}
