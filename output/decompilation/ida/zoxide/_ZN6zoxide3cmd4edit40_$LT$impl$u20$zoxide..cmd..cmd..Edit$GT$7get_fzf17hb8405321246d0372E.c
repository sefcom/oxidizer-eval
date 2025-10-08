__int64 __fastcall zoxide::cmd::edit::<impl zoxide::cmd::cmd::Edit>::get_fzf(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+0h] [rbp-1D8h] BYREF
  __int64 v3; // [rsp+8h] [rbp-1D0h]
  _QWORD src[26]; // [rsp+10h] [rbp-1C8h] BYREF
  _QWORD v5[2]; // [rsp+E0h] [rbp-F8h] BYREF
  _BYTE dest[208]; // [rsp+F0h] [rbp-E8h] BYREF

  zoxide::util::Fzf::new(&v2);
  result = -v2;
  if ( __OFSUB__(-v2, 1LL) )
  {
    *(_QWORD *)(a1 + 8) = v3;
    *(_DWORD *)a1 = 1;
  }
  else
  {
    memcpy(dest, src, sizeof(dest));
    v5[0] = v2;
    v5[1] = v3;
    v2 = (__int64)aExact;
    v3 = 7LL;
    src[0] = aNoSort;
    src[1] = 9LL;
    src[2] = aBindBtabUpCtrl;
    src[3] = 262LL;
    src[4] = aCycle;
    src[5] = 7LL;
    src[6] = aKeepRight;
    src[7] = 12LL;
    src[8] = aBorderSharp;
    src[9] = 14LL;
    src[10] = aBorderLabelZox;
    src[11] = 30LL;
    src[12] = aHeaderCtrlRRel;
    src[13] = 86LL;
    src[14] = aInfoInline;
    src[15] = 13LL;
    src[16] = aLayoutReverse;
    src[17] = 16LL;
    src[18] = aPadding1000;
    src[19] = 17LL;
    src[20] = aColorLabelBold;
    src[21] = 18LL;
    src[22] = aTabstop1;
    src[23] = 11LL;
    ((void (__fastcall *)(_QWORD *, __int64 *))std::process::Command::args)(v5, &v2);
    zoxide::util::Fzf::enable_preview(v5);
    zoxide::util::Fzf::spawn(a1, v5);
    return core::ptr::drop_in_place<zoxide::util::Fzf>(v5);
  }
  return result;
}