__int64 __fastcall zoxide::util::Fzf::enable_preview(__int64 a1)
{
  const char *v2; // [rsp+0h] [rbp-68h] BYREF
  __int64 v3; // [rsp+8h] [rbp-60h]
  const char *v4; // [rsp+10h] [rbp-58h]
  __int64 v5; // [rsp+18h] [rbp-50h]
  const char *v6; // [rsp+20h] [rbp-48h]
  __int64 v7; // [rsp+28h] [rbp-40h]
  const char *v8; // [rsp+30h] [rbp-38h]
  __int64 v9; // [rsp+38h] [rbp-30h]
  const char *v10; // [rsp+40h] [rbp-28h]
  __int64 v11; // [rsp+48h] [rbp-20h]
  const char *v12; // [rsp+50h] [rbp-18h]
  __int64 v13; // [rsp+58h] [rbp-10h]

  v2 = aPreviewCommand;
  v3 = 75LL;
  v4 = aPreviewWindowD;
  v5 = 31LL;
  ((void (__fastcall *)(__int64, const char **))std::process::Command::args)(a1, &v2);
  v2 = aClicolor;
  v3 = 8LL;
  v4 = ::a1;
  v5 = 1LL;
  v6 = aClicolorForce;
  v7 = 14LL;
  v8 = ::a1;
  v9 = 1LL;
  v10 = aShell;
  v11 = 5LL;
  v12 = aSh;
  v13 = 2LL;
  ((void (__fastcall *)(__int64, const char **))std::process::Command::envs)(a1, &v2);
  return a1;
}