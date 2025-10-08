__int64 __fastcall uu_uname::UNameOutput::new(__int64 a1, unsigned __int8 *a2)
{
  unsigned __int64 v2; // rbp
  unsigned __int8 v3; // r13
  unsigned __int8 v4; // al
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r14
  unsigned __int64 v10; // [rsp+0h] [rbp-508h]
  unsigned __int64 v11; // [rsp+8h] [rbp-500h]
  unsigned __int64 v12; // [rsp+10h] [rbp-4F8h]
  unsigned __int64 v13; // [rsp+18h] [rbp-4F0h]
  __int64 v14; // [rsp+20h] [rbp-4E8h]
  __int64 v15; // [rsp+28h] [rbp-4E0h]
  __int64 v16; // [rsp+30h] [rbp-4D8h]
  __int64 v17; // [rsp+38h] [rbp-4D0h]
  __int64 v18; // [rsp+40h] [rbp-4C8h]
  __int64 v19; // [rsp+48h] [rbp-4C0h]
  __int64 v20; // [rsp+50h] [rbp-4B8h]
  unsigned __int64 v21; // [rsp+58h] [rbp-4B0h]
  __int64 v22; // [rsp+60h] [rbp-4A8h]
  __int64 v23; // [rsp+68h] [rbp-4A0h]
  __int64 v24; // [rsp+70h] [rbp-498h]
  __int64 v25; // [rsp+78h] [rbp-490h]
  __int64 v26; // [rsp+80h] [rbp-488h]
  __int64 v27; // [rsp+88h] [rbp-480h]
  __int128 v28; // [rsp+90h] [rbp-478h]
  unsigned __int64 v29; // [rsp+A8h] [rbp-460h] BYREF
  __int128 v30; // [rsp+B0h] [rbp-458h]
  _BYTE src[512]; // [rsp+C0h] [rbp-448h] BYREF
  unsigned __int64 v32; // [rsp+2C0h] [rbp-248h] BYREF
  __int128 v33; // [rsp+2C8h] [rbp-240h]
  _QWORD dest[64]; // [rsp+2D8h] [rbp-230h] BYREF

  v2 = 0x8000000000000000LL;
  <platform_info::lib_impl::target::PlatformInfo as platform_info::PlatformInfoAPI>::new(&v29);
  if ( !__OFSUB__(-(__int64)v29, 1LL) )
  {
    memcpy(dest, src, sizeof(dest));
    v32 = v29;
    v33 = v30;
    v3 = *a2;
    v4 = a2[1];
    if ( *a2 || (v4 & 1) != 0 || a2[2] || a2[4] || a2[3] || a2[5] || a2[8] || a2[6] )
    {
      if ( ((v3 | v4) & 1) != 0 )
        goto LABEL_12;
      v5 = 0x8000000000000000LL;
      if ( v3 | a2[2] )
        goto LABEL_15;
    }
    else
    {
      if ( !a2[7] )
      {
LABEL_12:
        uu_uname::UNameOutput::new::{{closure}}(&v29, v30, *((_QWORD *)&v30 + 1));
        v5 = v29;
        v27 = *((_QWORD *)&v30 + 1);
        v20 = v30;
        if ( !(v3 | a2[2]) )
          goto LABEL_18;
LABEL_15:
        uu_uname::UNameOutput::new::{{closure}}(&v29, dest[1], dest[2]);
        v6 = v29;
        v22 = *((_QWORD *)&v30 + 1);
        v14 = v30;
        goto LABEL_19;
      }
      v5 = 0x8000000000000000LL;
    }
LABEL_18:
    v6 = 0x8000000000000000LL;
LABEL_19:
    v13 = v5;
    v21 = v6;
    if ( v3 | a2[4] )
    {
      uu_uname::UNameOutput::new::{{closure}}(&v29, dest[4], dest[5]);
      v12 = v29;
      v26 = *((_QWORD *)&v30 + 1);
      v19 = v30;
      if ( !(v3 | a2[3]) )
      {
        v10 = 0x8000000000000000LL;
        goto LABEL_24;
      }
    }
    else
    {
      v12 = 0x8000000000000000LL;
      v10 = 0x8000000000000000LL;
      if ( !a2[3] )
        goto LABEL_24;
    }
    uu_uname::UNameOutput::new::{{closure}}(&v29, dest[7], dest[8]);
    v10 = v29;
    v25 = *((_QWORD *)&v30 + 1);
    v18 = v30;
LABEL_24:
    if ( v3 | a2[5] )
    {
      uu_uname::UNameOutput::new::{{closure}}(&v29, dest[10], dest[11]);
      v11 = v29;
      v24 = *((_QWORD *)&v30 + 1);
      v17 = v30;
      if ( !(a2[8] | v3) )
      {
        v7 = 0x8000000000000000LL;
        goto LABEL_29;
      }
    }
    else
    {
      v11 = 0x8000000000000000LL;
      v7 = 0x8000000000000000LL;
      if ( !a2[8] )
        goto LABEL_29;
    }
    uu_uname::UNameOutput::new::{{closure}}(&v29, dest[13], dest[14]);
    v7 = v29;
    v23 = *((_QWORD *)&v30 + 1);
    v16 = v30;
LABEL_29:
    if ( a2[6] )
    {
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v29, aUnknown, 7LL);
      v8 = v29;
      v6 = *((_QWORD *)&v30 + 1);
      v15 = v30;
      if ( !a2[7] )
        goto LABEL_34;
    }
    else
    {
      v8 = 0x8000000000000000LL;
      if ( !a2[7] )
      {
LABEL_34:
        *(_QWORD *)a1 = v13;
        *(_QWORD *)(a1 + 8) = v20;
        *(_QWORD *)(a1 + 16) = v27;
        *(_QWORD *)(a1 + 24) = v21;
        *(_QWORD *)(a1 + 32) = v14;
        *(_QWORD *)(a1 + 40) = v22;
        *(_QWORD *)(a1 + 48) = v12;
        *(_QWORD *)(a1 + 56) = v19;
        *(_QWORD *)(a1 + 64) = v26;
        *(_QWORD *)(a1 + 72) = v10;
        *(_QWORD *)(a1 + 80) = v18;
        *(_QWORD *)(a1 + 88) = v25;
        *(_QWORD *)(a1 + 96) = v11;
        *(_QWORD *)(a1 + 104) = v17;
        *(_QWORD *)(a1 + 112) = v24;
        *(_QWORD *)(a1 + 120) = v7;
        *(_QWORD *)(a1 + 128) = v16;
        *(_QWORD *)(a1 + 136) = v23;
        *(_QWORD *)(a1 + 144) = v8;
        *(_QWORD *)(a1 + 152) = v15;
        *(_QWORD *)(a1 + 160) = v6;
        *(_QWORD *)(a1 + 168) = v2;
        *(_OWORD *)(a1 + 176) = v28;
        core::ptr::drop_in_place<platform_info::lib_impl::target::PlatformInfo>(&v32);
        return a1;
      }
    }
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v29, aUnknown, 7LL);
    v2 = v29;
    v28 = v30;
    goto LABEL_34;
  }
  *(_QWORD *)(a1 + 8) = uu_uname::UNameOutput::new::{{closure}}(v30, *((_QWORD *)&v30 + 1));
  *(_QWORD *)(a1 + 16) = &off_DA138;
  *(_QWORD *)a1 = 0x8000000000000001LL;
  return a1;
}