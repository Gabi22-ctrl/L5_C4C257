cjson_dep = declare_dependency(
  include_directories: include_directories('/usr/include'),
  dependencies: [],
  link_args: ['-lcjson']
)

executable('archivo_json',
  ['main.c', 'json.c'],
  dependencies: cjson_dep
)
