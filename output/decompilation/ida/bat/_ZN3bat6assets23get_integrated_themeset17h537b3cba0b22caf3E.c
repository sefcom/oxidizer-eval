__int64 __fastcall bat::assets::get_integrated_themeset(__int64 a1)
{
  _BYTE v2[96]; // [rsp+8h] [rbp-60h] BYREF

  bat::assets::asset_from_contents(v2, &unk_191C7F, 58235LL, aNA, 3LL);
  return core::result::Result<T,E>::expect(a1, v2);
}