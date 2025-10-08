void bat::assets::clear_assets(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x30]

    v0.join(a0, a1, "themes.bintheme set cachesyntaxes.binmetadata.yamlmetadata fileThe binary caches for the user-customized syntaxes and themes in '' are not compatible with this version of bat (0.25.0). To solve this, either rebuild the cache (bat cache --build) or remove t", 10);
    bat::assets::clear_asset(&v0, "theme set cachesyntaxes.binmetadata.yamlmetadata fileThe binary caches for the user-customized syntaxes and themes in '' are not compatible with this version of bat (0.25.0). To solve this, either rebuild the cache (bat cache --build) or remove the custom ", 15);
    v0.join(a0, a1, "syntaxes.binmetadata.yamlmetadata fileThe binary caches for the user-customized syntaxes and themes in '' are not compatible with this version of bat (0.25.0). To solve this, either rebuild the cache (bat cache --build) or remove the custom syntaxes/themes", 12);
    bat::assets::clear_asset(&v0, "syntax set cacheLazyStateIDErrorLowercase_Letter", 16);
    v0.join(a0, a1, "metadata.yamlmetadata fileThe binary caches for the user-customized syntaxes and themes in '' are not compatible with this version of bat (0.25.0). To solve this, either rebuild the cache (bat cache --build) or remove the custom syntaxes/themes (bat cache ", 13);
    bat::assets::clear_asset(&v0, "metadata fileThe binary caches for the user-customized syntaxes and themes in '' are not compatible with this version of bat (0.25.0). To solve this, either rebuild the cache (bat cache --build) or remove the custom syntaxes/themes (bat cache --clear).\nFor more information, see:\n\n  https://github.com/sharkdp/bat#adding-new-syntaxes--language-definitions", 13);
    return;
}
