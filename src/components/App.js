import React from "react";

export default function App() {
    function actionOne() {
        console.log("yo");
    }

    return (
        <div>
            <h1>Testing</h1>
            <button onClick={() => actionOne()}>Action One</button>
        </div>
    );
}
