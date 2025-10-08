__int64 __fastcall bat::assets::get_acknowledgements(__int64 a1)
{
  _BYTE v2[96]; // [rsp+8h] [rbp-60h] BYREF

  bat::assets::asset_from_contents(v2);
  core::result::Result<T,E>::expect(a1, v2);
  return a1;
}