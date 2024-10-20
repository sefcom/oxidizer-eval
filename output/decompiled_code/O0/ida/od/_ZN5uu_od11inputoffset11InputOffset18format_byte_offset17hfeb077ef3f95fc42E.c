__int64 __fastcall uu_od::inputoffset::InputOffset::format_byte_offset(__int64 a1, __int64 *a2)
{
  __int64 v2; // rcx
  __int128 v3; // xmm0
  void *v5; // [rsp+8h] [rbp-3D0h] BYREF
  __int64 v6; // [rsp+10h] [rbp-3C8h]
  _QWORD *v7; // [rsp+18h] [rbp-3C0h]
  __int64 v8; // [rsp+20h] [rbp-3B8h]
  _QWORD *v9; // [rsp+28h] [rbp-3B0h]
  __int64 v10; // [rsp+30h] [rbp-3A8h]
  __int64 v11; // [rsp+38h] [rbp-3A0h] BYREF
  __int64 v12; // [rsp+40h] [rbp-398h] BYREF
  __int64 v13; // [rsp+48h] [rbp-390h] BYREF
  __int64 v14; // [rsp+50h] [rbp-388h] BYREF
  _QWORD v15[2]; // [rsp+58h] [rbp-380h] BYREF
  _QWORD v16[2]; // [rsp+68h] [rbp-370h] BYREF
  _QWORD v17[2]; // [rsp+78h] [rbp-360h] BYREF
  _QWORD v18[2]; // [rsp+88h] [rbp-350h] BYREF
  _QWORD v19[4]; // [rsp+98h] [rbp-340h] BYREF
  _QWORD v20[4]; // [rsp+B8h] [rbp-320h] BYREF
  _QWORD v21[4]; // [rsp+D8h] [rbp-300h] BYREF
  __int128 v22; // [rsp+F8h] [rbp-2E0h] BYREF
  __int64 v23; // [rsp+108h] [rbp-2D0h]
  _QWORD v24[6]; // [rsp+110h] [rbp-2C8h] BYREF
  char v25; // [rsp+140h] [rbp-298h]
  __int128 v26; // [rsp+148h] [rbp-290h] BYREF
  __int64 v27; // [rsp+158h] [rbp-280h]
  __int128 v28; // [rsp+160h] [rbp-278h] BYREF
  __int64 v29; // [rsp+170h] [rbp-268h]
  _QWORD v30[6]; // [rsp+178h] [rbp-260h] BYREF
  char v31; // [rsp+1A8h] [rbp-230h]
  __int128 v32; // [rsp+1B0h] [rbp-228h] BYREF
  __int64 v33; // [rsp+1C0h] [rbp-218h]
  __int128 v34; // [rsp+1C8h] [rbp-210h] BYREF
  __int64 v35; // [rsp+1D8h] [rbp-200h]
  _QWORD v36[6]; // [rsp+1E0h] [rbp-1F8h] BYREF
  char v37; // [rsp+210h] [rbp-1C8h]
  __int128 v38; // [rsp+218h] [rbp-1C0h] BYREF
  __int64 v39; // [rsp+228h] [rbp-1B0h]
  __int128 v40; // [rsp+230h] [rbp-1A8h] BYREF
  __int64 v41; // [rsp+240h] [rbp-198h]
  _QWORD v42[6]; // [rsp+248h] [rbp-190h] BYREF
  char v43; // [rsp+278h] [rbp-160h]
  _QWORD v44[6]; // [rsp+280h] [rbp-158h] BYREF
  char v45; // [rsp+2B0h] [rbp-128h]
  __int64 v46; // [rsp+2B8h] [rbp-120h]
  __int64 v47; // [rsp+2C8h] [rbp-110h]
  __int64 v48; // [rsp+2D0h] [rbp-108h]
  __int64 v49; // [rsp+2D8h] [rbp-100h]
  __int64 v50; // [rsp+2E0h] [rbp-F8h]
  char v51; // [rsp+2E8h] [rbp-F0h]
  _QWORD v52[6]; // [rsp+2F0h] [rbp-E8h] BYREF
  char v53; // [rsp+320h] [rbp-B8h]
  __int64 v54; // [rsp+328h] [rbp-B0h]
  __int64 v55; // [rsp+338h] [rbp-A0h]
  __int64 v56; // [rsp+340h] [rbp-98h]
  __int64 v57; // [rsp+348h] [rbp-90h]
  __int64 v58; // [rsp+350h] [rbp-88h]
  char v59; // [rsp+358h] [rbp-80h]
  _QWORD v60[6]; // [rsp+360h] [rbp-78h] BYREF
  char v61; // [rsp+390h] [rbp-48h]
  __int64 v62; // [rsp+398h] [rbp-40h]
  __int64 v63; // [rsp+3A8h] [rbp-30h]
  __int64 v64; // [rsp+3B0h] [rbp-28h]
  __int64 v65; // [rsp+3B8h] [rbp-20h]
  __int64 v66; // [rsp+3C0h] [rbp-18h]
  char v67; // [rsp+3C8h] [rbp-10h]

  v2 = *a2;
  switch ( *((_BYTE *)a2 + 24) )
  {
    case 0:
      if ( v2 )
      {
        v11 = a2[1];
        v19[0] = a2 + 2;
        v19[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
        v19[2] = &v11;
        v19[3] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
        v44[0] = 2LL;
        v44[2] = 0LL;
        v44[3] = 7LL;
        v44[4] = 0LL;
        v44[5] = 0x800000020LL;
        v45 = 3;
        v46 = 2LL;
        v47 = 0LL;
        v48 = 7LL;
        v49 = 1LL;
        v50 = 0x800000020LL;
        v51 = 3;
        v5 = &unk_12C6A0;
        v6 = 3LL;
        v7 = v19;
        v8 = 2LL;
        v9 = v44;
        v10 = 2LL;
        alloc::fmt::format::format_inner(&v26, &v5);
        *(_QWORD *)(a1 + 16) = v27;
        v3 = v26;
      }
      else
      {
        v15[0] = a2 + 2;
        v15[1] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
        v24[0] = 2LL;
        v24[2] = 0LL;
        v24[3] = 7LL;
        v24[4] = 0LL;
        v24[5] = 0x800000020LL;
        v25 = 3;
        v5 = &anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168;
        v6 = 1LL;
        v7 = v15;
        v8 = 1LL;
        v9 = v24;
        v10 = 1LL;
        alloc::fmt::format::format_inner(&v22, &v5);
        *(_QWORD *)(a1 + 16) = v23;
        v3 = v22;
      }
      goto LABEL_14;
    case 1:
      if ( v2 )
      {
        v12 = a2[1];
        v20[0] = a2 + 2;
        v20[1] = core::fmt::num::<impl core::fmt::UpperHex for usize>::fmt;
        v20[2] = &v12;
        v20[3] = core::fmt::num::<impl core::fmt::UpperHex for usize>::fmt;
        v52[0] = 2LL;
        v52[2] = 0LL;
        v52[3] = 6LL;
        v52[4] = 0LL;
        v52[5] = 0x800000020LL;
        v53 = 3;
        v54 = 2LL;
        v55 = 0LL;
        v56 = 6LL;
        v57 = 1LL;
        v58 = 0x800000020LL;
        v59 = 3;
        v5 = &unk_12C6A0;
        v6 = 3LL;
        v7 = v20;
        v8 = 2LL;
        v9 = v52;
        v10 = 2LL;
        alloc::fmt::format::format_inner(&v32, &v5);
        *(_QWORD *)(a1 + 16) = v33;
        v3 = v32;
      }
      else
      {
        v16[0] = a2 + 2;
        v16[1] = core::fmt::num::<impl core::fmt::UpperHex for usize>::fmt;
        v30[0] = 2LL;
        v30[2] = 0LL;
        v30[3] = 6LL;
        v30[4] = 0LL;
        v30[5] = 0x800000020LL;
        v31 = 3;
        v5 = &anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168;
        v6 = 1LL;
        v7 = v16;
        v8 = 1LL;
        v9 = v30;
        v10 = 1LL;
        alloc::fmt::format::format_inner(&v28, &v5);
        *(_QWORD *)(a1 + 16) = v29;
        v3 = v28;
      }
      goto LABEL_14;
    case 2:
      if ( v2 )
      {
        v13 = a2[1];
        v21[0] = a2 + 2;
        v21[1] = core::fmt::num::<impl core::fmt::Octal for usize>::fmt;
        v21[2] = &v13;
        v21[3] = core::fmt::num::<impl core::fmt::Octal for usize>::fmt;
        v60[0] = 2LL;
        v60[2] = 0LL;
        v60[3] = 7LL;
        v60[4] = 0LL;
        v60[5] = 0x800000020LL;
        v61 = 3;
        v62 = 2LL;
        v63 = 0LL;
        v64 = 7LL;
        v65 = 1LL;
        v66 = 0x800000020LL;
        v67 = 3;
        v5 = &unk_12C6A0;
        v6 = 3LL;
        v7 = v21;
        v8 = 2LL;
        v9 = v60;
        v10 = 2LL;
        alloc::fmt::format::format_inner(&v38, &v5);
        *(_QWORD *)(a1 + 16) = v39;
        v3 = v38;
      }
      else
      {
        v17[0] = a2 + 2;
        v17[1] = core::fmt::num::<impl core::fmt::Octal for usize>::fmt;
        v36[0] = 2LL;
        v36[2] = 0LL;
        v36[3] = 7LL;
        v36[4] = 0LL;
        v36[5] = 0x800000020LL;
        v37 = 3;
        v5 = &anon_5881361bc50ddb8569a319ef7cd28565_52_llvm_17519153253422479168;
        v6 = 1LL;
        v7 = v17;
        v8 = 1LL;
        v9 = v36;
        v10 = 1LL;
        alloc::fmt::format::format_inner(&v34, &v5);
        *(_QWORD *)(a1 + 16) = v35;
        v3 = v34;
      }
      goto LABEL_14;
    case 3:
      if ( v2 )
      {
        v14 = a2[1];
        v18[0] = &v14;
        v18[1] = core::fmt::num::<impl core::fmt::Octal for usize>::fmt;
        v42[0] = 2LL;
        v42[2] = 0LL;
        v42[3] = 7LL;
        v42[4] = 0LL;
        v42[5] = 0x800000020LL;
        v43 = 3;
        v5 = &off_12C6D0;
        v6 = 2LL;
        v7 = v18;
        v8 = 1LL;
        v9 = v42;
        v10 = 1LL;
        alloc::fmt::format::format_inner(&v40, &v5);
        *(_QWORD *)(a1 + 16) = v41;
        v3 = v40;
LABEL_14:
        *(_OWORD *)a1 = v3;
      }
      else
      {
        *(_QWORD *)a1 = 0LL;
        *(_QWORD *)(a1 + 8) = 1LL;
        *(_QWORD *)(a1 + 16) = 0LL;
      }
      return a1;
  }
}
