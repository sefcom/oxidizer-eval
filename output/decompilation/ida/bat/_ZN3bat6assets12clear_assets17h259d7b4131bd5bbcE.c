__int64 __fastcall bat::assets::clear_assets(__int64 a1, __int64 a2)
{
  _BYTE v3[48]; // [rsp+8h] [rbp-30h] BYREF

  std::path::Path::join(v3, a1, a2, aThemesBin, 10LL);
  bat::assets::clear_asset(v3, aThemeSetCache, 15LL);
  std::path::Path::join(v3, a1, a2, aSyntaxesBin, 12LL);
  bat::assets::clear_asset(v3, aSyntaxSetCache, 16LL);
  std::path::Path::join(v3, a1, a2, aMetadataYaml, 13LL);
  return bat::assets::clear_asset(v3, aMetadataFile, 13LL);
}