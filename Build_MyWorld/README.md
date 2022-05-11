## Build_MyWorld
##### Spawning a differential drive robot in a simulation environment. Also displaying Hello World mesaage on the terminal as soon as the World is launched.

### Build and compile
* Compiling the code in `scripts` directory is necessary to make the plugin work.
* Make a directory names as build, `mkdir build`
* Build directory can be located on the same level as CMakeLists.txt
* After making a build directory, open it `cd build`, then use the following commands to compile the code

```
$ cmake ../
$ make
```
### Post building and compilation, you need to set a path for gazebo to know where to check your plugin too.
##### Path could be checked in the build folder by, ``` pwd ```
```
$ export GAZEBO_PLUGIN_PATH=${GAZEBO_PLUGIN_PATH}:<Path: Output of pwd>
```
### Run
* Use the command `gazebo worldSubmit1` to run the simulation

### Results

![Screenshot from 2022-05-11 22-29-07](https://user-images.githubusercontent.com/97186785/167906069-6745a759-416f-4ffc-9db4-d8812ad23caf.png)
