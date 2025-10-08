__int64 __fastcall uu_chown::uumain::uumain(__int64 a1, __int64 a2)
{
  _BYTE v3[736]; // [rsp+8h] [rbp-2E0h] BYREF

  uu_chown::uu_app(v3);
  return uucore::features::perms::chown_base(v3, a1, a2);
}