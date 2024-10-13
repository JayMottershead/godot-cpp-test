# godot-cpp-test
Testing godot cpp stuff

## Setup
Make sure to use the Open Local Folder option in the visual studio start window.

Inside the .vs folder, create a new `launch.vs.json` file and copy/paste this:
```
{
  "version": "0.2.1",
  "defaults": {},
  "configurations": [
    {
      "type": "default",
      "project": "C:\\Full\\Path\\To\\godot-cpp-test\\godot\\bin\\godot.windows.editor.dev.x86_64.exe",
      "name": "Godot Game",
      "args": [ "--path", "C:\\Full\\Path\\To\\godot-cpp-test\\demo" ]
    },
    {
      "type": "default",
      "project": "C:\\Full\\Path\\To\\godot-cpp-test\\godot\\bin\\godot.windows.editor.dev.x86_64.exe",
      "name": "Godot Editor",
      "args": [ "C:\\Full\\Path\\To\\godot-cpp-test\\demo\\project.godot" ]
    }
  ]
}
```
